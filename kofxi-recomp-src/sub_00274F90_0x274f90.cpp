#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00274F90
// Address: 0x274f90 - 0x275078
void sub_00274F90_0x274f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274F90_0x274f90");
#endif

    switch (ctx->pc) {
        case 0x274fccu: goto label_274fcc;
        case 0x275010u: goto label_275010;
        case 0x275028u: goto label_275028;
        case 0x275030u: goto label_275030;
        case 0x275064u: goto label_275064;
        default: break;
    }

    ctx->pc = 0x274f90u;

    // 0x274f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274f94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274f98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x274f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x274fa0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x274fa4: 0x24634fec  addiu       $v1, $v1, 0x4FEC
    ctx->pc = 0x274fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20460));
    // 0x274fa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274fac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274FACu;
    {
        const bool branch_taken_0x274fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274fac) {
            ctx->pc = 0x274FCCu;
            goto label_274fcc;
        }
    }
    ctx->pc = 0x274FB4u;
    // 0x274fb4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274fb8: 0x24845000  addiu       $a0, $a0, 0x5000
    ctx->pc = 0x274fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20480));
    // 0x274fbc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x274fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274fc0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x274fc4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274FC4u;
    SET_GPR_U32(ctx, 31, 0x274FCCu);
    ctx->pc = 0x274FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274FC4u;
            // 0x274fc8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FCCu; }
        if (ctx->pc != 0x274FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FCCu; }
        if (ctx->pc != 0x274FCCu) { return; }
    }
    ctx->pc = 0x274FCCu;
label_274fcc:
    // 0x274fcc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274FCCu;
    {
        const bool branch_taken_0x274fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274fcc) {
            ctx->pc = 0x275000u;
            goto label_275000;
        }
    }
    ctx->pc = 0x274FD4u;
    // 0x274fd4: 0xdc841d27  ld          $a0, 0x1D27($a0)
    ctx->pc = 0x274fd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 7463)));
    // 0x274fd8: 0x1dfc020  add         $t8, $t6, $ra
    ctx->pc = 0x274fd8u;
    {     int32_t rs_val = GPR_S32(ctx, 14);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x274fdc: 0x65a020  add         $s4, $v1, $a1
    ctx->pc = 0x274fdcu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x274fe0: 0x26cb87c0  addiu       $t3, $s6, -0x7840
    ctx->pc = 0x274fe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936512));
    // 0x274fe4: 0xddb81897  ld          $t8, 0x1897($t5)
    ctx->pc = 0x274fe4u;
    SET_GPR_U64(ctx, 24, READ64(ADD32(GPR_U32(ctx, 13), 6295)));
    // 0x274fe8: 0xa18cba61  sb          $t4, -0x459F($t4)
    ctx->pc = 0x274fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4294949473), (uint8_t)GPR_U32(ctx, 12));
    // 0x274fec: 0x0  nop
    ctx->pc = 0x274fecu;
    // NOP
    // 0x274ff0: 0x3fb23083  .word       0x3FB23083                   # lui         $s2, 0x3083 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x274ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)12419 << 16));
    // 0x274ff4: 0x971e2850  lhu         $fp, 0x2850($t8)
    ctx->pc = 0x274ff4u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10320)));
    // 0x274ff8: 0x3fb23097  .word       0x3FB23097                   # lui         $s2, 0x3097 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x274ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)12439 << 16));
    // 0x274ffc: 0x0  nop
    ctx->pc = 0x274ffcu;
    // NOP
label_275000:
    // 0x275000: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x275000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x275004: 0x8c433408  lw          $v1, 0x3408($v0)
    ctx->pc = 0x275004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13320)));
    // 0x275008: 0xc09e56c  jal         func_2795B0
    ctx->pc = 0x275008u;
    SET_GPR_U32(ctx, 31, 0x275010u);
    ctx->pc = 0x27500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275008u;
            // 0x27500c: 0x64000094  daddiu      $zero, $zero, 0x94 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)148);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2795B0u;
    if (runtime->hasFunction(0x2795B0u)) {
        auto targetFn = runtime->lookupFunction(0x2795B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275010u; }
        if (ctx->pc != 0x275010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002795B0_0x2795b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275010u; }
        if (ctx->pc != 0x275010u) { return; }
    }
    ctx->pc = 0x275010u;
label_275010:
    // 0x275010: 0x20000a6  .word       0x020000A6                   # xor         $zero, $s0, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275010u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 0));
    // 0x275014: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x275014u;
    {
        const bool branch_taken_0x275014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275014) {
            ctx->pc = 0x275044u;
            goto label_275044;
        }
    }
    ctx->pc = 0x27501Cu;
    // 0x27501c: 0xa1a21989  sb          $v0, 0x1989($t5)
    ctx->pc = 0x27501cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 6537), (uint8_t)GPR_U32(ctx, 2));
    // 0x275020: 0xc986b54  jal         func_261AD50
    ctx->pc = 0x275020u;
    SET_GPR_U32(ctx, 31, 0x275028u);
    ctx->pc = 0x275024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275020u;
            // 0x275024: 0x8e5ce355  lw          $gp, -0x1CAB($s2) (Delay Slot)
        SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294959957)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261AD50u;
    {
        auto targetFn = runtime->lookupFunction(0x261AD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275028u; }
        if (ctx->pc != 0x275028u) { return; }
    }
    ctx->pc = 0x275028u;
label_275028:
    // 0x275028: 0xc1ccaf7  jal         func_732BDC
    ctx->pc = 0x275028u;
    SET_GPR_U32(ctx, 31, 0x275030u);
    ctx->pc = 0x27502Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275028u;
            // 0x27502c: 0x11b2020  add         $a0, $t0, $k1 (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
        ctx->in_delay_slot = false;
    ctx->pc = 0x732BDCu;
    {
        auto targetFn = runtime->lookupFunction(0x732BDCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275030u; }
        if (ctx->pc != 0x275030u) { return; }
    }
    ctx->pc = 0x275030u;
label_275030:
    // 0x275030: 0xff56f6c2  sd          $s6, -0x93E($k0)
    ctx->pc = 0x275030u;
    WRITE64(ADD32(GPR_U32(ctx, 26), 4294964930), GPR_U64(ctx, 22));
    // 0x275034: 0x3fb23380  .word       0x3FB23380                   # lui         $s2, 0x3380 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275034u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)13184 << 16));
    // 0x275038: 0x971e2851  lhu         $fp, 0x2851($t8)
    ctx->pc = 0x275038u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10321)));
    // 0x27503c: 0x3fb23394  .word       0x3FB23394                   # lui         $s2, 0x3394 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27503cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)13204 << 16));
    // 0x275040: 0x0  nop
    ctx->pc = 0x275040u;
    // NOP
label_275044:
    // 0x275044: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x275044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x275048: 0x24425034  addiu       $v0, $v0, 0x5034
    ctx->pc = 0x275048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20532));
    // 0x27504c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x27504cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275050: 0x24845014  addiu       $a0, $a0, 0x5014
    ctx->pc = 0x275050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20500));
    // 0x275054: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x275054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x275058: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x275058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27505c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27505Cu;
    SET_GPR_U32(ctx, 31, 0x275064u);
    ctx->pc = 0x275060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27505Cu;
            // 0x275060: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275064u; }
        if (ctx->pc != 0x275064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275064u; }
        if (ctx->pc != 0x275064u) { return; }
    }
    ctx->pc = 0x275064u;
label_275064:
    // 0x275064: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x275064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27506c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27506cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275070: 0x3e00008  jr          $ra
    ctx->pc = 0x275070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275070u;
            // 0x275074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275078u;
    ctx->pc = 0x275078u;
}
