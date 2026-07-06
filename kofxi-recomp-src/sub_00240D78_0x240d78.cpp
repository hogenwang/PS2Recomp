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

// Function: sub_00240D78
// Address: 0x240d78 - 0x240e38
void sub_00240D78_0x240d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240D78_0x240d78");
#endif

    switch (ctx->pc) {
        case 0x240e20u: goto label_240e20;
        default: break;
    }

    ctx->pc = 0x240d78u;

    // 0x240d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240d7c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x240d7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x240d80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240d84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x240d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240d88: 0x10e20018  beq         $a3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x240D88u;
    {
        const bool branch_taken_0x240d88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D88u;
        // 0x240d8c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d88) {
            ctx->pc = 0x240DECu;
            goto label_240dec;
        }
    }
    ctx->pc = 0x240D90u;
    // 0x240d90: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x240d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x240d94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240D94u;
    {
        const bool branch_taken_0x240d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D94u;
        // 0x240d98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d94) {
            ctx->pc = 0x240DB8u;
            goto label_240db8;
        }
    }
    ctx->pc = 0x240D9Cu;
    // 0x240d9c: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x240D9Cu;
    {
        const bool branch_taken_0x240d9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D9Cu;
        // 0x240da0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d9c) {
            ctx->pc = 0x240DD8u;
            goto label_240dd8;
        }
    }
    ctx->pc = 0x240DA4u;
    // 0x240da4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240da8: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x240DA8u;
    {
        const bool branch_taken_0x240da8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DA8u;
        // 0x240dac: 0x3c1001c1  lui         $s0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240da8) {
            ctx->pc = 0x240DE0u;
            goto label_240de0;
        }
    }
    ctx->pc = 0x240DB0u;
    // 0x240db0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x240DB0u;
    {
        const bool branch_taken_0x240db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DB0u;
        // 0x240db4: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240db0) {
            ctx->pc = 0x240E0Cu;
            goto label_240e0c;
        }
    }
    ctx->pc = 0x240DB8u;
label_240db8:
    // 0x240db8: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x240db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x240dbc: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x240DBCu;
    {
        const bool branch_taken_0x240dbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DBCu;
        // 0x240dc0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dbc) {
            ctx->pc = 0x240DF8u;
            goto label_240df8;
        }
    }
    ctx->pc = 0x240DC4u;
    // 0x240dc4: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x240dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x240dc8: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x240DC8u;
    {
        const bool branch_taken_0x240dc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DC8u;
        // 0x240dcc: 0x3c1001c1  lui         $s0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dc8) {
            ctx->pc = 0x240E00u;
            goto label_240e00;
        }
    }
    ctx->pc = 0x240DD0u;
    // 0x240dd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x240DD0u;
    {
        const bool branch_taken_0x240dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DD0u;
        // 0x240dd4: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dd0) {
            ctx->pc = 0x240E0Cu;
            goto label_240e0c;
        }
    }
    ctx->pc = 0x240DD8u;
label_240dd8:
    // 0x240dd8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x240DD8u;
    {
        const bool branch_taken_0x240dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DD8u;
        // 0x240ddc: 0x24426340  addiu       $v0, $v0, 0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dd8) {
            ctx->pc = 0x240E24u;
            goto label_240e24;
        }
    }
    ctx->pc = 0x240DE0u;
label_240de0:
    // 0x240de0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240de4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x240DE4u;
    {
        const bool branch_taken_0x240de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DE4u;
        // 0x240de8: 0x24426350  addiu       $v0, $v0, 0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240de4) {
            ctx->pc = 0x240E24u;
            goto label_240e24;
        }
    }
    ctx->pc = 0x240DECu;
label_240dec:
    // 0x240dec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240df0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x240DF0u;
    {
        const bool branch_taken_0x240df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DF0u;
        // 0x240df4: 0x24426360  addiu       $v0, $v0, 0x6360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240df0) {
            ctx->pc = 0x240E24u;
            goto label_240e24;
        }
    }
    ctx->pc = 0x240DF8u;
label_240df8:
    // 0x240df8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x240DF8u;
    {
        const bool branch_taken_0x240df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DF8u;
        // 0x240dfc: 0x24426368  addiu       $v0, $v0, 0x6368 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240df8) {
            ctx->pc = 0x240E24u;
            goto label_240e24;
        }
    }
    ctx->pc = 0x240E00u;
label_240e00:
    // 0x240e00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240e04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x240E04u;
    {
        const bool branch_taken_0x240e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E04u;
        // 0x240e08: 0x24426378  addiu       $v0, $v0, 0x6378 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e04) {
            ctx->pc = 0x240E24u;
            goto label_240e24;
        }
    }
    ctx->pc = 0x240E0Cu;
label_240e0c:
    // 0x240e0c: 0x2610ad90  addiu       $s0, $s0, -0x5270
    ctx->pc = 0x240e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946192));
    // 0x240e10: 0x24c66230  addiu       $a2, $a2, 0x6230
    ctx->pc = 0x240e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25136));
    // 0x240e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e18: 0xc043e24  jal         func_10F890
    ctx->pc = 0x240E18u;
    SET_GPR_U32(ctx, 31, 0x240E20u);
    ctx->pc = 0x240E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E18u;
    // 0x240e1c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x240E18u, 0x240E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E20u;
label_240e20:
    // 0x240e20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240e24:
    // 0x240e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x240E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E2Cu;
        // 0x240e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240E34u;
    // 0x240e34: 0x0  nop
    ctx->pc = 0x240e34u;
    // NOP
}
