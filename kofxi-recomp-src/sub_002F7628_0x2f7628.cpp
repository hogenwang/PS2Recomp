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

// Function: sub_002F7628
// Address: 0x2f7628 - 0x2f7968
void sub_002F7628_0x2f7628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7628_0x2f7628");
#endif

    switch (ctx->pc) {
        case 0x2f7668u: goto label_2f7668;
        case 0x2f7680u: goto label_2f7680;
        case 0x2f769cu: goto label_2f769c;
        case 0x2f76c0u: goto label_2f76c0;
        case 0x2f773cu: goto label_2f773c;
        case 0x2f7740u: goto label_2f7740;
        case 0x2f7748u: goto label_2f7748;
        case 0x2f7778u: goto label_2f7778;
        case 0x2f7790u: goto label_2f7790;
        case 0x2f77a8u: goto label_2f77a8;
        case 0x2f77bcu: goto label_2f77bc;
        case 0x2f77ecu: goto label_2f77ec;
        case 0x2f77f0u: goto label_2f77f0;
        case 0x2f77f8u: goto label_2f77f8;
        case 0x2f7828u: goto label_2f7828;
        case 0x2f7840u: goto label_2f7840;
        case 0x2f7858u: goto label_2f7858;
        case 0x2f786cu: goto label_2f786c;
        case 0x2f7898u: goto label_2f7898;
        case 0x2f78c8u: goto label_2f78c8;
        case 0x2f78dcu: goto label_2f78dc;
        case 0x2f7910u: goto label_2f7910;
        case 0x2f7940u: goto label_2f7940;
        case 0x2f7954u: goto label_2f7954;
        default: break;
    }

    ctx->pc = 0x2f7628u;

label_2f7628:
    // 0x2f7628: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f7628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f762c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f7630: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f7630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f7634: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2f7634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7638: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f763c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2f763cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7640: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f7640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f7644: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f7644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7648: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f7648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f764c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2f764cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7650: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f7650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f7654: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f7654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7658: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f7658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f765c: 0x1a800022  blez        $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F765Cu;
    {
        const bool branch_taken_0x2f765c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2F7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F765Cu;
        // 0x2f7660: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f765c) {
            ctx->pc = 0x2F76E8u;
            goto label_2f76e8;
        }
    }
    ctx->pc = 0x2F7664u;
    // 0x2f7664: 0x2415fc15  addiu       $s5, $zero, -0x3EB
    ctx->pc = 0x2f7664u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966293));
label_2f7668:
    // 0x2f7668: 0x8e220170  lw          $v0, 0x170($s1)
    ctx->pc = 0x2f7668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x2f766c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F766Cu;
    {
        const bool branch_taken_0x2f766c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F766Cu;
        // 0x2f7670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f766c) {
            ctx->pc = 0x2F7688u;
            goto label_2f7688;
        }
    }
    ctx->pc = 0x2F7674u;
    // 0x2f7674: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f7674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7678: 0xc0bea8c  jal         func_2FAA30
    ctx->pc = 0x2F7678u;
    SET_GPR_U32(ctx, 31, 0x2F7680u);
    ctx->pc = 0x2F767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7678u;
    // 0x2f767c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAA30u, 0x2F7678u, 0x2F7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7680u;
label_2f7680:
    // 0x2f7680: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F7680u;
    {
        const bool branch_taken_0x2f7680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7680u;
        // 0x2f7684: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7680) {
            ctx->pc = 0x2F76A4u;
            goto label_2f76a4;
        }
    }
    ctx->pc = 0x2F7688u;
label_2f7688:
    // 0x2f7688: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x2f7688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2f768c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f768cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7690: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f7690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7694: 0xc0bf220  jal         func_2FC880
    ctx->pc = 0x2F7694u;
    SET_GPR_U32(ctx, 31, 0x2F769Cu);
    ctx->pc = 0x2F7698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7694u;
    // 0x2f7698: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC880u, 0x2F7694u, 0x2F769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F769Cu;
label_2f769c:
    // 0x2f769c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2f769cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f76a0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2f76a0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_2f76a4:
    // 0x2f76a4: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F76A4u;
    {
        const bool branch_taken_0x2f76a4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2f76a4) {
            ctx->pc = 0x2F76C8u;
            goto label_2f76c8;
        }
    }
    ctx->pc = 0x2F76ACu;
    // 0x2f76ac: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2f76acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2f76b0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F76B0u;
    {
        const bool branch_taken_0x2f76b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f76b0) {
            ctx->pc = 0x2F76B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F76B0u;
            // 0x2f76b4: 0xae350020  sw          $s5, 0x20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F76B8u;
            goto label_2f76b8;
        }
    }
    ctx->pc = 0x2F76B8u;
label_2f76b8:
    // 0x2f76b8: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x2F76B8u;
    SET_GPR_U32(ctx, 31, 0x2F76C0u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x2F76B8u, 0x2F76C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F76C0u;
label_2f76c0:
    // 0x2f76c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f76c4: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x2f76c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_2f76c8:
    // 0x2f76c8: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F76C8u;
    {
        const bool branch_taken_0x2f76c8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76C8u;
        // 0x2f76cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76c8) {
            ctx->pc = 0x2F76ECu;
            goto label_2f76ec;
        }
    }
    ctx->pc = 0x2F76D0u;
    // 0x2f76d0: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F76D0u;
    {
        const bool branch_taken_0x2f76d0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2F76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76D0u;
        // 0x2f76d4: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76d0) {
            ctx->pc = 0x2F76E0u;
            goto label_2f76e0;
        }
    }
    ctx->pc = 0x2F76D8u;
    // 0x2f76d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F76D8u;
    {
        const bool branch_taken_0x2f76d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76D8u;
        // 0x2f76dc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76d8) {
            ctx->pc = 0x2F76F0u;
            goto label_2f76f0;
        }
    }
    ctx->pc = 0x2F76E0u;
label_2f76e0:
    // 0x2f76e0: 0x1e40ffe1  bgtz        $s2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2F76E0u;
    {
        const bool branch_taken_0x2f76e0 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x2F76E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76E0u;
        // 0x2f76e4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76e0) {
            ctx->pc = 0x2F7668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7668;
        }
    }
    ctx->pc = 0x2F76E8u;
label_2f76e8:
    // 0x2f76e8: 0x2921023  subu        $v0, $s4, $s2
    ctx->pc = 0x2f76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2f76ec:
    // 0x2f76ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f76ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f76f0:
    // 0x2f76f0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f76f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f76f4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f76f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f76f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f76f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f76fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f76fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7700: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f7700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7704: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f7704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f770c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F770Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F770Cu;
        // 0x2f7710: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F770Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7714u;
    // 0x2f7714: 0x0  nop
    ctx->pc = 0x2f7714u;
    // NOP
    // 0x2f7718: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f7718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f771c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f771cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f7720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7724: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f7724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f7728: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f7728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f772c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7730: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f7730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f7734: 0xc0bf146  jal         func_2FC518
    ctx->pc = 0x2F7734u;
    SET_GPR_U32(ctx, 31, 0x2F773Cu);
    ctx->pc = 0x2F7738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7734u;
    // 0x2f7738: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC518u, 0x2F7734u, 0x2F773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F773Cu;
label_2f773c:
    // 0x2f773c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f773cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7740:
    // 0x2f7740: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2F7740u;
    SET_GPR_U32(ctx, 31, 0x2F7748u);
    ctx->pc = 0x2F7744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7740u;
    // 0x2f7744: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2F7740u, 0x2F7748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7748u;
label_2f7748:
    // 0x2f7748: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7748u;
    {
        const bool branch_taken_0x2f7748 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7748u;
        // 0x2f774c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7748) {
            ctx->pc = 0x2F7764u;
            goto label_2f7764;
        }
    }
    ctx->pc = 0x2F7750u;
    // 0x2f7750: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x2f7750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2f7754: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x2f7754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    // 0x2f7758: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2f7758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2f775c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F775Cu;
    {
        const bool branch_taken_0x2f775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F775Cu;
        // 0x2f7760: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f775c) {
            ctx->pc = 0x2F777Cu;
            goto label_2f777c;
        }
    }
    ctx->pc = 0x2F7764u;
label_2f7764:
    // 0x2f7764: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x2f7764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2f7768: 0x8e050140  lw          $a1, 0x140($s0)
    ctx->pc = 0x2f7768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2f776c: 0x8e060144  lw          $a2, 0x144($s0)
    ctx->pc = 0x2f776cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x2f7770: 0xc0bdd4e  jal         func_2F7538
    ctx->pc = 0x2F7770u;
    SET_GPR_U32(ctx, 31, 0x2F7778u);
    ctx->pc = 0x2F7774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7770u;
    // 0x2f7774: 0x30e70001  andi        $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7538u, 0x2F7770u, 0x2F7778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7778u;
label_2f7778:
    // 0x2f7778: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x2f7778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_2f777c:
    // 0x2f777c: 0x8e04014c  lw          $a0, 0x14C($s0)
    ctx->pc = 0x2f777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x2f7780: 0x50920004  beql        $a0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7780u;
    {
        const bool branch_taken_0x2f7780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x2f7780) {
            ctx->pc = 0x2F7784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7780u;
            // 0x2f7784: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7794u;
            goto label_2f7794;
        }
    }
    ctx->pc = 0x2F7788u;
    // 0x2f7788: 0xc04636c  jal         func_118DB0
    ctx->pc = 0x2F7788u;
    SET_GPR_U32(ctx, 31, 0x2F7790u);
    ctx->pc = 0x118DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DB0u, 0x2F7788u, 0x2F7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7790u;
label_2f7790:
    // 0x2f7790: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x2f7790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_2f7794:
    // 0x2f7794: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f7794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7798: 0x8e040154  lw          $a0, 0x154($s0)
    ctx->pc = 0x2f7798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x2f779c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2f77a0: 0xc043334  jal         func_10CCD0
    ctx->pc = 0x2F77A0u;
    SET_GPR_U32(ctx, 31, 0x2F77A8u);
    ctx->pc = 0x2F77A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77A0u;
    // 0x2f77a4: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCD0u, 0x2F77A0u, 0x2F77A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77A8u;
label_2f77a8:
    // 0x2f77a8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2f77a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f77ac: 0x1860ffe4  blez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2F77ACu;
    {
        const bool branch_taken_0x2f77ac = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2f77ac) {
            ctx->pc = 0x2F7740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7740;
        }
    }
    ctx->pc = 0x2F77B4u;
    // 0x2f77b4: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2F77B4u;
    SET_GPR_U32(ctx, 31, 0x2F77BCu);
    ctx->pc = 0x2F77B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77B4u;
    // 0x2f77b8: 0x8e040154  lw          $a0, 0x154($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2F77B4u, 0x2F77BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77BCu;
label_2f77bc:
    // 0x2f77bc: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x2F77BCu;
    {
        const bool branch_taken_0x2f77bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f77bc) {
            ctx->pc = 0x2F7740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7740;
        }
    }
    ctx->pc = 0x2F77C4u;
    // 0x2f77c4: 0x0  nop
    ctx->pc = 0x2f77c4u;
    // NOP
    // 0x2f77c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f77c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f77cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f77ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f77d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f77d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f77d4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f77d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f77d8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f77d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f77dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f77dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f77e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f77e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f77e4: 0xc0bf146  jal         func_2FC518
    ctx->pc = 0x2F77E4u;
    SET_GPR_U32(ctx, 31, 0x2F77ECu);
    ctx->pc = 0x2F77E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77E4u;
    // 0x2f77e8: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC518u, 0x2F77E4u, 0x2F77ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77ECu;
label_2f77ec:
    // 0x2f77ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f77ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f77f0:
    // 0x2f77f0: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2F77F0u;
    SET_GPR_U32(ctx, 31, 0x2F77F8u);
    ctx->pc = 0x2F77F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77F0u;
    // 0x2f77f4: 0x8e040158  lw          $a0, 0x158($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2F77F0u, 0x2F77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77F8u;
label_2f77f8:
    // 0x2f77f8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F77F8u;
    {
        const bool branch_taken_0x2f77f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77F8u;
        // 0x2f77fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77f8) {
            ctx->pc = 0x2F7814u;
            goto label_2f7814;
        }
    }
    ctx->pc = 0x2F7800u;
    // 0x2f7800: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x2f7800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2f7804: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x2f7804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    // 0x2f7808: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2f7808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2f780c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F780Cu;
    {
        const bool branch_taken_0x2f780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F780Cu;
        // 0x2f7810: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f780c) {
            ctx->pc = 0x2F782Cu;
            goto label_2f782c;
        }
    }
    ctx->pc = 0x2F7814u;
label_2f7814:
    // 0x2f7814: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x2f7814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2f7818: 0x8e050140  lw          $a1, 0x140($s0)
    ctx->pc = 0x2f7818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2f781c: 0x8e060144  lw          $a2, 0x144($s0)
    ctx->pc = 0x2f781cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x2f7820: 0xc0bdd8a  jal         func_2F7628
    ctx->pc = 0x2F7820u;
    SET_GPR_U32(ctx, 31, 0x2F7828u);
    ctx->pc = 0x2F7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7820u;
    // 0x2f7824: 0x30e70001  andi        $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7628u;
    goto label_2f7628;
    ctx->pc = 0x2F7828u;
label_2f7828:
    // 0x2f7828: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x2f7828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_2f782c:
    // 0x2f782c: 0x8e04014c  lw          $a0, 0x14C($s0)
    ctx->pc = 0x2f782cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x2f7830: 0x50920004  beql        $a0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7830u;
    {
        const bool branch_taken_0x2f7830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x2f7830) {
            ctx->pc = 0x2F7834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7830u;
            // 0x2f7834: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7844u;
            goto label_2f7844;
        }
    }
    ctx->pc = 0x2F7838u;
    // 0x2f7838: 0xc04636c  jal         func_118DB0
    ctx->pc = 0x2F7838u;
    SET_GPR_U32(ctx, 31, 0x2F7840u);
    ctx->pc = 0x118DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DB0u, 0x2F7838u, 0x2F7840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7840u;
label_2f7840:
    // 0x2f7840: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x2f7840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_2f7844:
    // 0x2f7844: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f7844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7848: 0x8e04015c  lw          $a0, 0x15C($s0)
    ctx->pc = 0x2f7848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x2f784c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2f7850: 0xc043334  jal         func_10CCD0
    ctx->pc = 0x2F7850u;
    SET_GPR_U32(ctx, 31, 0x2F7858u);
    ctx->pc = 0x2F7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7850u;
    // 0x2f7854: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCD0u, 0x2F7850u, 0x2F7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7858u;
label_2f7858:
    // 0x2f7858: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2f7858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f785c: 0x1860ffe4  blez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2F785Cu;
    {
        const bool branch_taken_0x2f785c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2f785c) {
            ctx->pc = 0x2F77F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f77f0;
        }
    }
    ctx->pc = 0x2F7864u;
    // 0x2f7864: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2F7864u;
    SET_GPR_U32(ctx, 31, 0x2F786Cu);
    ctx->pc = 0x2F7868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7864u;
    // 0x2f7868: 0x8e04015c  lw          $a0, 0x15C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2F7864u, 0x2F786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F786Cu;
label_2f786c:
    // 0x2f786c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x2F786Cu;
    {
        const bool branch_taken_0x2f786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f786c) {
            ctx->pc = 0x2F77F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f77f0;
        }
    }
    ctx->pc = 0x2F7874u;
    // 0x2f7874: 0x0  nop
    ctx->pc = 0x2f7874u;
    // NOP
    // 0x2f7878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f7878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f787c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2f787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7880: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2f7880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2f7884: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x2f7884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2f7888: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f7888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f788c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f7890: 0xc04624e  jal         func_118938
    ctx->pc = 0x2F7890u;
    SET_GPR_U32(ctx, 31, 0x2F7898u);
    ctx->pc = 0x2F7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7890u;
    // 0x2f7894: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118938u, 0x2F7890u, 0x2F7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7898u;
label_2f7898:
    // 0x2f7898: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2f7898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f789c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f789cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f78a0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2f78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2f78a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f78a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78a8: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x2f78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2f78ac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2f78acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f78b0: 0x8e040154  lw          $a0, 0x154($s0)
    ctx->pc = 0x2f78b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x2f78b4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2f78b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2f78b8: 0xae07014c  sw          $a3, 0x14C($s0)
    ctx->pc = 0x2f78b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 7));
    // 0x2f78bc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2f78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2f78c0: 0xc043338  jal         func_10CCE0
    ctx->pc = 0x2F78C0u;
    SET_GPR_U32(ctx, 31, 0x2F78C8u);
    ctx->pc = 0x2F78C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F78C0u;
    // 0x2f78c4: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCE0u, 0x2F78C0u, 0x2F78C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78C8u;
label_2f78c8:
    // 0x2f78c8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2f78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f78cc: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F78CCu;
    {
        const bool branch_taken_0x2f78cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78CCu;
        // 0x2f78d0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78cc) {
            ctx->pc = 0x2F78E0u;
            goto label_2f78e0;
        }
    }
    ctx->pc = 0x2F78D4u;
    // 0x2f78d4: 0xc043324  jal         func_10CC90
    ctx->pc = 0x2F78D4u;
    SET_GPR_U32(ctx, 31, 0x2F78DCu);
    ctx->pc = 0x2F78D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F78D4u;
    // 0x2f78d8: 0x8e040154  lw          $a0, 0x154($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x2F78D4u, 0x2F78DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78DCu;
label_2f78dc:
    // 0x2f78dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f78dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f78e0:
    // 0x2f78e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f78e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78e4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2f78e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f78e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F78E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78E8u;
        // 0x2f78ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F78E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F78F0u;
    // 0x2f78f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f78f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f78f4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2f78f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78f8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2f78f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2f78fc: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x2f78fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2f7900: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f7900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7904: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f7904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f7908: 0xc04624e  jal         func_118938
    ctx->pc = 0x2F7908u;
    SET_GPR_U32(ctx, 31, 0x2F7910u);
    ctx->pc = 0x2F790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7908u;
    // 0x2f790c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118938u, 0x2F7908u, 0x2F7910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7910u;
label_2f7910:
    // 0x2f7910: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2f7910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7914: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f7914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7918: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2f7918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2f791c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7920: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x2f7920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2f7924: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2f7924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f7928: 0x8e04015c  lw          $a0, 0x15C($s0)
    ctx->pc = 0x2f7928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x2f792c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2f792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2f7930: 0xae07014c  sw          $a3, 0x14C($s0)
    ctx->pc = 0x2f7930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 7));
    // 0x2f7934: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2f7934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2f7938: 0xc043338  jal         func_10CCE0
    ctx->pc = 0x2F7938u;
    SET_GPR_U32(ctx, 31, 0x2F7940u);
    ctx->pc = 0x2F793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7938u;
    // 0x2f793c: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCE0u, 0x2F7938u, 0x2F7940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7940u;
label_2f7940:
    // 0x2f7940: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2f7940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f7944: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7944u;
    {
        const bool branch_taken_0x2f7944 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7944u;
        // 0x2f7948: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7944) {
            ctx->pc = 0x2F7958u;
            goto label_2f7958;
        }
    }
    ctx->pc = 0x2F794Cu;
    // 0x2f794c: 0xc043324  jal         func_10CC90
    ctx->pc = 0x2F794Cu;
    SET_GPR_U32(ctx, 31, 0x2F7954u);
    ctx->pc = 0x2F7950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F794Cu;
    // 0x2f7950: 0x8e04015c  lw          $a0, 0x15C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x2F794Cu, 0x2F7954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7954u;
label_2f7954:
    // 0x2f7954: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f7954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f7958:
    // 0x2f7958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f795c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2f795cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7960: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7960u;
        // 0x2f7964: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7968u;
}
