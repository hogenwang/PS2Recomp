#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0D98
// Address: 0x1e0d98 - 0x1e1130
void sub_001E0D98_0x1e0d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0D98_0x1e0d98");
#endif

    switch (ctx->pc) {
        case 0x1e0da8u: goto label_1e0da8;
        case 0x1e0decu: goto label_1e0dec;
        case 0x1e0f58u: goto label_1e0f58;
        case 0x1e0f68u: goto label_1e0f68;
        case 0x1e0f80u: goto label_1e0f80;
        case 0x1e0facu: goto label_1e0fac;
        case 0x1e0fccu: goto label_1e0fcc;
        case 0x1e0ff0u: goto label_1e0ff0;
        case 0x1e100cu: goto label_1e100c;
        case 0x1e102cu: goto label_1e102c;
        case 0x1e1074u: goto label_1e1074;
        case 0x1e1098u: goto label_1e1098;
        case 0x1e10ccu: goto label_1e10cc;
        case 0x1e110cu: goto label_1e110c;
        default: break;
    }

    ctx->pc = 0x1e0d98u;

    // 0x1e0d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0da0: 0xc07b58a  jal         func_1ED628
    ctx->pc = 0x1E0DA0u;
    SET_GPR_U32(ctx, 31, 0x1E0DA8u);
    ctx->pc = 0x1ED628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED628u, 0x1E0DA0u, 0x1E0DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0DA8u;
label_1e0da8:
    // 0x1e0da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0dac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0db0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB0u;
        // 0x1e0db4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0DB8u;
    // 0x1e0db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0dc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0dc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e0dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e0dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e0dd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e0dd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e0dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e0dd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e0dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e0ddc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E0DDCu;
    {
        const bool branch_taken_0x1e0ddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DDCu;
        // 0x1e0de0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ddc) {
            ctx->pc = 0x1E0E08u;
            goto label_1e0e08;
        }
    }
    ctx->pc = 0x1E0DE4u;
    // 0x1e0de4: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E0DE4u;
    SET_GPR_U32(ctx, 31, 0x1E0DECu);
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1E0DE4u, 0x1E0DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0DECu;
label_1e0dec:
    // 0x1e0dec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e0decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e0df0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e0df0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0df4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e0df8: 0xac5014e8  sw          $s0, 0x14E8($v0)
    ctx->pc = 0x1e0df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5352), GPR_U32(ctx, 16));
    // 0x1e0dfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0DFCu;
    {
        const bool branch_taken_0x1e0dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DFCu;
        // 0x1e0e00: 0xac7214ec  sw          $s2, 0x14EC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5356), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dfc) {
            ctx->pc = 0x1E0E1Cu;
            goto label_1e0e1c;
        }
    }
    ctx->pc = 0x1E0E04u;
    // 0x1e0e04: 0x0  nop
    ctx->pc = 0x1e0e04u;
    // NOP
label_1e0e08:
    // 0x1e0e08: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e0e0c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e0e10: 0xac4014e8  sw          $zero, 0x14E8($v0)
    ctx->pc = 0x1e0e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5352), GPR_U32(ctx, 0));
    // 0x1e0e14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e0e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e18: 0xac6014ec  sw          $zero, 0x14EC($v1)
    ctx->pc = 0x1e0e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5356), GPR_U32(ctx, 0));
label_1e0e1c:
    // 0x1e0e1c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0E1Cu;
    {
        const bool branch_taken_0x1e0e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E1Cu;
        // 0x1e0e20: 0x3c0201c0  lui         $v0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e1c) {
            ctx->pc = 0x1E0E4Cu;
            goto label_1e0e4c;
        }
    }
    ctx->pc = 0x1E0E24u;
    // 0x1e0e24: 0x2445ba60  addiu       $a1, $v0, -0x45A0
    ctx->pc = 0x1e0e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949472));
    // 0x1e0e28: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1e0e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0e2c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1e0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e0e30: 0x2883000f  slti        $v1, $a0, 0xF
    ctx->pc = 0x1e0e30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1e0e34: 0x3c0101c0  lui         $at, 0x1C0
    ctx->pc = 0x1e0e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)448 << 16));
    // 0x1e0e38: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1e0e38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1e0e3c: 0xac31ba20  sw          $s1, -0x45E0($at)
    ctx->pc = 0x1e0e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949408), GPR_U32(ctx, 17));
    // 0x1e0e40: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0E40u;
    {
        const bool branch_taken_0x1e0e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E40u;
        // 0x1e0e44: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e40) {
            ctx->pc = 0x1E0E4Cu;
            goto label_1e0e4c;
        }
    }
    ctx->pc = 0x1E0E48u;
    // 0x1e0e48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e0e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e0e4c:
    // 0x1e0e4c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1e0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0e50: 0x34420f18  ori         $v0, $v0, 0xF18
    ctx->pc = 0x1e0e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3864);
    // 0x1e0e54: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1e0e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1e0e58: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E0E58u;
    {
        const bool branch_taken_0x1e0e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e58) {
            ctx->pc = 0x1E0ED0u;
            goto label_1e0ed0;
        }
    }
    ctx->pc = 0x1E0E60u;
    // 0x1e0e60: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1e0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0e64: 0x34420f17  ori         $v0, $v0, 0xF17
    ctx->pc = 0x1e0e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3863);
    // 0x1e0e68: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1e0e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e0e6c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E0E6Cu;
    {
        const bool branch_taken_0x1e0e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E6Cu;
        // 0x1e0e70: 0x3c1401c0  lui         $s4, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e6c) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0E74u;
    // 0x1e0e74: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1e0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0e78: 0x3442040c  ori         $v0, $v0, 0x40C
    ctx->pc = 0x1e0e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1036);
    // 0x1e0e7c: 0x12220046  beq         $s1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E0E7Cu;
    {
        const bool branch_taken_0x1e0e7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E7Cu;
        // 0x1e0e80: 0x51102a  slt         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e7c) {
            ctx->pc = 0x1E0F98u;
            goto label_1e0f98;
        }
    }
    ctx->pc = 0x1E0E84u;
    // 0x1e0e84: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0E84u;
    {
        const bool branch_taken_0x1e0e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e84) {
            ctx->pc = 0x1E0EA8u;
            goto label_1e0ea8;
        }
    }
    ctx->pc = 0x1E0E8Cu;
    // 0x1e0e8c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1e0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0e90: 0x34420408  ori         $v0, $v0, 0x408
    ctx->pc = 0x1e0e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1032);
    // 0x1e0e94: 0x12220041  beq         $s1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1E0E94u;
    {
        const bool branch_taken_0x1e0e94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E94u;
        // 0x1e0e98: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e94) {
            ctx->pc = 0x1E0F9Cu;
            goto label_1e0f9c;
        }
    }
    ctx->pc = 0x1E0E9Cu;
    // 0x1e0e9c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1E0E9Cu;
    {
        const bool branch_taken_0x1e0e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E9Cu;
        // 0x1e0ea0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e9c) {
            ctx->pc = 0x1E101Cu;
            goto label_1e101c;
        }
    }
    ctx->pc = 0x1E0EA4u;
    // 0x1e0ea4: 0x0  nop
    ctx->pc = 0x1e0ea4u;
    // NOP
label_1e0ea8:
    // 0x1e0ea8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1e0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0eac: 0x34420c04  ori         $v0, $v0, 0xC04
    ctx->pc = 0x1e0eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3076);
    // 0x1e0eb0: 0x12220049  beq         $s1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E0EB0u;
    {
        const bool branch_taken_0x1e0eb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EB0u;
        // 0x1e0eb4: 0x3c1401c0  lui         $s4, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0eb0) {
            ctx->pc = 0x1E0FD8u;
            goto label_1e0fd8;
        }
    }
    ctx->pc = 0x1E0EB8u;
    // 0x1e0eb8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1e0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0ebc: 0x34420f15  ori         $v0, $v0, 0xF15
    ctx->pc = 0x1e0ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3861);
    // 0x1e0ec0: 0x1222003d  beq         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1E0EC0u;
    {
        const bool branch_taken_0x1e0ec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EC0u;
        // 0x1e0ec4: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ec0) {
            ctx->pc = 0x1E0FB8u;
            goto label_1e0fb8;
        }
    }
    ctx->pc = 0x1E0EC8u;
    // 0x1e0ec8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1E0EC8u;
    {
        const bool branch_taken_0x1e0ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EC8u;
        // 0x1e0ecc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ec8) {
            ctx->pc = 0x1E101Cu;
            goto label_1e101c;
        }
    }
    ctx->pc = 0x1E0ED0u;
label_1e0ed0:
    // 0x1e0ed0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1e0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0ed4: 0x34420f40  ori         $v0, $v0, 0xF40
    ctx->pc = 0x1e0ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3904);
    // 0x1e0ed8: 0x12220017  beq         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E0ED8u;
    {
        const bool branch_taken_0x1e0ed8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0ED8u;
        // 0x1e0edc: 0x51102a  slt         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ed8) {
            ctx->pc = 0x1E0F38u;
            goto label_1e0f38;
        }
    }
    ctx->pc = 0x1E0EE0u;
    // 0x1e0ee0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0EE0u;
    {
        const bool branch_taken_0x1e0ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EE0u;
        // 0x1e0ee4: 0x2a22ffff  slti        $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ee0) {
            ctx->pc = 0x1E0F10u;
            goto label_1e0f10;
        }
    }
    ctx->pc = 0x1E0EE8u;
    // 0x1e0ee8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1e0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0eec: 0x34420f1c  ori         $v0, $v0, 0xF1C
    ctx->pc = 0x1e0eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3868);
    // 0x1e0ef0: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E0EF0u;
    {
        const bool branch_taken_0x1e0ef0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EF0u;
        // 0x1e0ef4: 0x3c1401c0  lui         $s4, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ef0) {
            ctx->pc = 0x1E0F98u;
            goto label_1e0f98;
        }
    }
    ctx->pc = 0x1E0EF8u;
    // 0x1e0ef8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1e0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0efc: 0x34420f1f  ori         $v0, $v0, 0xF1F
    ctx->pc = 0x1e0efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3871);
    // 0x1e0f00: 0x1222003d  beq         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1E0F00u;
    {
        const bool branch_taken_0x1e0f00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F00u;
        // 0x1e0f04: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f00) {
            ctx->pc = 0x1E0FF8u;
            goto label_1e0ff8;
        }
    }
    ctx->pc = 0x1E0F08u;
    // 0x1e0f08: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1E0F08u;
    {
        const bool branch_taken_0x1e0f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F08u;
        // 0x1e0f0c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f08) {
            ctx->pc = 0x1E101Cu;
            goto label_1e101c;
        }
    }
    ctx->pc = 0x1E0F10u;
label_1e0f10:
    // 0x1e0f10: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1E0F10u;
    {
        const bool branch_taken_0x1e0f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F10u;
        // 0x1e0f14: 0x3c1401c0  lui         $s4, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f10) {
            ctx->pc = 0x1E1018u;
            goto label_1e1018;
        }
    }
    ctx->pc = 0x1E0F18u;
    // 0x1e0f18: 0x2a22fffd  slti        $v0, $s1, -0x3
    ctx->pc = 0x1e0f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x1e0f1c: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x1E0F1Cu;
    {
        const bool branch_taken_0x1e0f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f1c) {
            ctx->pc = 0x1E0F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0F1Cu;
            // 0x1e0f20: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E101Cu;
            goto label_1e101c;
        }
    }
    ctx->pc = 0x1E0F24u;
    // 0x1e0f24: 0x3c1401c0  lui         $s4, 0x1C0
    ctx->pc = 0x1e0f24u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)448 << 16));
    // 0x1e0f28: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e0f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1e0f2c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E0F2Cu;
    {
        const bool branch_taken_0x1e0f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F2Cu;
        // 0x1e0f30: 0x24a5cea0  addiu       $a1, $a1, -0x3160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f2c) {
            ctx->pc = 0x1E0FA0u;
            goto label_1e0fa0;
        }
    }
    ctx->pc = 0x1E0F34u;
    // 0x1e0f34: 0x0  nop
    ctx->pc = 0x1e0f34u;
    // NOP
label_1e0f38:
    // 0x1e0f38: 0x3c1401c0  lui         $s4, 0x1C0
    ctx->pc = 0x1e0f38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)448 << 16));
    // 0x1e0f3c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e0f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1e0f40: 0x2690ba68  addiu       $s0, $s4, -0x4598
    ctx->pc = 0x1e0f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
    // 0x1e0f44: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1e0f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0f48: 0x24a5ceb8  addiu       $a1, $a1, -0x3148
    ctx->pc = 0x1e0f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954680));
    // 0x1e0f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f50: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1E0F50u;
    SET_GPR_U32(ctx, 31, 0x1E0F58u);
    ctx->pc = 0x1E0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0F50u;
    // 0x1e0f54: 0x34c60f40  ori         $a2, $a2, 0xF40 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3904);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1E0F50u, 0x1E0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0F58u;
label_1e0f58:
    // 0x1e0f58: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0F58u;
    {
        const bool branch_taken_0x1e0f58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f58) {
            ctx->pc = 0x1E0F6Cu;
            goto label_1e0f6c;
        }
    }
    ctx->pc = 0x1E0F60u;
    // 0x1e0f60: 0xc07d9de  jal         func_1F6778
    ctx->pc = 0x1E0F60u;
    SET_GPR_U32(ctx, 31, 0x1E0F68u);
    ctx->pc = 0x1E0F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0F60u;
    // 0x1e0f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6778u, 0x1E0F60u, 0x1E0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0F68u;
label_1e0f68:
    // 0x1e0f68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e0f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f6c:
    // 0x1e0f6c: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E0F6Cu;
    {
        const bool branch_taken_0x1e0f6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F6Cu;
        // 0x1e0f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f6c) {
            ctx->pc = 0x1E102Cu;
            goto label_1e102c;
        }
    }
    ctx->pc = 0x1E0F74u;
    // 0x1e0f74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e0f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f78: 0xc04a88c  jal         func_12A230
    ctx->pc = 0x1E0F78u;
    SET_GPR_U32(ctx, 31, 0x1E0F80u);
    ctx->pc = 0x1E0F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0F78u;
    // 0x1e0f7c: 0x240600e9  addiu       $a2, $zero, 0xE9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A230u, 0x1E0F78u, 0x1E0F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0F80u;
label_1e0f80:
    // 0x1e0f80: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E0F80u;
    {
        const bool branch_taken_0x1e0f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F80u;
        // 0x1e0f84: 0x2684ba68  addiu       $a0, $s4, -0x4598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f80) {
            ctx->pc = 0x1E1030u;
            goto label_1e1030;
        }
    }
    ctx->pc = 0x1E0F88u;
label_1e0f88:
    // 0x1e0f88: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e0f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1e0f8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0F8Cu;
    {
        const bool branch_taken_0x1e0f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F8Cu;
        // 0x1e0f90: 0x24a5ced0  addiu       $a1, $a1, -0x3130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f8c) {
            ctx->pc = 0x1E0FA0u;
            goto label_1e0fa0;
        }
    }
    ctx->pc = 0x1E0F94u;
    // 0x1e0f94: 0x0  nop
    ctx->pc = 0x1e0f94u;
    // NOP
label_1e0f98:
    // 0x1e0f98: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e0f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1e0f9c:
    // 0x1e0f9c: 0x24a5cf30  addiu       $a1, $a1, -0x30D0
    ctx->pc = 0x1e0f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954800));
label_1e0fa0:
    // 0x1e0fa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e0fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fa4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1E0FA4u;
    SET_GPR_U32(ctx, 31, 0x1E0FACu);
    ctx->pc = 0x1E0FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0FA4u;
    // 0x1e0fa8: 0x2684ba68  addiu       $a0, $s4, -0x4598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1E0FA4u, 0x1E0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0FACu;
label_1e0fac:
    // 0x1e0fac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1E0FACu;
    {
        const bool branch_taken_0x1e0fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FACu;
        // 0x1e0fb0: 0x2684ba68  addiu       $a0, $s4, -0x4598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fac) {
            ctx->pc = 0x1E1030u;
            goto label_1e1030;
        }
    }
    ctx->pc = 0x1E0FB4u;
    // 0x1e0fb4: 0x0  nop
    ctx->pc = 0x1e0fb4u;
    // NOP
label_1e0fb8:
    // 0x1e0fb8: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1e0fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0fbc: 0x24a5cf88  addiu       $a1, $a1, -0x3078
    ctx->pc = 0x1e0fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954888));
    // 0x1e0fc0: 0x2684ba68  addiu       $a0, $s4, -0x4598
    ctx->pc = 0x1e0fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
    // 0x1e0fc4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1E0FC4u;
    SET_GPR_U32(ctx, 31, 0x1E0FCCu);
    ctx->pc = 0x1E0FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0FC4u;
    // 0x1e0fc8: 0x34c60f15  ori         $a2, $a2, 0xF15 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3861);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1E0FC4u, 0x1E0FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0FCCu;
label_1e0fcc:
    // 0x1e0fcc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E0FCCu;
    {
        const bool branch_taken_0x1e0fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FCCu;
        // 0x1e0fd0: 0x2684ba68  addiu       $a0, $s4, -0x4598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fcc) {
            ctx->pc = 0x1E1030u;
            goto label_1e1030;
        }
    }
    ctx->pc = 0x1E0FD4u;
    // 0x1e0fd4: 0x0  nop
    ctx->pc = 0x1e0fd4u;
    // NOP
label_1e0fd8:
    // 0x1e0fd8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e0fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1e0fdc: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1e0fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0fe0: 0x24a5cff8  addiu       $a1, $a1, -0x3008
    ctx->pc = 0x1e0fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955000));
    // 0x1e0fe4: 0x2684ba68  addiu       $a0, $s4, -0x4598
    ctx->pc = 0x1e0fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
    // 0x1e0fe8: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1E0FE8u;
    SET_GPR_U32(ctx, 31, 0x1E0FF0u);
    ctx->pc = 0x1E0FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0FE8u;
    // 0x1e0fec: 0x34c60c04  ori         $a2, $a2, 0xC04 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3076);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1E0FE8u, 0x1E0FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0FF0u;
label_1e0ff0:
    // 0x1e0ff0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E0FF0u;
    {
        const bool branch_taken_0x1e0ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FF0u;
        // 0x1e0ff4: 0x2684ba68  addiu       $a0, $s4, -0x4598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ff0) {
            ctx->pc = 0x1E1030u;
            goto label_1e1030;
        }
    }
    ctx->pc = 0x1E0FF8u;
label_1e0ff8:
    // 0x1e0ff8: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1e0ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0ffc: 0x24a5d080  addiu       $a1, $a1, -0x2F80
    ctx->pc = 0x1e0ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955136));
    // 0x1e1000: 0x2684ba68  addiu       $a0, $s4, -0x4598
    ctx->pc = 0x1e1000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
    // 0x1e1004: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1E1004u;
    SET_GPR_U32(ctx, 31, 0x1E100Cu);
    ctx->pc = 0x1E1008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1004u;
    // 0x1e1008: 0x34c60f1f  ori         $a2, $a2, 0xF1F (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3871);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1E1004u, 0x1E100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E100Cu;
label_1e100c:
    // 0x1e100c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E100Cu;
    {
        const bool branch_taken_0x1e100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E100Cu;
        // 0x1e1010: 0x2684ba68  addiu       $a0, $s4, -0x4598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e100c) {
            ctx->pc = 0x1E1030u;
            goto label_1e1030;
        }
    }
    ctx->pc = 0x1E1014u;
    // 0x1e1014: 0x0  nop
    ctx->pc = 0x1e1014u;
    // NOP
label_1e1018:
    // 0x1e1018: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e1018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1e101c:
    // 0x1e101c: 0x24a5d0c8  addiu       $a1, $a1, -0x2F38
    ctx->pc = 0x1e101cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955208));
    // 0x1e1020: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e1020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1024: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1E1024u;
    SET_GPR_U32(ctx, 31, 0x1E102Cu);
    ctx->pc = 0x1E1028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1024u;
    // 0x1e1028: 0x2684ba68  addiu       $a0, $s4, -0x4598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1E1024u, 0x1E102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E102Cu;
label_1e102c:
    // 0x1e102c: 0x2684ba68  addiu       $a0, $s4, -0x4598
    ctx->pc = 0x1e102cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949480));
label_1e1030:
    // 0x1e1030: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e1030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e103c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e103cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1040: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e1040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e1044: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e1044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e1048: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E1048u;
    ctx->pc = 0x1E104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1048u;
    // 0x1e104c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1050u;
    // 0x1e1050: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e1050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e1054: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1054u;
        // 0x1e1058: 0x8c6214e8  lw          $v0, 0x14E8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5352)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E105Cu;
    // 0x1e105c: 0x0  nop
    ctx->pc = 0x1e105cu;
    // NOP
    // 0x1e1060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1068: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e1068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e106c: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E106Cu;
    SET_GPR_U32(ctx, 31, 0x1E1074u);
    ctx->pc = 0x1E1070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E106Cu;
    // 0x1e1070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E106Cu, 0x1E1074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1074u;
label_1e1074:
    // 0x1e1074: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x1e1074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x1e1078: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e107c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e107cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1080: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1080u;
        // 0x1e1084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1088u;
    // 0x1e1088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e108c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e108cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1090: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E1090u;
    SET_GPR_U32(ctx, 31, 0x1E1098u);
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E1090u, 0x1E1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1098u;
label_1e1098:
    // 0x1e1098: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1e1098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1e109c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e109cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e10a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E10A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10A0u;
        // 0x1e10a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E10A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E10A8u;
    // 0x1e10a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e10a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e10ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e10acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e10b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e10b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e10b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e10b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e10b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e10bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e10c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e10c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e10c4: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E10C4u;
    SET_GPR_U32(ctx, 31, 0x1E10CCu);
    ctx->pc = 0x1E10C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E10C4u;
    // 0x1e10c8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1E10C4u, 0x1E10CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E10CCu;
label_1e10cc:
    // 0x1e10cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e10ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e10d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e10d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e10d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e10d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e10dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e10dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e10e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e10e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e10e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e10e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e10e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10ec: 0x807f0bc  j           func_1FC2F0
    ctx->pc = 0x1E10ECu;
    ctx->pc = 0x1E10F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E10ECu;
    // 0x1e10f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC2F0u;
    sub_001FC2F0_0x1fc2f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1E10F4u;
    // 0x1e10f4: 0x0  nop
    ctx->pc = 0x1e10f4u;
    // NOP
    // 0x1e10f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e10f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e10fc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E10FCu;
    {
        const bool branch_taken_0x1e10fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10FCu;
        // 0x1e1100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e10fc) {
            ctx->pc = 0x1E1120u;
            goto label_1e1120;
        }
    }
    ctx->pc = 0x1E1104u;
    // 0x1e1104: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E1104u;
    SET_GPR_U32(ctx, 31, 0x1E110Cu);
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1E1104u, 0x1E110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E110Cu;
label_1e110c:
    // 0x1e110c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e110cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1114: 0x807f0e6  j           func_1FC398
    ctx->pc = 0x1E1114u;
    ctx->pc = 0x1E1118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1114u;
    // 0x1e1118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC398u, 0x1E1114u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E111Cu;
    // 0x1e111c: 0x0  nop
    ctx->pc = 0x1e111cu;
    // NOP
label_1e1120:
    // 0x1e1120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1124: 0x807f0e6  j           func_1FC398
    ctx->pc = 0x1E1124u;
    ctx->pc = 0x1E1128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1124u;
    // 0x1e1128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC398u, 0x1E1124u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E112Cu;
    // 0x1e112c: 0x0  nop
    ctx->pc = 0x1e112cu;
    // NOP
    if (ctx->pc == 0x1e112cu) { ctx->pc = 0x1e1130u; }
}
