#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00278DC0
// Address: 0x278dc0 - 0x278ec8
void sub_00278DC0_0x278dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278DC0_0x278dc0");
#endif

    switch (ctx->pc) {
        case 0x278de0u: goto label_278de0;
        case 0x278e1cu: goto label_278e1c;
        case 0x278e30u: goto label_278e30;
        case 0x278e38u: goto label_278e38;
        case 0x278e48u: goto label_278e48;
        case 0x278e50u: goto label_278e50;
        case 0x278e78u: goto label_278e78;
        case 0x278e80u: goto label_278e80;
        case 0x278ea0u: goto label_278ea0;
        default: break;
    }

    ctx->pc = 0x278dc0u;

    // 0x278dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278dcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x278dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278dd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x278dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x278dd4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x278dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x278dd8: 0xc09d5f6  jal         func_2757D8
    ctx->pc = 0x278DD8u;
    SET_GPR_U32(ctx, 31, 0x278DE0u);
    ctx->pc = 0x278DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278DD8u;
            // 0x278ddc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2757D8u;
    if (runtime->hasFunction(0x2757D8u)) {
        auto targetFn = runtime->lookupFunction(0x2757D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278DE0u; }
        if (ctx->pc != 0x278DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002757D8_0x2757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278DE0u; }
        if (ctx->pc != 0x278DE0u) { return; }
    }
    ctx->pc = 0x278DE0u;
label_278de0:
    // 0x278de0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x278de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x278de4: 0x90643410  lbu         $a0, 0x3410($v1)
    ctx->pc = 0x278de4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13328)));
    // 0x278de8: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x278DE8u;
    {
        const bool branch_taken_0x278de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x278DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278DE8u;
            // 0x278dec: 0x2028821  addu        $s1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278de8) {
            ctx->pc = 0x278EA0u;
            goto label_278ea0;
        }
    }
    ctx->pc = 0x278DF0u;
    // 0x278df0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x278df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x278df4: 0x24638e3c  addiu       $v1, $v1, -0x71C4
    ctx->pc = 0x278df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938172));
    // 0x278df8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278dfc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278DFCu;
    {
        const bool branch_taken_0x278dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278dfc) {
            ctx->pc = 0x278E1Cu;
            goto label_278e1c;
        }
    }
    ctx->pc = 0x278E04u;
    // 0x278e04: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x278e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x278e08: 0x24848e50  addiu       $a0, $a0, -0x71B0
    ctx->pc = 0x278e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938192));
    // 0x278e0c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x278e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x278e10: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x278e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x278e14: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x278E14u;
    SET_GPR_U32(ctx, 31, 0x278E1Cu);
    ctx->pc = 0x278E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278E14u;
            // 0x278e18: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E1Cu; }
        if (ctx->pc != 0x278E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E1Cu; }
        if (ctx->pc != 0x278E1Cu) { return; }
    }
    ctx->pc = 0x278E1Cu;
label_278e1c:
    // 0x278e1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x278E1Cu;
    {
        const bool branch_taken_0x278e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278e1c) {
            ctx->pc = 0x278E50u;
            goto label_278e50;
        }
    }
    ctx->pc = 0x278E24u;
    // 0x278e24: 0xff450552  sd          $a1, 0x552($k0)
    ctx->pc = 0x278e24u;
    WRITE64(ADD32(GPR_U32(ctx, 26), 1362), GPR_U64(ctx, 5));
    // 0x278e28: 0xcbd901c  jal         func_2F64070
    ctx->pc = 0x278E28u;
    SET_GPR_U32(ctx, 31, 0x278E30u);
    ctx->pc = 0x278E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278E28u;
            // 0x278e2c: 0xa2e9e9f9  sb          $t1, -0x1607($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 4294961657), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F64070u;
    {
        auto targetFn = runtime->lookupFunction(0x2F64070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E30u; }
        if (ctx->pc != 0x278E30u) { return; }
    }
    ctx->pc = 0x278E30u;
label_278e30:
    // 0x278e30: 0xc548daa  jal         func_15236A8
    ctx->pc = 0x278E30u;
    SET_GPR_U32(ctx, 31, 0x278E38u);
    ctx->pc = 0x278E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278E30u;
            // 0x278e34: 0x2a4a020  add         $s4, $s5, $a0 (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 21);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15236A8u;
    {
        auto targetFn = runtime->lookupFunction(0x15236A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E38u; }
        if (ctx->pc != 0x278E38u) { return; }
    }
    ctx->pc = 0x278E38u;
label_278e38:
    // 0x278e38: 0x85f73013  lh          $s7, 0x3013($t7)
    ctx->pc = 0x278e38u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 12307)));
    // 0x278e3c: 0x0  nop
    ctx->pc = 0x278e3cu;
    // NOP
    // 0x278e40: 0xd268515  jal         func_49A1454
    ctx->pc = 0x278E40u;
    SET_GPR_U32(ctx, 31, 0x278E48u);
    ctx->pc = 0x49A1454u;
    {
        auto targetFn = runtime->lookupFunction(0x49A1454u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E48u; }
        if (ctx->pc != 0x278E48u) { return; }
    }
    ctx->pc = 0x278E48u;
label_278e48:
    // 0x278e48: 0xd268515  jal         func_49A1454
    ctx->pc = 0x278E48u;
    SET_GPR_U32(ctx, 31, 0x278E50u);
    ctx->pc = 0x49A1454u;
    {
        auto targetFn = runtime->lookupFunction(0x49A1454u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E50u; }
        if (ctx->pc != 0x278E50u) { return; }
    }
    ctx->pc = 0x278E50u;
label_278e50:
    // 0x278e50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x278E50u;
    {
        const bool branch_taken_0x278e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278e50) {
            ctx->pc = 0x278E80u;
            goto label_278e80;
        }
    }
    ctx->pc = 0x278E58u;
    // 0x278e58: 0x1058820  add         $s1, $t0, $a1
    ctx->pc = 0x278e58u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
    // 0x278e5c: 0xa1ee0e29  sb          $t6, 0xE29($t7)
    ctx->pc = 0x278e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3625), (uint8_t)GPR_U32(ctx, 14));
    // 0x278e60: 0xde977b27  ld          $s7, 0x7B27($s4)
    ctx->pc = 0x278e60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 20), 31527)));
    // 0x278e64: 0xffc4041a  sd          $a0, 0x41A($fp)
    ctx->pc = 0x278e64u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 1050), GPR_U64(ctx, 4));
    // 0x278e68: 0xfdb414da  sd          $s4, 0x14DA($t5)
    ctx->pc = 0x278e68u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 5338), GPR_U64(ctx, 20));
    // 0x278e6c: 0xddf7f797  ld          $s7, -0x869($t7)
    ctx->pc = 0x278e6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 15), 4294965143)));
    // 0x278e70: 0xd251586  jal         func_4945618
    ctx->pc = 0x278E70u;
    SET_GPR_U32(ctx, 31, 0x278E78u);
    ctx->pc = 0x278E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278E70u;
            // 0x278e74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // Unhandled SPECIAL instruction: 0x1
        ctx->in_delay_slot = false;
    ctx->pc = 0x4945618u;
    {
        auto targetFn = runtime->lookupFunction(0x4945618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E78u; }
        if (ctx->pc != 0x278E78u) { return; }
    }
    ctx->pc = 0x278E78u;
label_278e78:
    // 0x278e78: 0xd251586  jal         func_4945618
    ctx->pc = 0x278E78u;
    SET_GPR_U32(ctx, 31, 0x278E80u);
    ctx->pc = 0x4945618u;
    {
        auto targetFn = runtime->lookupFunction(0x4945618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E80u; }
        if (ctx->pc != 0x278E80u) { return; }
    }
    ctx->pc = 0x278E80u;
label_278e80:
    // 0x278e80: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x278e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x278e84: 0x24428e70  addiu       $v0, $v0, -0x7190
    ctx->pc = 0x278e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938224));
    // 0x278e88: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x278e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x278e8c: 0x24848e50  addiu       $a0, $a0, -0x71B0
    ctx->pc = 0x278e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938192));
    // 0x278e90: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x278e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278e94: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x278e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x278e98: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x278E98u;
    SET_GPR_U32(ctx, 31, 0x278EA0u);
    ctx->pc = 0x278E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278E98u;
            // 0x278e9c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EA0u; }
        if (ctx->pc != 0x278EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EA0u; }
        if (ctx->pc != 0x278EA0u) { return; }
    }
    ctx->pc = 0x278EA0u;
label_278ea0:
    // 0x278ea0: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x278ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x278ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278ea8: 0x2421826  xor         $v1, $s2, $v0
    ctx->pc = 0x278ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
    // 0x278eac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x278eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278eb0: 0x2404ff96  addiu       $a0, $zero, -0x6A
    ctx->pc = 0x278eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x278eb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278eb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x278eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x278ebc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x278ebcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x278ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x278EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278EC0u;
            // 0x278ec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278EC8u;
    ctx->pc = 0x278ec8u;
}
