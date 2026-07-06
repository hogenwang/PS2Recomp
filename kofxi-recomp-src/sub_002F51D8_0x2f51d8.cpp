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

// Function: sub_002F51D8
// Address: 0x2f51d8 - 0x2f53a0
void sub_002F51D8_0x2f51d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F51D8_0x2f51d8");
#endif

    switch (ctx->pc) {
        case 0x2f5200u: goto label_2f5200;
        case 0x2f5218u: goto label_2f5218;
        case 0x2f523cu: goto label_2f523c;
        case 0x2f5260u: goto label_2f5260;
        case 0x2f5278u: goto label_2f5278;
        case 0x2f5294u: goto label_2f5294;
        case 0x2f52b8u: goto label_2f52b8;
        case 0x2f52d0u: goto label_2f52d0;
        case 0x2f52ecu: goto label_2f52ec;
        case 0x2f5304u: goto label_2f5304;
        case 0x2f5310u: goto label_2f5310;
        case 0x2f5334u: goto label_2f5334;
        case 0x2f5360u: goto label_2f5360;
        case 0x2f5388u: goto label_2f5388;
        default: break;
    }

    ctx->pc = 0x2f51d8u;

    // 0x2f51d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f51d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f51dc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f51dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f51e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f51e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f51e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f51e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f51e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f51ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f51ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f51f0: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F51F0u;
    {
        const bool branch_taken_0x2f51f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51F0u;
        // 0x2f51f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51f0) {
            ctx->pc = 0x2F5228u;
            goto label_2f5228;
        }
    }
    ctx->pc = 0x2F51F8u;
    // 0x2f51f8: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F51F8u;
    SET_GPR_U32(ctx, 31, 0x2F5200u);
    ctx->pc = 0x2F51FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F51F8u;
    // 0x2f51fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F51F8u, 0x2F5200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5200u;
label_2f5200:
    // 0x2f5200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5204: 0x1080005c  beqz        $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F5204u;
    {
        const bool branch_taken_0x2f5204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5204u;
        // 0x2f5208: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5204) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F520Cu;
    // 0x2f520c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f520cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5210: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F5210u;
    SET_GPR_U32(ctx, 31, 0x2F5218u);
    ctx->pc = 0x2F5214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5210u;
    // 0x2f5214: 0x24a51e80  addiu       $a1, $a1, 0x1E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F5210u, 0x2F5218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5218u;
label_2f5218:
    // 0x2f5218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f521c: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2F521Cu;
    {
        const bool branch_taken_0x2f521c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f521c) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F5224u;
    // 0x2f5224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5228:
    // 0x2f5228: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2f5228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f522c: 0x50a0001e  beql        $a1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F522Cu;
    {
        const bool branch_taken_0x2f522c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f522c) {
            ctx->pc = 0x2F5230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F522Cu;
            // 0x2f5230: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F52A8u;
            goto label_2f52a8;
        }
    }
    ctx->pc = 0x2F5234u;
    // 0x2f5234: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F5234u;
    SET_GPR_U32(ctx, 31, 0x2F523Cu);
    ctx->pc = 0x2F5238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5234u;
    // 0x2f5238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F5234u, 0x2F523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F523Cu;
label_2f523c:
    // 0x2f523c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f523cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5240: 0x1080004d  beqz        $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F5240u;
    {
        const bool branch_taken_0x2f5240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5240) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F5248u;
    // 0x2f5248: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2f5248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2f524c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F524Cu;
    {
        const bool branch_taken_0x2f524c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F524Cu;
        // 0x2f5250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f524c) {
            ctx->pc = 0x2F5288u;
            goto label_2f5288;
        }
    }
    ctx->pc = 0x2F5254u;
    // 0x2f5254: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f5254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f5258: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F5258u;
    SET_GPR_U32(ctx, 31, 0x2F5260u);
    ctx->pc = 0x2F525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5258u;
    // 0x2f525c: 0x24a51e88  addiu       $a1, $a1, 0x1E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F5258u, 0x2F5260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5260u;
label_2f5260:
    // 0x2f5260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5264: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F5264u;
    {
        const bool branch_taken_0x2f5264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5264) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F526Cu;
    // 0x2f526c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f526cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5270: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F5270u;
    SET_GPR_U32(ctx, 31, 0x2F5278u);
    ctx->pc = 0x2F5274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5270u;
    // 0x2f5274: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F5270u, 0x2F5278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5278u;
label_2f5278:
    // 0x2f5278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f527c: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2F527Cu;
    {
        const bool branch_taken_0x2f527c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f527c) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F5284u;
    // 0x2f5284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5288:
    // 0x2f5288: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f5288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f528c: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F528Cu;
    SET_GPR_U32(ctx, 31, 0x2F5294u);
    ctx->pc = 0x2F5290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F528Cu;
    // 0x2f5290: 0x24a51e90  addiu       $a1, $a1, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F528Cu, 0x2F5294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5294u;
label_2f5294:
    // 0x2f5294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5298: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2F5298u;
    {
        const bool branch_taken_0x2f5298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5298) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F52A0u;
    // 0x2f52a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f52a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52a4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2f52a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2f52a8:
    // 0x2f52a8: 0x50a0001e  beql        $a1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F52A8u;
    {
        const bool branch_taken_0x2f52a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f52a8) {
            ctx->pc = 0x2F52ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F52A8u;
            // 0x2f52ac: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5324u;
            goto label_2f5324;
        }
    }
    ctx->pc = 0x2F52B0u;
    // 0x2f52b0: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F52B0u;
    SET_GPR_U32(ctx, 31, 0x2F52B8u);
    ctx->pc = 0x2F52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F52B0u;
    // 0x2f52b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F52B0u, 0x2F52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52B8u;
label_2f52b8:
    // 0x2f52b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f52b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52bc: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F52BCu;
    {
        const bool branch_taken_0x2f52bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52BCu;
        // 0x2f52c0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52bc) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F52C4u;
    // 0x2f52c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f52c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52c8: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F52C8u;
    SET_GPR_U32(ctx, 31, 0x2F52D0u);
    ctx->pc = 0x2F52CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F52C8u;
    // 0x2f52cc: 0x24a51e88  addiu       $a1, $a1, 0x1E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F52C8u, 0x2F52D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52D0u;
label_2f52d0:
    // 0x2f52d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f52d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52d4: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F52D4u;
    {
        const bool branch_taken_0x2f52d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52D4u;
        // 0x2f52d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52d4) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F52DCu;
    // 0x2f52dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f52dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f52e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52e4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2F52E4u;
    SET_GPR_U32(ctx, 31, 0x2F52ECu);
    ctx->pc = 0x2F52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F52E4u;
    // 0x2f52e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2F52E4u, 0x2F52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52ECu;
label_2f52ec:
    // 0x2f52ec: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2f52ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2f52f0: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x2f52f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2f52f4: 0x24c61e98  addiu       $a2, $a2, 0x1E98
    ctx->pc = 0x2f52f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7832));
    // 0x2f52f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f52f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52fc: 0xc043e24  jal         func_10F890
    ctx->pc = 0x2F52FCu;
    SET_GPR_U32(ctx, 31, 0x2F5304u);
    ctx->pc = 0x2F5300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F52FCu;
    // 0x2f5300: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x2F52FCu, 0x2F5304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5304u;
label_2f5304:
    // 0x2f5304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5308: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F5308u;
    SET_GPR_U32(ctx, 31, 0x2F5310u);
    ctx->pc = 0x2F530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5308u;
    // 0x2f530c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F5308u, 0x2F5310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5310u;
label_2f5310:
    // 0x2f5310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5314: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F5314u;
    {
        const bool branch_taken_0x2f5314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5314) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F531Cu;
    // 0x2f531c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f531cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5320: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2f5320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2f5324:
    // 0x2f5324: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5324u;
    {
        const bool branch_taken_0x2f5324 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5324) {
            ctx->pc = 0x2F5328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5324u;
            // 0x2f5328: 0x8e260018  lw          $a2, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5348u;
            goto label_2f5348;
        }
    }
    ctx->pc = 0x2F532Cu;
    // 0x2f532c: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F532Cu;
    SET_GPR_U32(ctx, 31, 0x2F5334u);
    ctx->pc = 0x2F5330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F532Cu;
    // 0x2f5330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F532Cu, 0x2F5334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5334u;
label_2f5334:
    // 0x2f5334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5338: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F5338u;
    {
        const bool branch_taken_0x2f5338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5338) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F5340u;
    // 0x2f5340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5344: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x2f5344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2f5348:
    // 0x2f5348: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5348u;
    {
        const bool branch_taken_0x2f5348 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5348u;
        // 0x2f534c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5348) {
            ctx->pc = 0x2F5370u;
            goto label_2f5370;
        }
    }
    ctx->pc = 0x2F5350u;
    // 0x2f5350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5354: 0x24a51ea0  addiu       $a1, $a1, 0x1EA0
    ctx->pc = 0x2f5354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7840));
    // 0x2f5358: 0xc0bd9b0  jal         func_2F66C0
    ctx->pc = 0x2F5358u;
    SET_GPR_U32(ctx, 31, 0x2F5360u);
    ctx->pc = 0x2F535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5358u;
    // 0x2f535c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F66C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F66C0u, 0x2F5358u, 0x2F5360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5360u;
label_2f5360:
    // 0x2f5360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5364: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5364u;
    {
        const bool branch_taken_0x2f5364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5364) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F536Cu;
    // 0x2f536c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f536cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5370:
    // 0x2f5370: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5370u;
    {
        const bool branch_taken_0x2f5370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5370u;
        // 0x2f5374: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5370) {
            ctx->pc = 0x2F538Cu;
            goto label_2f538c;
        }
    }
    ctx->pc = 0x2F5378u;
label_2f5378:
    // 0x2f5378: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5378u;
    {
        const bool branch_taken_0x2f5378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5378u;
        // 0x2f537c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5378) {
            ctx->pc = 0x2F538Cu;
            goto label_2f538c;
        }
    }
    ctx->pc = 0x2F5380u;
    // 0x2f5380: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5380u;
    SET_GPR_U32(ctx, 31, 0x2F5388u);
    ctx->pc = 0x2F5384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5380u;
    // 0x2f5384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F5380u, 0x2F5388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5388u;
label_2f5388:
    // 0x2f5388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f538c:
    // 0x2f538c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f538cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5390: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f5390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5394: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f5394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5398: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5398u;
        // 0x2f539c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F53A0u;
}
