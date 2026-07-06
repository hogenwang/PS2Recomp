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

// Function: sub_0021B5E0
// Address: 0x21b5e0 - 0x21b778
void sub_0021B5E0_0x21b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B5E0_0x21b5e0");
#endif

    switch (ctx->pc) {
        case 0x21b5fcu: goto label_21b5fc;
        case 0x21b60cu: goto label_21b60c;
        case 0x21b61cu: goto label_21b61c;
        case 0x21b67cu: goto label_21b67c;
        case 0x21b690u: goto label_21b690;
        case 0x21b6a4u: goto label_21b6a4;
        case 0x21b6b4u: goto label_21b6b4;
        case 0x21b71cu: goto label_21b71c;
        case 0x21b730u: goto label_21b730;
        case 0x21b744u: goto label_21b744;
        case 0x21b74cu: goto label_21b74c;
        default: break;
    }

    ctx->pc = 0x21b5e0u;

label_21b5e0:
    // 0x21b5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b5e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b5e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21b5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21b5ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b5f4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21B5F4u;
    SET_GPR_U32(ctx, 31, 0x21B5FCu);
    ctx->pc = 0x21B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5F4u;
    // 0x21b5f8: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21B5F4u, 0x21B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B5FCu;
label_21b5fc:
    // 0x21b5fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21b5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b600: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b604: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21B604u;
    SET_GPR_U32(ctx, 31, 0x21B60Cu);
    ctx->pc = 0x21B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B604u;
    // 0x21b608: 0x24841050  addiu       $a0, $a0, 0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21B604u, 0x21B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B60Cu;
label_21b60c:
    // 0x21b60c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21b610: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b614: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21B614u;
    SET_GPR_U32(ctx, 31, 0x21B61Cu);
    ctx->pc = 0x21B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B614u;
    // 0x21b618: 0x248410e0  addiu       $a0, $a0, 0x10E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21B614u, 0x21B61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B61Cu;
label_21b61c:
    // 0x21b61c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x21b61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21b620: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b624: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21b624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b628: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x21b628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21b62c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b630: 0x8043e52  j           func_10F948
    ctx->pc = 0x21B630u;
    ctx->pc = 0x21B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B630u;
    // 0x21b634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21B638u;
    // 0x21b638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b63c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21b63cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21b640: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21b644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b648: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b64c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21b64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21b650: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21b650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b654: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21b654u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21b658: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21b658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b65c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21b660: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21b660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b664: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21b664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21b668: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b66c: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x21b66cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21b670: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21b670u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21b674: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21B674u;
    SET_GPR_U32(ctx, 31, 0x21B67Cu);
    ctx->pc = 0x21B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B674u;
    // 0x21b678: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21B674u, 0x21B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B67Cu;
label_21b67c:
    // 0x21b67c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b684: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b688: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21B688u;
    SET_GPR_U32(ctx, 31, 0x21B690u);
    ctx->pc = 0x21B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B688u;
    // 0x21b68c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21B688u, 0x21B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B690u;
label_21b690:
    // 0x21b690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b694: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b698: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b69c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21B69Cu;
    SET_GPR_U32(ctx, 31, 0x21B6A4u);
    ctx->pc = 0x21B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B69Cu;
    // 0x21b6a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21B69Cu, 0x21B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6A4u;
label_21b6a4:
    // 0x21b6a4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21b6a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21b6a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21b6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6ac: 0xc086d78  jal         func_21B5E0
    ctx->pc = 0x21B6ACu;
    SET_GPR_U32(ctx, 31, 0x21B6B4u);
    ctx->pc = 0x21B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6ACu;
    // 0x21b6b0: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B5E0u;
    goto label_21b5e0;
    ctx->pc = 0x21B6B4u;
label_21b6b4:
    // 0x21b6b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21b6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b6bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b6c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b6c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b6c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21b6c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b6c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21b6c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b6cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21b6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21B6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6D0u;
        // 0x21b6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B6D8u;
    // 0x21b6d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b6dc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21b6dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21b6e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21b6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21b6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b6e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b6ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21b6f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21b6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21b6f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21b6f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21b6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21b700: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21b700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b704: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21b704u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21b708: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b70c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21b70cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b710: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b714: 0xc084612  jal         func_211848
    ctx->pc = 0x21B714u;
    SET_GPR_U32(ctx, 31, 0x21B71Cu);
    ctx->pc = 0x21B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B714u;
    // 0x21b718: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21B714u, 0x21B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B71Cu;
label_21b71c:
    // 0x21b71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b720: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21b720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b724: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b728: 0xc084612  jal         func_211848
    ctx->pc = 0x21B728u;
    SET_GPR_U32(ctx, 31, 0x21B730u);
    ctx->pc = 0x21B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B728u;
    // 0x21b72c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21B728u, 0x21B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B730u;
label_21b730:
    // 0x21b730: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21b730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b734: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21b734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b73c: 0xc084612  jal         func_211848
    ctx->pc = 0x21B73Cu;
    SET_GPR_U32(ctx, 31, 0x21B744u);
    ctx->pc = 0x21B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B73Cu;
    // 0x21b740: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21B73Cu, 0x21B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B744u;
label_21b744:
    // 0x21b744: 0xc086d78  jal         func_21B5E0
    ctx->pc = 0x21B744u;
    SET_GPR_U32(ctx, 31, 0x21B74Cu);
    ctx->pc = 0x21B748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B744u;
    // 0x21b748: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B5E0u;
    goto label_21b5e0;
    ctx->pc = 0x21B74Cu;
label_21b74c:
    // 0x21b74c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21b750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b754: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21b754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21b758: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b75c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b75cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b760: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21b760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b764: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21b764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b768: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21b768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b76c: 0x3e00008  jr          $ra
    ctx->pc = 0x21B76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B76Cu;
        // 0x21b770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B774u;
    // 0x21b774: 0x0  nop
    ctx->pc = 0x21b774u;
    // NOP
}
