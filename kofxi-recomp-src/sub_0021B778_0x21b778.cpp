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

// Function: sub_0021B778
// Address: 0x21b778 - 0x21baa0
void sub_0021B778_0x21b778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B778_0x21b778");
#endif

    switch (ctx->pc) {
        case 0x21b794u: goto label_21b794;
        case 0x21b7a4u: goto label_21b7a4;
        case 0x21b824u: goto label_21b824;
        case 0x21b83cu: goto label_21b83c;
        case 0x21b878u: goto label_21b878;
        case 0x21b888u: goto label_21b888;
        case 0x21b8c8u: goto label_21b8c8;
        case 0x21b8d8u: goto label_21b8d8;
        case 0x21b924u: goto label_21b924;
        case 0x21b960u: goto label_21b960;
        case 0x21b9f4u: goto label_21b9f4;
        case 0x21ba0cu: goto label_21ba0c;
        case 0x21ba38u: goto label_21ba38;
        case 0x21ba44u: goto label_21ba44;
        case 0x21ba6cu: goto label_21ba6c;
        case 0x21ba74u: goto label_21ba74;
        default: break;
    }

    ctx->pc = 0x21b778u;

label_21b778:
    // 0x21b778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b77c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b780: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21b784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b788: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b78c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21B78Cu;
    SET_GPR_U32(ctx, 31, 0x21B794u);
    ctx->pc = 0x21B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B78Cu;
    // 0x21b790: 0x248415e0  addiu       $a0, $a0, 0x15E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21B78Cu, 0x21B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B794u;
label_21b794:
    // 0x21b794: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21b794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b798: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b79c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21B79Cu;
    SET_GPR_U32(ctx, 31, 0x21B7A4u);
    ctx->pc = 0x21B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B79Cu;
    // 0x21b7a0: 0x24841120  addiu       $a0, $a0, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21B79Cu, 0x21B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7A4u;
label_21b7a4:
    // 0x21b7a4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21b7a8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b7ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21b7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b7b0: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x21b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21b7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b7b8: 0x8043e52  j           func_10F948
    ctx->pc = 0x21B7B8u;
    ctx->pc = 0x21B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B7B8u;
    // 0x21b7bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21B7C0u;
    // 0x21b7c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21b7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21b7c4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21b7c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21b7c8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21b7cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21b7d0: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21b7d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21b7d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21b7d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21b7dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21b7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21b7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21b7e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21b7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7e8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21b7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x21b7ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21b7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7f0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21b7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21b7f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b7f8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x21b7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x21b7fc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21b7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b800: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x21b800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x21b804: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21b804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b808: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x21b808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x21b80c: 0xae80ab58  sw          $zero, -0x54A8($s4)
    ctx->pc = 0x21b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945624), GPR_U32(ctx, 0));
    // 0x21b810: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x21b810u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21b814: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21b814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21b818: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x21b818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x21b81c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21B81Cu;
    SET_GPR_U32(ctx, 31, 0x21B824u);
    ctx->pc = 0x21B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B81Cu;
    // 0x21b820: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21B81Cu, 0x21B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B824u;
label_21b824:
    // 0x21b824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b82c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b830: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21b830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b834: 0xc084520  jal         func_211480
    ctx->pc = 0x21B834u;
    SET_GPR_U32(ctx, 31, 0x21B83Cu);
    ctx->pc = 0x21B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B834u;
    // 0x21b838: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211480u, 0x21B834u, 0x21B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B83Cu;
label_21b83c:
    // 0x21b83c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21b83cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b840: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x21b840u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x21b844: 0x11e00047  beqz        $t7, . + 4 + (0x47 << 2)
    ctx->pc = 0x21B844u;
    {
        const bool branch_taken_0x21b844 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B844u;
        // 0x21b848: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b844) {
            ctx->pc = 0x21B964u;
            goto label_21b964;
        }
    }
    ctx->pc = 0x21B84Cu;
    // 0x21b84c: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B84Cu;
    {
        const bool branch_taken_0x21b84c = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21b84c) {
            ctx->pc = 0x21B85Cu;
            goto label_21b85c;
        }
    }
    ctx->pc = 0x21B854u;
    // 0x21b854: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x21b854u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21b858: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21b858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21b85c:
    // 0x21b85c: 0x19c0002c  blez        $t6, . + 4 + (0x2C << 2)
    ctx->pc = 0x21B85Cu;
    {
        const bool branch_taken_0x21b85c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B85Cu;
        // 0x21b860: 0x29cf0032  slti        $t7, $t6, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b85c) {
            ctx->pc = 0x21B910u;
            goto label_21b910;
        }
    }
    ctx->pc = 0x21B864u;
    // 0x21b864: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x21b864u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b868: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x21b868u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21b86c: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21b86cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21b870: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x21b870u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b874: 0xae80ab60  sw          $zero, -0x54A0($s4)
    ctx->pc = 0x21b874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
label_21b878:
    // 0x21b878: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b87c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b880: 0xc084d20  jal         func_213480
    ctx->pc = 0x21B880u;
    SET_GPR_U32(ctx, 31, 0x21B888u);
    ctx->pc = 0x21B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B880u;
    // 0x21b884: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213480u, 0x21B880u, 0x21B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B888u;
label_21b888:
    // 0x21b888: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x21B888u;
    {
        const bool branch_taken_0x21b888 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B888u;
        // 0x21b88c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b888) {
            ctx->pc = 0x21B964u;
            goto label_21b964;
        }
    }
    ctx->pc = 0x21B890u;
    // 0x21b890: 0x8e8fab60  lw          $t7, -0x54A0($s4)
    ctx->pc = 0x21b890u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945632)));
    // 0x21b894: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x21B894u;
    {
        const bool branch_taken_0x21b894 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B894u;
        // 0x21b898: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b894) {
            ctx->pc = 0x21B8FCu;
            goto label_21b8fc;
        }
    }
    ctx->pc = 0x21B89Cu;
    // 0x21b89c: 0x8ecdab58  lw          $t5, -0x54A8($s6)
    ctx->pc = 0x21b89cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
    // 0x21b8a0: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x21b8a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x21b8a4: 0x11e0003c  beqz        $t7, . + 4 + (0x3C << 2)
    ctx->pc = 0x21B8A4u;
    {
        const bool branch_taken_0x21b8a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8A4u;
        // 0x21b8a8: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8a4) {
            ctx->pc = 0x21B998u;
            goto label_21b998;
        }
    }
    ctx->pc = 0x21B8ACu;
    // 0x21b8ac: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x21b8acu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21b8b0: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x21b8b0u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x21b8b4: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x21b8b4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x21b8b8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x21b8b8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x21b8bc: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x21b8bcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x21b8c0: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x21b8c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b8c4: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x21b8c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_21b8c8:
    // 0x21b8c8: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21b8c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21b8cc: 0x51de000a  beql        $t6, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x21B8CCu;
    {
        const bool branch_taken_0x21b8cc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 30));
        if (branch_taken_0x21b8cc) {
            ctx->pc = 0x21B8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B8CCu;
            // 0x21b8d0: 0xaee0ab58  sw          $zero, -0x54A8($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B8F8u;
            goto label_21b8f8;
        }
    }
    ctx->pc = 0x21B8D4u;
    // 0x21b8d4: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x21b8d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21b8d8:
    // 0x21b8d8: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21b8d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b8dc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21b8dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21b8e0: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x21b8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b8e4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21b8e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x21b8e8: 0x0  nop
    ctx->pc = 0x21b8e8u;
    // NOP
    // 0x21b8ec: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B8ECu;
    {
        const bool branch_taken_0x21b8ec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x21B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8ECu;
        // 0x21b8f0: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8ec) {
            ctx->pc = 0x21B8D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b8d8;
        }
    }
    ctx->pc = 0x21B8F4u;
    // 0x21b8f4: 0xaee0ab58  sw          $zero, -0x54A8($s7)
    ctx->pc = 0x21b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
label_21b8f8:
    // 0x21b8f8: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21b8f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21b8fc:
    // 0x21b8fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21b8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b900: 0x22e782a  slt         $t7, $s1, $t6
    ctx->pc = 0x21b900u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x21b904: 0x55e0ffdc  bnel        $t7, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x21B904u;
    {
        const bool branch_taken_0x21b904 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b904) {
            ctx->pc = 0x21B908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B904u;
            // 0x21b908: 0xae80ab60  sw          $zero, -0x54A0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b878;
        }
    }
    ctx->pc = 0x21B90Cu;
    // 0x21b90c: 0x29cf0032  slti        $t7, $t6, 0x32
    ctx->pc = 0x21b90cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
label_21b910:
    // 0x21b910: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x21B910u;
    {
        const bool branch_taken_0x21b910 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B910u;
        // 0x21b914: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b910) {
            ctx->pc = 0x21B948u;
            goto label_21b948;
        }
    }
    ctx->pc = 0x21B918u;
    // 0x21b918: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x21b918u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x21b91c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x21b91cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b920: 0x8d8eab58  lw          $t6, -0x54A8($t4)
    ctx->pc = 0x21b920u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945624)));
label_21b924:
    // 0x21b924: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21b924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b928: 0x25ad0298  addiu       $t5, $t5, 0x298
    ctx->pc = 0x21b928u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 664));
    // 0x21b92c: 0x2a2f0032  slti        $t7, $s1, 0x32
    ctx->pc = 0x21b92cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x21b930: 0x0  nop
    ctx->pc = 0x21b930u;
    // NOP
    // 0x21b934: 0x0  nop
    ctx->pc = 0x21b934u;
    // NOP
    // 0x21b938: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B938u;
    {
        const bool branch_taken_0x21b938 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B938u;
        // 0x21b93c: 0x25ce0298  addiu       $t6, $t6, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b938) {
            ctx->pc = 0x21B924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b924;
        }
    }
    ctx->pc = 0x21B940u;
    // 0x21b940: 0xad8eab58  sw          $t6, -0x54A8($t4)
    ctx->pc = 0x21b940u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294945624), GPR_U32(ctx, 14));
    // 0x21b944: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x21b944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_21b948:
    // 0x21b948: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x21b948u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21b94c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21b94cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21b950: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x21b950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21b954: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21b954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21b958: 0xc086dde  jal         func_21B778
    ctx->pc = 0x21B958u;
    SET_GPR_U32(ctx, 31, 0x21B960u);
    ctx->pc = 0x21B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B958u;
    // 0x21b95c: 0x2afa823  subu        $s5, $s5, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B778u;
    goto label_21b778;
    ctx->pc = 0x21B960u;
label_21b960:
    // 0x21b960: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x21b960u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21b964:
    // 0x21b964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21b964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b968: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x21b968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b96c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21b96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b970: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21b970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b974: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21b974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b978: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21b978u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b97c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21b97cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21b980: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x21b980u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b984: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x21b984u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21b988: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x21b988u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b98c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x21b98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21b990: 0x3e00008  jr          $ra
    ctx->pc = 0x21B990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B990u;
        // 0x21b994: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B998u;
label_21b998:
    // 0x21b998: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x21B998u;
    {
        const bool branch_taken_0x21b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B998u;
        // 0x21b99c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b998) {
            ctx->pc = 0x21B8C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b8c8;
        }
    }
    ctx->pc = 0x21B9A0u;
    // 0x21b9a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21b9a4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21b9a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21b9a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21b9ac: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21b9acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21b9b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21b9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21b9b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21b9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21b9b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21b9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9bc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21b9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21b9c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b9c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21b9c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21b9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9cc: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21b9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21b9d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21b9d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21b9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21b9d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21b9d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9dc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21b9e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21b9e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9e4: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21b9e8: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x21b9e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b9ec: 0xc084612  jal         func_211848
    ctx->pc = 0x21B9ECu;
    SET_GPR_U32(ctx, 31, 0x21B9F4u);
    ctx->pc = 0x21B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B9ECu;
    // 0x21b9f0: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21B9ECu, 0x21B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9F4u;
label_21b9f4:
    // 0x21b9f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21b9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ba00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ba00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba04: 0xc084654  jal         func_211950
    ctx->pc = 0x21BA04u;
    SET_GPR_U32(ctx, 31, 0x21BA0Cu);
    ctx->pc = 0x21BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA04u;
    // 0x21ba08: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211950u, 0x21BA04u, 0x21BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA0Cu;
label_21ba0c:
    // 0x21ba0c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21ba0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ba10: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x21ba10u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x21ba14: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x21BA14u;
    {
        const bool branch_taken_0x21ba14 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA14u;
        // 0x21ba18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba14) {
            ctx->pc = 0x21BA74u;
            goto label_21ba74;
        }
    }
    ctx->pc = 0x21BA1Cu;
    // 0x21ba1c: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BA1Cu;
    {
        const bool branch_taken_0x21ba1c = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21ba1c) {
            ctx->pc = 0x21BA2Cu;
            goto label_21ba2c;
        }
    }
    ctx->pc = 0x21BA24u;
    // 0x21ba24: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x21ba24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21ba28: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21ba2c:
    // 0x21ba2c: 0x19c0000c  blez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x21BA2Cu;
    {
        const bool branch_taken_0x21ba2c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA2Cu;
        // 0x21ba30: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba2c) {
            ctx->pc = 0x21BA60u;
            goto label_21ba60;
        }
    }
    ctx->pc = 0x21BA34u;
    // 0x21ba34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ba34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21ba38:
    // 0x21ba38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21ba38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba3c: 0xc084d60  jal         func_213580
    ctx->pc = 0x21BA3Cu;
    SET_GPR_U32(ctx, 31, 0x21BA44u);
    ctx->pc = 0x21BA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA3Cu;
    // 0x21ba40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213580u, 0x21BA3Cu, 0x21BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA44u;
label_21ba44:
    // 0x21ba44: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21BA44u;
    {
        const bool branch_taken_0x21ba44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA44u;
        // 0x21ba48: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba44) {
            ctx->pc = 0x21BA98u;
            goto label_21ba98;
        }
    }
    ctx->pc = 0x21BA4Cu;
    // 0x21ba4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ba4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21ba50: 0x22f782a  slt         $t7, $s1, $t7
    ctx->pc = 0x21ba50u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x21ba54: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21BA54u;
    {
        const bool branch_taken_0x21ba54 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA54u;
        // 0x21ba58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba54) {
            ctx->pc = 0x21BA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ba38;
        }
    }
    ctx->pc = 0x21BA5Cu;
    // 0x21ba5c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21ba5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21ba60:
    // 0x21ba60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21ba60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba64: 0xc086dde  jal         func_21B778
    ctx->pc = 0x21BA64u;
    SET_GPR_U32(ctx, 31, 0x21BA6Cu);
    ctx->pc = 0x21BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA64u;
    // 0x21ba68: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B778u;
    goto label_21b778;
    ctx->pc = 0x21BA6Cu;
label_21ba6c:
    // 0x21ba6c: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x21ba6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21ba70: 0x1f41023  subu        $v0, $t7, $s4
    ctx->pc = 0x21ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_21ba74:
    // 0x21ba74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21ba74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ba78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21ba78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ba7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21ba7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ba80: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21ba80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ba84: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21ba84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ba88: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21ba88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ba8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21ba8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ba90: 0x3e00008  jr          $ra
    ctx->pc = 0x21BA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA90u;
        // 0x21ba94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BA98u;
label_21ba98:
    // 0x21ba98: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x21BA98u;
    {
        const bool branch_taken_0x21ba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA98u;
        // 0x21ba9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba98) {
            ctx->pc = 0x21BA74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ba74;
        }
    }
    ctx->pc = 0x21BAA0u;
}
