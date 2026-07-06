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

// Function: sub_0013B150
// Address: 0x13b150 - 0x13b1f0
void sub_0013B150_0x13b150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B150_0x13b150");
#endif

    ctx->pc = 0x13b150u;

    // 0x13b150: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x13b150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x13b154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13b154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b158: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x13b158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x13b15c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B15Cu;
    {
        const bool branch_taken_0x13b15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B15Cu;
        // 0x13b160: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b15c) {
            ctx->pc = 0x13B16Cu;
            goto label_13b16c;
        }
    }
    ctx->pc = 0x13B164u;
    // 0x13b164: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13B164u;
    {
        const bool branch_taken_0x13b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B164u;
        // 0x13b168: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b164) {
            ctx->pc = 0x13B17Cu;
            goto label_13b17c;
        }
    }
    ctx->pc = 0x13B16Cu;
label_13b16c:
    // 0x13b16c: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x13b16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x13b170: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B170u;
    {
        const bool branch_taken_0x13b170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b170) {
            ctx->pc = 0x13B174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B170u;
            // 0x13b174: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B180u;
            goto label_13b180;
        }
    }
    ctx->pc = 0x13B178u;
    // 0x13b178: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x13b178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_13b17c:
    // 0x13b17c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x13b17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_13b180:
    // 0x13b180: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B180u;
    {
        const bool branch_taken_0x13b180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b180) {
            ctx->pc = 0x13B184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B180u;
            // 0x13b184: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B190u;
            goto label_13b190;
        }
    }
    ctx->pc = 0x13B188u;
    // 0x13b188: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13B188u;
    {
        const bool branch_taken_0x13b188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B188u;
        // 0x13b18c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b188) {
            ctx->pc = 0x13B1DCu;
            goto label_13b1dc;
        }
    }
    ctx->pc = 0x13B190u;
label_13b190:
    // 0x13b190: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B190u;
    {
        const bool branch_taken_0x13b190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b190) {
            ctx->pc = 0x13B194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B190u;
            // 0x13b194: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B1A0u;
            goto label_13b1a0;
        }
    }
    ctx->pc = 0x13B198u;
    // 0x13b198: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13B198u;
    {
        const bool branch_taken_0x13b198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B198u;
        // 0x13b19c: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b198) {
            ctx->pc = 0x13B1DCu;
            goto label_13b1dc;
        }
    }
    ctx->pc = 0x13B1A0u;
label_13b1a0:
    // 0x13b1a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B1A0u;
    {
        const bool branch_taken_0x13b1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b1a0) {
            ctx->pc = 0x13B1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B1A0u;
            // 0x13b1a4: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B1B0u;
            goto label_13b1b0;
        }
    }
    ctx->pc = 0x13B1A8u;
    // 0x13b1a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13B1A8u;
    {
        const bool branch_taken_0x13b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1A8u;
        // 0x13b1ac: 0x24a40002  addiu       $a0, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1a8) {
            ctx->pc = 0x13B1DCu;
            goto label_13b1dc;
        }
    }
    ctx->pc = 0x13B1B0u;
label_13b1b0:
    // 0x13b1b0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B1B0u;
    {
        const bool branch_taken_0x13b1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b1b0) {
            ctx->pc = 0x13B1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B1B0u;
            // 0x13b1b4: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B1C0u;
            goto label_13b1c0;
        }
    }
    ctx->pc = 0x13B1B8u;
    // 0x13b1b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13B1B8u;
    {
        const bool branch_taken_0x13b1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1B8u;
        // 0x13b1bc: 0x24a40003  addiu       $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1b8) {
            ctx->pc = 0x13B1DCu;
            goto label_13b1dc;
        }
    }
    ctx->pc = 0x13B1C0u;
label_13b1c0:
    // 0x13b1c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B1C0u;
    {
        const bool branch_taken_0x13b1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b1c0) {
            ctx->pc = 0x13B1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B1C0u;
            // 0x13b1c4: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B1D0u;
            goto label_13b1d0;
        }
    }
    ctx->pc = 0x13B1C8u;
    // 0x13b1c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13B1C8u;
    {
        const bool branch_taken_0x13b1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1C8u;
        // 0x13b1cc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1c8) {
            ctx->pc = 0x13B1DCu;
            goto label_13b1dc;
        }
    }
    ctx->pc = 0x13B1D0u;
label_13b1d0:
    // 0x13b1d0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B1D0u;
    {
        const bool branch_taken_0x13b1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b1d0) {
            ctx->pc = 0x13B1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B1D0u;
            // 0x13b1d4: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B1E0u;
            goto label_13b1e0;
        }
    }
    ctx->pc = 0x13B1D8u;
    // 0x13b1d8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x13b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_13b1dc:
    // 0x13b1dc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x13b1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_13b1e0:
    // 0x13b1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13B1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B1E8u;
    // 0x13b1e8: 0x0  nop
    ctx->pc = 0x13b1e8u;
    // NOP
    // 0x13b1ec: 0x0  nop
    ctx->pc = 0x13b1ecu;
    // NOP
}
