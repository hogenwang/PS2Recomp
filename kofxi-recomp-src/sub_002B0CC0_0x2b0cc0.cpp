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

// Function: sub_002B0CC0
// Address: 0x2b0cc0 - 0x2b0dd8
void sub_002B0CC0_0x2b0cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0CC0_0x2b0cc0");
#endif

    switch (ctx->pc) {
        case 0x2b0cd8u: goto label_2b0cd8;
        case 0x2b0cfcu: goto label_2b0cfc;
        case 0x2b0d14u: goto label_2b0d14;
        case 0x2b0d28u: goto label_2b0d28;
        case 0x2b0d30u: goto label_2b0d30;
        case 0x2b0d44u: goto label_2b0d44;
        case 0x2b0d58u: goto label_2b0d58;
        case 0x2b0d6cu: goto label_2b0d6c;
        case 0x2b0d80u: goto label_2b0d80;
        case 0x2b0d98u: goto label_2b0d98;
        case 0x2b0dacu: goto label_2b0dac;
        default: break;
    }

    ctx->pc = 0x2b0cc0u;

    // 0x2b0cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b0cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b0cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b0cc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b0cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b0ccc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b0cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b0cd0: 0xc0aeef6  jal         func_2BBBD8
    ctx->pc = 0x2B0CD0u;
    SET_GPR_U32(ctx, 31, 0x2B0CD8u);
    ctx->pc = 0x2B0CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CD0u;
    // 0x2b0cd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBBD8u, 0x2B0CD0u, 0x2B0CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CD8u;
label_2b0cd8:
    // 0x2b0cd8: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2B0CD8u;
    {
        const bool branch_taken_0x2b0cd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CD8u;
        // 0x2b0cdc: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cd8) {
            ctx->pc = 0x2B0DC4u;
            goto label_2b0dc4;
        }
    }
    ctx->pc = 0x2B0CE0u;
    // 0x2b0ce0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2b0ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2b0ce4: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2b0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2b0ce8: 0x24e7d3d0  addiu       $a3, $a3, -0x2C30
    ctx->pc = 0x2b0ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955984));
    // 0x2b0cec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b0cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b0cf0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2b0cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b0cf4: 0xc0a8b46  jal         func_2A2D18
    ctx->pc = 0x2B0CF4u;
    SET_GPR_U32(ctx, 31, 0x2B0CFCu);
    ctx->pc = 0x2B0CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CF4u;
    // 0x2b0cf8: 0x240805d5  addiu       $t0, $zero, 0x5D5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1493));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2B0CF4u, 0x2B0CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CFCu;
label_2b0cfc:
    // 0x2b0cfc: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2B0CFCu;
    {
        const bool branch_taken_0x2b0cfc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CFCu;
        // 0x2b0d00: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cfc) {
            ctx->pc = 0x2B0DC8u;
            goto label_2b0dc8;
        }
    }
    ctx->pc = 0x2B0D04u;
    // 0x2b0d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d0c: 0xc0a5d58  jal         func_297560
    ctx->pc = 0x2B0D0Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D14u);
    ctx->pc = 0x2B0D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D0Cu;
    // 0x2b0d10: 0x260600f8  addiu       $a2, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297560u, 0x2B0D0Cu, 0x2B0D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D14u;
label_2b0d14:
    // 0x2b0d14: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2b0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b0d18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0D18u;
    {
        const bool branch_taken_0x2b0d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D18u;
        // 0x2b0d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d18) {
            ctx->pc = 0x2B0D30u;
            goto label_2b0d30;
        }
    }
    ctx->pc = 0x2B0D20u;
    // 0x2b0d20: 0xc0aee50  jal         func_2BB940
    ctx->pc = 0x2B0D20u;
    SET_GPR_U32(ctx, 31, 0x2B0D28u);
    ctx->pc = 0x2B0D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D20u;
    // 0x2b0d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB940u, 0x2B0D20u, 0x2B0D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D28u;
label_2b0d28:
    // 0x2b0d28: 0xc0a61ba  jal         func_2986E8
    ctx->pc = 0x2B0D28u;
    SET_GPR_U32(ctx, 31, 0x2B0D30u);
    ctx->pc = 0x2B0D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D28u;
    // 0x2b0d2c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2986E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2986E8u, 0x2B0D28u, 0x2B0D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D30u;
label_2b0d30:
    // 0x2b0d30: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2b0d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2b0d34: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0D34u;
    {
        const bool branch_taken_0x2b0d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0d34) {
            ctx->pc = 0x2B0D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0D34u;
            // 0x2b0d38: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0D48u;
            goto label_2b0d48;
        }
    }
    ctx->pc = 0x2B0D3Cu;
    // 0x2b0d3c: 0xc0a3b6a  jal         func_28EDA8
    ctx->pc = 0x2B0D3Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D44u);
    ctx->pc = 0x28EDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EDA8u, 0x2B0D3Cu, 0x2B0D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D44u;
label_2b0d44:
    // 0x2b0d44: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2b0d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b0d48:
    // 0x2b0d48: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0D48u;
    {
        const bool branch_taken_0x2b0d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0d48) {
            ctx->pc = 0x2B0D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0D48u;
            // 0x2b0d4c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0D5Cu;
            goto label_2b0d5c;
        }
    }
    ctx->pc = 0x2B0D50u;
    // 0x2b0d50: 0xc0af176  jal         func_2BC5D8
    ctx->pc = 0x2B0D50u;
    SET_GPR_U32(ctx, 31, 0x2B0D58u);
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2B0D50u, 0x2B0D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D58u;
label_2b0d58:
    // 0x2b0d58: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2b0d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2b0d5c:
    // 0x2b0d5c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0D5Cu;
    {
        const bool branch_taken_0x2b0d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0d5c) {
            ctx->pc = 0x2B0D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0D5Cu;
            // 0x2b0d60: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0D70u;
            goto label_2b0d70;
        }
    }
    ctx->pc = 0x2B0D64u;
    // 0x2b0d64: 0xc0af176  jal         func_2BC5D8
    ctx->pc = 0x2B0D64u;
    SET_GPR_U32(ctx, 31, 0x2B0D6Cu);
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2B0D64u, 0x2B0D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D6Cu;
label_2b0d6c:
    // 0x2b0d6c: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x2b0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2b0d70:
    // 0x2b0d70: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0D70u;
    {
        const bool branch_taken_0x2b0d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0d70) {
            ctx->pc = 0x2B0D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0D70u;
            // 0x2b0d74: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0D84u;
            goto label_2b0d84;
        }
    }
    ctx->pc = 0x2B0D78u;
    // 0x2b0d78: 0xc0abe62  jal         func_2AF988
    ctx->pc = 0x2B0D78u;
    SET_GPR_U32(ctx, 31, 0x2B0D80u);
    ctx->pc = 0x2AF988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF988u, 0x2B0D78u, 0x2B0D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D80u;
label_2b0d80:
    // 0x2b0d80: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x2b0d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_2b0d84:
    // 0x2b0d84: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0D84u;
    {
        const bool branch_taken_0x2b0d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0d84) {
            ctx->pc = 0x2B0D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0D84u;
            // 0x2b0d88: 0x8e040110  lw          $a0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0D9Cu;
            goto label_2b0d9c;
        }
    }
    ctx->pc = 0x2B0D8Cu;
    // 0x2b0d8c: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2b0d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2b0d90: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2B0D90u;
    SET_GPR_U32(ctx, 31, 0x2B0D98u);
    ctx->pc = 0x2B0D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D90u;
    // 0x2b0d94: 0x24a5e950  addiu       $a1, $a1, -0x16B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5B0u, 0x2B0D90u, 0x2B0D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D98u;
label_2b0d98:
    // 0x2b0d98: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2b0d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2b0d9c:
    // 0x2b0d9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0D9Cu;
    {
        const bool branch_taken_0x2b0d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D9Cu;
        // 0x2b0da0: 0x3c050029  lui         $a1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d9c) {
            ctx->pc = 0x2B0DACu;
            goto label_2b0dac;
        }
    }
    ctx->pc = 0x2B0DA4u;
    // 0x2b0da4: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2B0DA4u;
    SET_GPR_U32(ctx, 31, 0x2B0DACu);
    ctx->pc = 0x2B0DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DA4u;
    // 0x2b0da8: 0x24a5e430  addiu       $a1, $a1, -0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5B0u, 0x2B0DA4u, 0x2B0DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DACu;
label_2b0dac:
    // 0x2b0dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0db0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b0db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0db4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b0db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0dbc: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2B0DBCu;
    ctx->pc = 0x2B0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DBCu;
    // 0x2b0dc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2B0DC4u;
label_2b0dc4:
    // 0x2b0dc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b0dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0dc8:
    // 0x2b0dc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b0dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DD0u;
        // 0x2b0dd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0DD8u;
}
