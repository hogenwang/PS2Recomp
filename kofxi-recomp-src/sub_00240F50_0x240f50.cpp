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

// Function: sub_00240F50
// Address: 0x240f50 - 0x241010
void sub_00240F50_0x240f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240F50_0x240f50");
#endif

    switch (ctx->pc) {
        case 0x240ff8u: goto label_240ff8;
        default: break;
    }

    ctx->pc = 0x240f50u;

    // 0x240f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240f54: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x240f54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x240f58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240f5c: 0x3402c021  ori         $v0, $zero, 0xC021
    ctx->pc = 0x240f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
    // 0x240f60: 0x10e20013  beq         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x240F60u;
    {
        const bool branch_taken_0x240f60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F60u;
        // 0x240f64: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f60) {
            ctx->pc = 0x240FB0u;
            goto label_240fb0;
        }
    }
    ctx->pc = 0x240F68u;
    // 0x240f68: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x240f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x240f6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x240F6Cu;
    {
        const bool branch_taken_0x240f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F6Cu;
        // 0x240f70: 0x3402c023  ori         $v0, $zero, 0xC023 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f6c) {
            ctx->pc = 0x240F94u;
            goto label_240f94;
        }
    }
    ctx->pc = 0x240F74u;
    // 0x240f74: 0x34028021  ori         $v0, $zero, 0x8021
    ctx->pc = 0x240f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x240f78: 0x10e20010  beq         $a3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x240F78u;
    {
        const bool branch_taken_0x240f78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F78u;
        // 0x240f7c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f78) {
            ctx->pc = 0x240FBCu;
            goto label_240fbc;
        }
    }
    ctx->pc = 0x240F80u;
    // 0x240f80: 0x34028057  ori         $v0, $zero, 0x8057
    ctx->pc = 0x240f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32855);
    // 0x240f84: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x240F84u;
    {
        const bool branch_taken_0x240f84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F84u;
        // 0x240f88: 0x3c1001c1  lui         $s0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f84) {
            ctx->pc = 0x240FD8u;
            goto label_240fd8;
        }
    }
    ctx->pc = 0x240F8Cu;
    // 0x240f8c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x240F8Cu;
    {
        const bool branch_taken_0x240f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F8Cu;
        // 0x240f90: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f8c) {
            ctx->pc = 0x240FE4u;
            goto label_240fe4;
        }
    }
    ctx->pc = 0x240F94u;
label_240f94:
    // 0x240f94: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x240F94u;
    {
        const bool branch_taken_0x240f94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F94u;
        // 0x240f98: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f94) {
            ctx->pc = 0x240FC4u;
            goto label_240fc4;
        }
    }
    ctx->pc = 0x240F9Cu;
    // 0x240f9c: 0x3402c223  ori         $v0, $zero, 0xC223
    ctx->pc = 0x240f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
    // 0x240fa0: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x240FA0u;
    {
        const bool branch_taken_0x240fa0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x240FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FA0u;
        // 0x240fa4: 0x3c1001c1  lui         $s0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fa0) {
            ctx->pc = 0x240FCCu;
            goto label_240fcc;
        }
    }
    ctx->pc = 0x240FA8u;
    // 0x240fa8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x240FA8u;
    {
        const bool branch_taken_0x240fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FA8u;
        // 0x240fac: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fa8) {
            ctx->pc = 0x240FE4u;
            goto label_240fe4;
        }
    }
    ctx->pc = 0x240FB0u;
label_240fb0:
    // 0x240fb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240fb4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x240FB4u;
    {
        const bool branch_taken_0x240fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FB4u;
        // 0x240fb8: 0x244250a0  addiu       $v0, $v0, 0x50A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fb4) {
            ctx->pc = 0x240FFCu;
            goto label_240ffc;
        }
    }
    ctx->pc = 0x240FBCu;
label_240fbc:
    // 0x240fbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x240FBCu;
    {
        const bool branch_taken_0x240fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FBCu;
        // 0x240fc0: 0x244250e8  addiu       $v0, $v0, 0x50E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fbc) {
            ctx->pc = 0x240FFCu;
            goto label_240ffc;
        }
    }
    ctx->pc = 0x240FC4u;
label_240fc4:
    // 0x240fc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x240FC4u;
    {
        const bool branch_taken_0x240fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FC4u;
        // 0x240fc8: 0x24425178  addiu       $v0, $v0, 0x5178 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fc4) {
            ctx->pc = 0x240FFCu;
            goto label_240ffc;
        }
    }
    ctx->pc = 0x240FCCu;
label_240fcc:
    // 0x240fcc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240fd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x240FD0u;
    {
        const bool branch_taken_0x240fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FD0u;
        // 0x240fd4: 0x244251c0  addiu       $v0, $v0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fd0) {
            ctx->pc = 0x240FFCu;
            goto label_240ffc;
        }
    }
    ctx->pc = 0x240FD8u;
label_240fd8:
    // 0x240fd8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240fdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x240FDCu;
    {
        const bool branch_taken_0x240fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FDCu;
        // 0x240fe0: 0x24425130  addiu       $v0, $v0, 0x5130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fdc) {
            ctx->pc = 0x240FFCu;
            goto label_240ffc;
        }
    }
    ctx->pc = 0x240FE4u;
label_240fe4:
    // 0x240fe4: 0x2610ada0  addiu       $s0, $s0, -0x5260
    ctx->pc = 0x240fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946208));
    // 0x240fe8: 0x24c66230  addiu       $a2, $a2, 0x6230
    ctx->pc = 0x240fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25136));
    // 0x240fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ff0: 0xc043e24  jal         func_10F890
    ctx->pc = 0x240FF0u;
    SET_GPR_U32(ctx, 31, 0x240FF8u);
    ctx->pc = 0x240FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240FF0u;
    // 0x240ff4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x240FF0u, 0x240FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FF8u;
label_240ff8:
    // 0x240ff8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240ffc:
    // 0x240ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241004: 0x3e00008  jr          $ra
    ctx->pc = 0x241004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241004u;
        // 0x241008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24100Cu;
    // 0x24100c: 0x0  nop
    ctx->pc = 0x24100cu;
    // NOP
}
