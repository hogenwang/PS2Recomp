#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E2EE0
// Address: 0x2e2ee0 - 0x2e2fe8
void sub_002E2EE0_0x2e2ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2EE0_0x2e2ee0");
#endif

    switch (ctx->pc) {
        case 0x2e2f2cu: goto label_2e2f2c;
        case 0x2e2f78u: goto label_2e2f78;
        case 0x2e2f94u: goto label_2e2f94;
        case 0x2e2fccu: goto label_2e2fcc;
        default: break;
    }

    ctx->pc = 0x2e2ee0u;

    // 0x2e2ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e2ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e2ee8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2e2ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2eec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e2eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e2ef0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e2ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ef4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e2ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e2ef8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e2ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2efc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e2efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e2f00: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e2f04: 0x24632f4c  addiu       $v1, $v1, 0x2F4C
    ctx->pc = 0x2e2f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12108));
    // 0x2e2f08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2f0c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2F0Cu;
    {
        const bool branch_taken_0x2e2f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f0c) {
            ctx->pc = 0x2E2F2Cu;
            goto label_2e2f2c;
        }
    }
    ctx->pc = 0x2E2F14u;
    // 0x2e2f14: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e2f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e2f18: 0x24842f60  addiu       $a0, $a0, 0x2F60
    ctx->pc = 0x2e2f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12128));
    // 0x2e2f1c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e2f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e2f20: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e2f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e2f24: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E2F24u;
    SET_GPR_U32(ctx, 31, 0x2E2F2Cu);
    ctx->pc = 0x2E2F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2F24u;
            // 0x2e2f28: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F2Cu; }
        if (ctx->pc != 0x2E2F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F2Cu; }
        if (ctx->pc != 0x2E2F2Cu) { return; }
    }
    ctx->pc = 0x2E2F2Cu;
label_2e2f2c:
    // 0x2e2f2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E2F2Cu;
    {
        const bool branch_taken_0x2e2f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f2c) {
            ctx->pc = 0x2E2F60u;
            goto label_2e2f60;
        }
    }
    ctx->pc = 0x2E2F34u;
    // 0x2e2f34: 0x24aad198  addiu       $t2, $a1, -0x2E68
    ctx->pc = 0x2e2f34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955416));
    // 0x2e2f38: 0x2514f428  addiu       $s4, $t0, -0xBD8
    ctx->pc = 0x2e2f38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964264));
    // 0x2e2f3c: 0xde2bd207  ld          $t3, -0x2DF9($s1)
    ctx->pc = 0x2e2f3cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 17), 4294955527)));
    // 0x2e2f40: 0xa3cc5751  sb          $t4, 0x5751($fp)
    ctx->pc = 0x2e2f40u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 22353), (uint8_t)GPR_U32(ctx, 12));
    // 0x2e2f44: 0x1121020  add         $v0, $t0, $s2
    ctx->pc = 0x2e2f44u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x2e2f48: 0x2619e020  addiu       $t9, $s0, -0x1FE0
    ctx->pc = 0x2e2f48u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959136));
    // 0x2e2f4c: 0x0  nop
    ctx->pc = 0x2e2f4cu;
    // NOP
    // 0x2e2f50: 0xd38921a3  lld         $t1, 0x21A3($gp)
    ctx->pc = 0x2e2f50u;
    // Unhandled opcode: 0x34
    // 0x2e2f54: 0x0  nop
    ctx->pc = 0x2e2f54u;
    // NOP
    // 0x2e2f58: 0xd38921bf  lld         $t1, 0x21BF($gp)
    ctx->pc = 0x2e2f58u;
    // Unhandled opcode: 0x34
    // 0x2e2f5c: 0x0  nop
    ctx->pc = 0x2e2f5cu;
    // NOP
label_2e2f60:
    // 0x2e2f60: 0x4d39892f  .word       0x4D39892F                   # INVALID     $t1, $t9, -0x76D1 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2f60u;
    // Unhandled opcode: 0x13
    // 0x2e2f64: 0xbc75c9af  cache       0x15, -0x3651($v1)
    ctx->pc = 0x2e2f64u;
    // CACHE instruction (ignored)
    // 0x2e2f68: 0xfc3a7ba9  sd          $k0, 0x7BA9($at)
    ctx->pc = 0x2e2f68u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 31657), GPR_U64(ctx, 26));
    // 0x2e2f6c: 0x7c398927  sq          $t9, -0x76D9($at)
    ctx->pc = 0x2e2f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294936871), GPR_VEC(ctx, 25));
    // 0x2e2f70: 0xc3d8923  jal         func_F6248C
    ctx->pc = 0x2E2F70u;
    SET_GPR_U32(ctx, 31, 0x2E2F78u);
    ctx->pc = 0x2E2F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2F70u;
            // 0x2e2f74: 0x34398929  ori         $t9, $at, 0x8929 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35113);
        ctx->in_delay_slot = false;
    ctx->pc = 0xF6248Cu;
    {
        auto targetFn = runtime->lookupFunction(0xF6248Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F78u; }
        if (ctx->pc != 0x2E2F78u) { return; }
    }
    ctx->pc = 0x2E2F78u;
label_2e2f78:
    // 0x2e2f78: 0xbd3f8907  cache       0x1F, -0x76F9($t1)
    ctx->pc = 0x2e2f78u;
    // CACHE instruction (ignored)
    // 0x2e2f7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E2F7Cu;
    {
        const bool branch_taken_0x2e2f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f7c) {
            ctx->pc = 0x2E2FACu;
            goto label_2e2fac;
        }
    }
    ctx->pc = 0x2E2F84u;
    // 0x2e2f84: 0x86962fc3  lh          $s6, 0x2FC3($s4)
    ctx->pc = 0x2e2f84u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12227)));
    // 0x2e2f88: 0xde4e5987  ld          $t6, 0x5987($s2)
    ctx->pc = 0x2e2f88u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 18), 22919)));
    // 0x2e2f8c: 0xc202a20  jal         func_80A880
    ctx->pc = 0x2E2F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E2F94u);
    ctx->pc = 0x2E2F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2F8Cu;
            // 0x2e2f90: 0x8e9cfc55  lw          $gp, -0x3AB($s4) (Delay Slot)
        SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966357)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x80A880u;
    {
        auto targetFn = runtime->lookupFunction(0x80A880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F94u; }
        if (ctx->pc != 0x2E2F94u) { return; }
    }
    ctx->pc = 0x2E2F94u;
label_2e2f94:
    // 0x2e2f94: 0xa1b15ca1  sb          $s1, 0x5CA1($t5)
    ctx->pc = 0x2e2f94u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 23713), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e2f98: 0x27f3f3f8  addiu       $s3, $ra, -0xC08
    ctx->pc = 0x2e2f98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 31), 4294964216));
    // 0x2e2f9c: 0xd383a129  lld         $v1, -0x5ED7($gp)
    ctx->pc = 0x2e2f9cu;
    // Unhandled opcode: 0x34
    // 0x2e2fa0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2e2fa0u;
    // Unhandled SPECIAL instruction: 0x1
    // 0x2e2fa4: 0xd383a135  lld         $v1, -0x5ECB($gp)
    ctx->pc = 0x2e2fa4u;
    // Unhandled opcode: 0x34
    // 0x2e2fa8: 0x0  nop
    ctx->pc = 0x2e2fa8u;
    // NOP
label_2e2fac:
    // 0x2e2fac: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e2facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e2fb0: 0x24422f9c  addiu       $v0, $v0, 0x2F9C
    ctx->pc = 0x2e2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12188));
    // 0x2e2fb4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e2fb8: 0x24842f7c  addiu       $a0, $a0, 0x2F7C
    ctx->pc = 0x2e2fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12156));
    // 0x2e2fbc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e2fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e2fc0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e2fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2fc4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E2FC4u;
    SET_GPR_U32(ctx, 31, 0x2E2FCCu);
    ctx->pc = 0x2E2FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2FC4u;
            // 0x2e2fc8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2FCCu; }
        if (ctx->pc != 0x2E2FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2FCCu; }
        if (ctx->pc != 0x2E2FCCu) { return; }
    }
    ctx->pc = 0x2E2FCCu;
label_2e2fcc:
    // 0x2e2fcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2fd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e2fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2fd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2fd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e2fd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2fdc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e2fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2FE0u;
            // 0x2e2fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2FE8u;
    ctx->pc = 0x2e2fe8u;
}
