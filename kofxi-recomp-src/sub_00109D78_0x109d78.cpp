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

// Function: sub_00109D78
// Address: 0x109d78 - 0x109f30
void sub_00109D78_0x109d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109D78_0x109d78");
#endif

    switch (ctx->pc) {
        case 0x109dc0u: goto label_109dc0;
        case 0x109ddcu: goto label_109ddc;
        case 0x109de4u: goto label_109de4;
        case 0x109decu: goto label_109dec;
        case 0x109e00u: goto label_109e00;
        case 0x109e08u: goto label_109e08;
        case 0x109e10u: goto label_109e10;
        case 0x109e68u: goto label_109e68;
        case 0x109e90u: goto label_109e90;
        case 0x109eb4u: goto label_109eb4;
        case 0x109ed8u: goto label_109ed8;
        default: break;
    }

    ctx->pc = 0x109d78u;

    // 0x109d78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x109d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x109d7c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x109d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x109d80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109d84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x109d84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x109d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109d8c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x109d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109d90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x109d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x109d94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109d9c: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x109d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x109da0: 0x8e0600ec  lw          $a2, 0xEC($s0)
    ctx->pc = 0x109da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x109da4: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x109da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x109da8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109DA8u;
    {
        const bool branch_taken_0x109da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DA8u;
        // 0x109dac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109da8) {
            ctx->pc = 0x109DC8u;
            goto label_109dc8;
        }
    }
    ctx->pc = 0x109DB0u;
    // 0x109db0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x109db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x109db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109db8: 0xc043070  jal         func_10C1C0
    ctx->pc = 0x109DB8u;
    SET_GPR_U32(ctx, 31, 0x109DC0u);
    ctx->pc = 0x109DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DB8u;
    // 0x109dbc: 0x24a5a330  addiu       $a1, $a1, -0x5CD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1C0u, 0x109DB8u, 0x109DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DC0u;
label_109dc0:
    // 0x109dc0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x109DC0u;
    {
        const bool branch_taken_0x109dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DC0u;
        // 0x109dc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109dc0) {
            ctx->pc = 0x109F10u;
            goto label_109f10;
        }
    }
    ctx->pc = 0x109DC8u;
label_109dc8:
    // 0x109dc8: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x109dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x109dcc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x109DCCu;
    {
        const bool branch_taken_0x109dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DCCu;
        // 0x109dd0: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109dcc) {
            ctx->pc = 0x109DF4u;
            goto label_109df4;
        }
    }
    ctx->pc = 0x109DD4u;
    // 0x109dd4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x109DD4u;
    SET_GPR_U32(ctx, 31, 0x109DDCu);
    ctx->pc = 0x109DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DD4u;
    // 0x109dd8: 0x2484a370  addiu       $a0, $a0, -0x5C90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x109DD4u, 0x109DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DDCu;
label_109ddc:
    // 0x109ddc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x109DDCu;
    {
        const bool branch_taken_0x109ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DDCu;
        // 0x109de0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ddc) {
            ctx->pc = 0x109F10u;
            goto label_109f10;
        }
    }
    ctx->pc = 0x109DE4u;
label_109de4:
    // 0x109de4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x109DE4u;
    SET_GPR_U32(ctx, 31, 0x109DECu);
    ctx->pc = 0x109DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DE4u;
    // 0x109de8: 0x2484a3b0  addiu       $a0, $a0, -0x5C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x109DE4u, 0x109DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DECu;
label_109dec:
    // 0x109dec: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x109DECu;
    {
        const bool branch_taken_0x109dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DECu;
        // 0x109df0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109dec) {
            ctx->pc = 0x109F10u;
            goto label_109f10;
        }
    }
    ctx->pc = 0x109DF4u;
label_109df4:
    // 0x109df4: 0xae000834  sw          $zero, 0x834($s0)
    ctx->pc = 0x109df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 0));
    // 0x109df8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x109df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109dfc: 0x0  nop
    ctx->pc = 0x109dfcu;
    // NOP
label_109e00:
    // 0x109e00: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x109E00u;
    {
        const bool branch_taken_0x109e00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x109E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E00u;
        // 0x109e04: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e00) {
            ctx->pc = 0x109E40u;
            goto label_109e40;
        }
    }
    ctx->pc = 0x109E08u;
label_109e08:
    // 0x109e08: 0xc042536  jal         func_1094D8
    ctx->pc = 0x109E08u;
    SET_GPR_U32(ctx, 31, 0x109E10u);
    ctx->pc = 0x109E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E08u;
    // 0x109e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1094D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1094D8u, 0x109E08u, 0x109E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E10u;
label_109e10:
    // 0x109e10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e14: 0x640003e  bltz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x109E14u;
    {
        const bool branch_taken_0x109e14 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x109E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E14u;
        // 0x109e18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e14) {
            ctx->pc = 0x109F10u;
            goto label_109f10;
        }
    }
    ctx->pc = 0x109E1Cu;
    // 0x109e1c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x109E1Cu;
    {
        const bool branch_taken_0x109e1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E1Cu;
        // 0x109e20: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e1c) {
            ctx->pc = 0x109E40u;
            goto label_109e40;
        }
    }
    ctx->pc = 0x109E24u;
    // 0x109e24: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x109e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x109e28: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x109e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x109e2c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109E2Cu;
    {
        const bool branch_taken_0x109e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E2Cu;
        // 0x109e30: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e2c) {
            ctx->pc = 0x109E40u;
            goto label_109e40;
        }
    }
    ctx->pc = 0x109E34u;
    // 0x109e34: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x109e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x109e38: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x109E38u;
    {
        const bool branch_taken_0x109e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E38u;
        // 0x109e3c: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e38) {
            ctx->pc = 0x109E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109e08;
        }
    }
    ctx->pc = 0x109E40u;
label_109e40:
    // 0x109e40: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x109E40u;
    {
        const bool branch_taken_0x109e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E40u;
        // 0x109e44: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e40) {
            ctx->pc = 0x109EE8u;
            goto label_109ee8;
        }
    }
    ctx->pc = 0x109E48u;
    // 0x109e48: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x109e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x109e4c: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x109e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x109e50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109e54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109e58: 0x800008  jr          $a0
    ctx->pc = 0x109E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109E60u: goto label_109e60;
            case 0x109E74u: goto label_109e74;
            case 0x109EA4u: goto label_109ea4;
            case 0x109EC8u: goto label_109ec8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109E58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x109E60u;
label_109e60:
    // 0x109e60: 0xc042d7a  jal         func_10B5E8
    ctx->pc = 0x109E60u;
    SET_GPR_U32(ctx, 31, 0x109E68u);
    ctx->pc = 0x109E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E60u;
    // 0x109e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B5E8u, 0x109E60u, 0x109E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E68u;
label_109e68:
    // 0x109e68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109e6c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x109E6Cu;
    {
        const bool branch_taken_0x109e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E6Cu;
        // 0x109e70: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e6c) {
            ctx->pc = 0x109EE8u;
            goto label_109ee8;
        }
    }
    ctx->pc = 0x109E74u;
label_109e74:
    // 0x109e74: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x109e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x109e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e7c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x109e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x109e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e84: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x109e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x109e88: 0xc042a40  jal         func_10A900
    ctx->pc = 0x109E88u;
    SET_GPR_U32(ctx, 31, 0x109E90u);
    ctx->pc = 0x109E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E88u;
    // 0x109e8c: 0x8e0600a8  lw          $a2, 0xA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A900u, 0x109E88u, 0x109E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E90u;
label_109e90:
    // 0x109e90: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x109e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x109e94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x109e94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x109e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x109e9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x109E9Cu;
    {
        const bool branch_taken_0x109e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E9Cu;
        // 0x109ea0: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e9c) {
            ctx->pc = 0x109EE8u;
            goto label_109ee8;
        }
    }
    ctx->pc = 0x109EA4u;
label_109ea4:
    // 0x109ea4: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x109ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x109ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eac: 0xc042a40  jal         func_10A900
    ctx->pc = 0x109EACu;
    SET_GPR_U32(ctx, 31, 0x109EB4u);
    ctx->pc = 0x109EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EACu;
    // 0x109eb0: 0x8e0600ac  lw          $a2, 0xAC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A900u, 0x109EACu, 0x109EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EB4u;
label_109eb4:
    // 0x109eb4: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x109eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x109eb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x109eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ebc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x109ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x109ec0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x109EC0u;
    {
        const bool branch_taken_0x109ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EC0u;
        // 0x109ec4: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ec0) {
            ctx->pc = 0x109EE8u;
            goto label_109ee8;
        }
    }
    ctx->pc = 0x109EC8u;
label_109ec8:
    // 0x109ec8: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x109ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x109ecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ed0: 0xc042a40  jal         func_10A900
    ctx->pc = 0x109ED0u;
    SET_GPR_U32(ctx, 31, 0x109ED8u);
    ctx->pc = 0x109ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109ED0u;
    // 0x109ed4: 0x8e0600b0  lw          $a2, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A900u, 0x109ED0u, 0x109ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109ED8u;
label_109ed8:
    // 0x109ed8: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x109ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x109edc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x109edcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ee0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x109ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x109ee4: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x109ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_109ee8:
    // 0x109ee8: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x109ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x109eec: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x109EECu;
    {
        const bool branch_taken_0x109eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EECu;
        // 0x109ef0: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109eec) {
            ctx->pc = 0x109DE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109de4;
        }
    }
    ctx->pc = 0x109EF4u;
    // 0x109ef4: 0x8e020834  lw          $v0, 0x834($s0)
    ctx->pc = 0x109ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2100)));
    // 0x109ef8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109EF8u;
    {
        const bool branch_taken_0x109ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EF8u;
        // 0x109efc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ef8) {
            ctx->pc = 0x109F10u;
            goto label_109f10;
        }
    }
    ctx->pc = 0x109F00u;
    // 0x109f00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x109f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x109f04: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x109F04u;
    {
        const bool branch_taken_0x109f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F04u;
        // 0x109f08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f04) {
            ctx->pc = 0x109E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109e00;
        }
    }
    ctx->pc = 0x109F0Cu;
    // 0x109f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109f10:
    // 0x109f10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x109f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109f14: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x109f14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109f18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109f18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109f1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109f1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109f20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109f24: 0x3e00008  jr          $ra
    ctx->pc = 0x109F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F24u;
        // 0x109f28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109F2Cu;
    // 0x109f2c: 0x0  nop
    ctx->pc = 0x109f2cu;
    // NOP
    if (ctx->pc == 0x109f2cu) { ctx->pc = 0x109f30u; }
}
