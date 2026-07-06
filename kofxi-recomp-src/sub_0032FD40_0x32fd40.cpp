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

// Function: sub_0032FD40
// Address: 0x32fd40 - 0x32ff70
void sub_0032FD40_0x32fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FD40_0x32fd40");
#endif

    switch (ctx->pc) {
        case 0x32fda8u: goto label_32fda8;
        case 0x32fde0u: goto label_32fde0;
        case 0x32fe14u: goto label_32fe14;
        case 0x32fe64u: goto label_32fe64;
        case 0x32fe90u: goto label_32fe90;
        case 0x32fec4u: goto label_32fec4;
        case 0x32ff18u: goto label_32ff18;
        case 0x32ff5cu: goto label_32ff5c;
        default: break;
    }

    ctx->pc = 0x32fd40u;

    // 0x32fd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32fd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32fd44: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fd48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32fd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32fd4c: 0x8c43e7e8  lw          $v1, -0x1818($v0)
    ctx->pc = 0x32fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961128)));
    // 0x32fd50: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fd54: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x32fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x32fd58: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32FD58u;
    {
        const bool branch_taken_0x32fd58 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x32FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD58u;
        // 0x32fd5c: 0xac43e7e8  sw          $v1, -0x1818($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd58) {
            ctx->pc = 0x32FD70u;
            goto label_32fd70;
        }
    }
    ctx->pc = 0x32FD60u;
    // 0x32fd60: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32fd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fd68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32FD68u;
    {
        const bool branch_taken_0x32fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD68u;
        // 0x32fd6c: 0xac60e7e8  sw          $zero, -0x1818($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd68) {
            ctx->pc = 0x32FDACu;
            goto label_32fdac;
        }
    }
    ctx->pc = 0x32FD70u;
label_32fd70:
    // 0x32fd70: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x32fd70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32fd74: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x32fd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32fd78: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x32fd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x32fd7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32fd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd80: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32fd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32fd84: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x32fd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32fd88: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x32fd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x32fd8c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32fd90: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x32fd90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x32fd94: 0x240801e0  addiu       $t0, $zero, 0x1E0
    ctx->pc = 0x32fd94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x32fd98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32fd98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32fd9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fda0: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x32FDA0u;
    SET_GPR_U32(ctx, 31, 0x32FDA8u);
    ctx->pc = 0x32FDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FDA0u;
    // 0x32fda4: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x32FDA0u, 0x32FDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FDA8u;
label_32fda8:
    // 0x32fda8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32fda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32fdac:
    // 0x32fdac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32fdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x32FDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDB0u;
        // 0x32fdb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FDB8u;
    // 0x32fdb8: 0x0  nop
    ctx->pc = 0x32fdb8u;
    // NOP
    // 0x32fdbc: 0x0  nop
    ctx->pc = 0x32fdbcu;
    // NOP
    // 0x32fdc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32fdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32fdc4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fdc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32fdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32fdcc: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x32fdccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x32fdd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32FDD0u;
    {
        const bool branch_taken_0x32fdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fdd0) {
            ctx->pc = 0x32FDE8u;
            goto label_32fde8;
        }
    }
    ctx->pc = 0x32FDD8u;
    // 0x32fdd8: 0xc055728  jal         func_155CA0
    ctx->pc = 0x32FDD8u;
    SET_GPR_U32(ctx, 31, 0x32FDE0u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x32FDD8u, 0x32FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FDE0u;
label_32fde0:
    // 0x32fde0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x32FDE0u;
    {
        const bool branch_taken_0x32fde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDE0u;
        // 0x32fde4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fde0) {
            ctx->pc = 0x32FE68u;
            goto label_32fe68;
        }
    }
    ctx->pc = 0x32FDE8u;
label_32fde8:
    // 0x32fde8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32fdec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fdf0: 0x8c63e7e8  lw          $v1, -0x1818($v1)
    ctx->pc = 0x32fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961128)));
    // 0x32fdf4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x32fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x32fdf8: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x32fdf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x32fdfc: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x32FDFCu;
    {
        const bool branch_taken_0x32fdfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDFCu;
        // 0x32fe00: 0xac43e7e8  sw          $v1, -0x1818($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fdfc) {
            ctx->pc = 0x32FE28u;
            goto label_32fe28;
        }
    }
    ctx->pc = 0x32FE04u;
    // 0x32fe04: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32fe08: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fe0c: 0xc055728  jal         func_155CA0
    ctx->pc = 0x32FE0Cu;
    SET_GPR_U32(ctx, 31, 0x32FE14u);
    ctx->pc = 0x32FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE0Cu;
    // 0x32fe10: 0xac43e7e8  sw          $v1, -0x1818($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x32FE0Cu, 0x32FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FE14u;
label_32fe14:
    // 0x32fe14: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32fe18: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fe1c: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x32fe1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x32fe20: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x32fe20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x32fe24: 0xa043e810  sb          $v1, -0x17F0($v0)
    ctx->pc = 0x32fe24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 3));
label_32fe28:
    // 0x32fe28: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x32fe28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32fe2c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fe30: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x32fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x32fe34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32fe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fe38: 0x9042e7e8  lbu         $v0, -0x1818($v0)
    ctx->pc = 0x32fe38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961128)));
    // 0x32fe3c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x32fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32fe40: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32fe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32fe44: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x32fe44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x32fe48: 0x240801e0  addiu       $t0, $zero, 0x1E0
    ctx->pc = 0x32fe48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x32fe4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32fe4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fe50: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32fe50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32fe54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32fe54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fe58: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x32fe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x32fe5c: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x32FE5Cu;
    SET_GPR_U32(ctx, 31, 0x32FE64u);
    ctx->pc = 0x32FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE5Cu;
    // 0x32fe60: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x32FE5Cu, 0x32FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FE64u;
label_32fe64:
    // 0x32fe64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32fe64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32fe68:
    // 0x32fe68: 0x3e00008  jr          $ra
    ctx->pc = 0x32FE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE68u;
        // 0x32fe6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FE70u;
    // 0x32fe70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32fe74: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fe78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32fe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32fe7c: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x32fe7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x32fe80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32FE80u;
    {
        const bool branch_taken_0x32fe80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fe80) {
            ctx->pc = 0x32FE98u;
            goto label_32fe98;
        }
    }
    ctx->pc = 0x32FE88u;
    // 0x32fe88: 0xc055728  jal         func_155CA0
    ctx->pc = 0x32FE88u;
    SET_GPR_U32(ctx, 31, 0x32FE90u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x32FE88u, 0x32FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FE90u;
label_32fe90:
    // 0x32fe90: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x32FE90u;
    {
        const bool branch_taken_0x32fe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE90u;
        // 0x32fe94: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe90) {
            ctx->pc = 0x32FF60u;
            goto label_32ff60;
        }
    }
    ctx->pc = 0x32FE98u;
label_32fe98:
    // 0x32fe98: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32fe9c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fea0: 0x8c63e7e8  lw          $v1, -0x1818($v1)
    ctx->pc = 0x32fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961128)));
    // 0x32fea4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x32fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x32fea8: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x32fea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x32feac: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x32FEACu;
    {
        const bool branch_taken_0x32feac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEACu;
        // 0x32feb0: 0xac43e7e8  sw          $v1, -0x1818($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32feac) {
            ctx->pc = 0x32FED8u;
            goto label_32fed8;
        }
    }
    ctx->pc = 0x32FEB4u;
    // 0x32feb4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x32feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x32feb8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32febc: 0xc055728  jal         func_155CA0
    ctx->pc = 0x32FEBCu;
    SET_GPR_U32(ctx, 31, 0x32FEC4u);
    ctx->pc = 0x32FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FEBCu;
    // 0x32fec0: 0xac43e7e8  sw          $v1, -0x1818($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x32FEBCu, 0x32FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FEC4u;
label_32fec4:
    // 0x32fec4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32fec8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fecc: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x32feccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x32fed0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x32fed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x32fed4: 0xa043e810  sb          $v1, -0x17F0($v0)
    ctx->pc = 0x32fed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 3));
label_32fed8:
    // 0x32fed8: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x32fed8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32fedc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32fee0: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x32fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x32fee4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32fee8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x32fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x32feec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32feecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fef0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x32fef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x32fef4: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x32fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32fef8: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x32fef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x32fefc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32fefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32ff00: 0x8c42e7e8  lw          $v0, -0x1818($v0)
    ctx->pc = 0x32ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961128)));
    // 0x32ff04: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x32ff04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x32ff08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32ff08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32ff0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff10: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x32FF10u;
    SET_GPR_U32(ctx, 31, 0x32FF18u);
    ctx->pc = 0x32FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF10u;
    // 0x32ff14: 0x240c0  sll         $t0, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x32FF10u, 0x32FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF18u;
label_32ff18:
    // 0x32ff18: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32ff1c: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x32ff1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32ff20: 0x8c45e7e8  lw          $a1, -0x1818($v0)
    ctx->pc = 0x32ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961128)));
    // 0x32ff24: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32ff28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32ff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32ff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32ff30: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x32ff30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x32ff34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32ff34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff38: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x32ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x32ff3c: 0x240201d0  addiu       $v0, $zero, 0x1D0
    ctx->pc = 0x32ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x32ff40: 0x540c0  sll         $t0, $a1, 3
    ctx->pc = 0x32ff40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x32ff44: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x32ff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x32ff48: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x32ff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x32ff4c: 0x482823  subu        $a1, $v0, $t0
    ctx->pc = 0x32ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x32ff50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32ff50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff54: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x32FF54u;
    SET_GPR_U32(ctx, 31, 0x32FF5Cu);
    ctx->pc = 0x32FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF54u;
    // 0x32ff58: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x32FF54u, 0x32FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF5Cu;
label_32ff5c:
    // 0x32ff5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32ff5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32ff60:
    // 0x32ff60: 0x3e00008  jr          $ra
    ctx->pc = 0x32FF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF60u;
        // 0x32ff64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FF68u;
    // 0x32ff68: 0x0  nop
    ctx->pc = 0x32ff68u;
    // NOP
    // 0x32ff6c: 0x0  nop
    ctx->pc = 0x32ff6cu;
    // NOP
    if (ctx->pc == 0x32ff6cu) { ctx->pc = 0x32ff70u; }
}
