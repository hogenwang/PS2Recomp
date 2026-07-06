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

// Function: sub_0021B120
// Address: 0x21b120 - 0x21b2b8
void sub_0021B120_0x21b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B120_0x21b120");
#endif

    switch (ctx->pc) {
        case 0x21b13cu: goto label_21b13c;
        case 0x21b14cu: goto label_21b14c;
        case 0x21b15cu: goto label_21b15c;
        case 0x21b1bcu: goto label_21b1bc;
        case 0x21b1d0u: goto label_21b1d0;
        case 0x21b1e4u: goto label_21b1e4;
        case 0x21b1f4u: goto label_21b1f4;
        case 0x21b25cu: goto label_21b25c;
        case 0x21b270u: goto label_21b270;
        case 0x21b284u: goto label_21b284;
        case 0x21b28cu: goto label_21b28c;
        default: break;
    }

    ctx->pc = 0x21b120u;

label_21b120:
    // 0x21b120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b128: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21b128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21b12c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b12cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b130: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b134: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21B134u;
    SET_GPR_U32(ctx, 31, 0x21B13Cu);
    ctx->pc = 0x21B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B134u;
    // 0x21b138: 0x24841580  addiu       $a0, $a0, 0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21B134u, 0x21B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B13Cu;
label_21b13c:
    // 0x21b13c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21b13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b140: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b144: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21B144u;
    SET_GPR_U32(ctx, 31, 0x21B14Cu);
    ctx->pc = 0x21B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B144u;
    // 0x21b148: 0x24841050  addiu       $a0, $a0, 0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21B144u, 0x21B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B14Cu;
label_21b14c:
    // 0x21b14c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21b14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21b150: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b154: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21B154u;
    SET_GPR_U32(ctx, 31, 0x21B15Cu);
    ctx->pc = 0x21B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B154u;
    // 0x21b158: 0x248410e0  addiu       $a0, $a0, 0x10E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21B154u, 0x21B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B15Cu;
label_21b15c:
    // 0x21b15c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x21b15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21b160: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b164: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21b164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b168: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x21b168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21b16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b170: 0x8043e52  j           func_10F948
    ctx->pc = 0x21B170u;
    ctx->pc = 0x21B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B170u;
    // 0x21b174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21B178u;
    // 0x21b178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b17c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21b17cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21b180: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21b184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b18c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21b190: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21b190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b194: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21b194u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21b198: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21b198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b19c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21b1a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21b1a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21b1a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b1a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1ac: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x21b1acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21b1b0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21b1b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21b1b4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21B1B4u;
    SET_GPR_U32(ctx, 31, 0x21B1BCu);
    ctx->pc = 0x21B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B1B4u;
    // 0x21b1b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21B1B4u, 0x21B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B1BCu;
label_21b1bc:
    // 0x21b1bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b1c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1c8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21B1C8u;
    SET_GPR_U32(ctx, 31, 0x21B1D0u);
    ctx->pc = 0x21B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B1C8u;
    // 0x21b1cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21B1C8u, 0x21B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B1D0u;
label_21b1d0:
    // 0x21b1d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1dc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21B1DCu;
    SET_GPR_U32(ctx, 31, 0x21B1E4u);
    ctx->pc = 0x21B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B1DCu;
    // 0x21b1e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21B1DCu, 0x21B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B1E4u;
label_21b1e4:
    // 0x21b1e4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21b1e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21b1e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21b1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1ec: 0xc086c48  jal         func_21B120
    ctx->pc = 0x21B1ECu;
    SET_GPR_U32(ctx, 31, 0x21B1F4u);
    ctx->pc = 0x21B1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B1ECu;
    // 0x21b1f0: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B120u;
    goto label_21b120;
    ctx->pc = 0x21B1F4u;
label_21b1f4:
    // 0x21b1f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21b1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b1fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b1fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b200: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b204: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21b204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b208: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21b208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b20c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21b20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b210: 0x3e00008  jr          $ra
    ctx->pc = 0x21B210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B210u;
        // 0x21b214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B218u;
    // 0x21b218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b21c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21b21cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21b220: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21b220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21b224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b22c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21b230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b234: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21b238: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21b238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b23c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21b23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21b240: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21b240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b244: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21b244u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21b248: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b24c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21b24cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b250: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b254: 0xc084612  jal         func_211848
    ctx->pc = 0x21B254u;
    SET_GPR_U32(ctx, 31, 0x21B25Cu);
    ctx->pc = 0x21B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B254u;
    // 0x21b258: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21B254u, 0x21B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B25Cu;
label_21b25c:
    // 0x21b25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b260: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21b260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b264: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b268: 0xc084612  jal         func_211848
    ctx->pc = 0x21B268u;
    SET_GPR_U32(ctx, 31, 0x21B270u);
    ctx->pc = 0x21B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B268u;
    // 0x21b26c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21B268u, 0x21B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B270u;
label_21b270:
    // 0x21b270: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21b270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b274: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b27c: 0xc084612  jal         func_211848
    ctx->pc = 0x21B27Cu;
    SET_GPR_U32(ctx, 31, 0x21B284u);
    ctx->pc = 0x21B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B27Cu;
    // 0x21b280: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21B27Cu, 0x21B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B284u;
label_21b284:
    // 0x21b284: 0xc086c48  jal         func_21B120
    ctx->pc = 0x21B284u;
    SET_GPR_U32(ctx, 31, 0x21B28Cu);
    ctx->pc = 0x21B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B284u;
    // 0x21b288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B120u;
    goto label_21b120;
    ctx->pc = 0x21B28Cu;
label_21b28c:
    // 0x21b28c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21b290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b294: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21b294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21b298: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b29c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b29cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b2a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21b2a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b2a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21b2a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b2a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21b2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x21B2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2ACu;
        // 0x21b2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B2B4u;
    // 0x21b2b4: 0x0  nop
    ctx->pc = 0x21b2b4u;
    // NOP
    if (ctx->pc == 0x21b2b4u) { ctx->pc = 0x21b2b8u; }
}
