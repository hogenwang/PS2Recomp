#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CFE90
// Address: 0x2cfe90 - 0x2cff70
void sub_002CFE90_0x2cfe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFE90_0x2cfe90");
#endif

    switch (ctx->pc) {
        case 0x2cfee0u: goto label_2cfee0;
        case 0x2cfef4u: goto label_2cfef4;
        case 0x2cff24u: goto label_2cff24;
        default: break;
    }

    ctx->pc = 0x2cfe90u;

    // 0x2cfe90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cfe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cfe94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cfe94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cfe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cfe9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cfe9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cfea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cfea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cfea8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cfea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cfeac: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2cfeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2cfeb0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2cfeb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cfeb4: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x2cfeb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2cfeb8: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x2cfeb8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2cfebc: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CFEBCu;
    {
        const bool branch_taken_0x2cfebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFEBCu;
            // 0x2cfec0: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfebc) {
            ctx->pc = 0x2CFF58u;
            goto label_2cff58;
        }
    }
    ctx->pc = 0x2CFEC4u;
    // 0x2cfec4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2cfec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2cfec8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2cfec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfecc: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2cfeccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2cfed0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2CFED0u;
    {
        const bool branch_taken_0x2cfed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfed0) {
            ctx->pc = 0x2CFED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFED0u;
            // 0x2cfed4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFF08u;
            goto label_2cff08;
        }
    }
    ctx->pc = 0x2CFED8u;
    // 0x2cfed8: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x2cfed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2cfedc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2cfedcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2cfee0:
    // 0x2cfee0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2cfee0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2cfee4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2cfee4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2cfee8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CFEE8u;
    {
        const bool branch_taken_0x2cfee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFEE8u;
            // 0x2cfeec: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfee8) {
            ctx->pc = 0x2CFF38u;
            goto label_2cff38;
        }
    }
    ctx->pc = 0x2CFEF0u;
    // 0x2cfef0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cfef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cfef4:
    // 0x2cfef4: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2cfef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2cfef8: 0x0  nop
    ctx->pc = 0x2cfef8u;
    // NOP
    // 0x2cfefc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CFEFCu;
    {
        const bool branch_taken_0x2cfefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfefc) {
            ctx->pc = 0x2CFF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFEFCu;
            // 0x2cff00: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFEE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cfee0;
        }
    }
    ctx->pc = 0x2CFF04u;
    // 0x2cff04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cff08:
    // 0x2cff08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cff08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cff0c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2cff0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2cff10: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2CFF10u;
    {
        const bool branch_taken_0x2cff10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff10) {
            ctx->pc = 0x2CFF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF10u;
            // 0x2cff14: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFF40u;
            goto label_2cff40;
        }
    }
    ctx->pc = 0x2CFF18u;
    // 0x2cff18: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2cff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cff1c: 0xc0b462c  jal         func_2D18B0
    ctx->pc = 0x2CFF1Cu;
    SET_GPR_U32(ctx, 31, 0x2CFF24u);
    ctx->pc = 0x2CFF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF1Cu;
            // 0x2cff20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D18B0u;
    if (runtime->hasFunction(0x2D18B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D18B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF24u; }
        if (ctx->pc != 0x2CFF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D18B0_0x2d18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFF24u; }
        if (ctx->pc != 0x2CFF24u) { return; }
    }
    ctx->pc = 0x2CFF24u;
label_2cff24:
    // 0x2cff24: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CFF24u;
    {
        const bool branch_taken_0x2cff24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff24) {
            ctx->pc = 0x2CFF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF24u;
            // 0x2cff28: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFF40u;
            goto label_2cff40;
        }
    }
    ctx->pc = 0x2CFF2Cu;
    // 0x2cff2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CFF2Cu;
    {
        const bool branch_taken_0x2cff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF2Cu;
            // 0x2cff30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff2c) {
            ctx->pc = 0x2CFF5Cu;
            goto label_2cff5c;
        }
    }
    ctx->pc = 0x2CFF34u;
    // 0x2cff34: 0x0  nop
    ctx->pc = 0x2cff34u;
    // NOP
label_2cff38:
    // 0x2cff38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFF38u;
    {
        const bool branch_taken_0x2cff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF38u;
            // 0x2cff3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff38) {
            ctx->pc = 0x2CFF58u;
            goto label_2cff58;
        }
    }
    ctx->pc = 0x2CFF40u;
label_2cff40:
    // 0x2cff40: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x2cff40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2cff44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cff48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cff48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff4c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2cff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cff50: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x2cff50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x2cff54: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2cff54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_2cff58:
    // 0x2cff58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cff58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cff5c:
    // 0x2cff5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cff5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cff60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cff60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cff64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cff64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cff68: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFF68u;
            // 0x2cff6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFF70u;
    ctx->pc = 0x2cff70u;
}
