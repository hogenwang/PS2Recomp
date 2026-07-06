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

// Function: sub_00266140
// Address: 0x266140 - 0x266348
void sub_00266140_0x266140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266140_0x266140");
#endif

    switch (ctx->pc) {
        case 0x266190u: goto label_266190;
        case 0x2661a4u: goto label_2661a4;
        case 0x2661b0u: goto label_2661b0;
        case 0x2661c8u: goto label_2661c8;
        case 0x2661d0u: goto label_2661d0;
        case 0x2661f4u: goto label_2661f4;
        case 0x26620cu: goto label_26620c;
        case 0x266224u: goto label_266224;
        case 0x266260u: goto label_266260;
        case 0x26627cu: goto label_26627c;
        case 0x266288u: goto label_266288;
        case 0x2662a4u: goto label_2662a4;
        case 0x2662c8u: goto label_2662c8;
        case 0x2662e0u: goto label_2662e0;
        case 0x2662f4u: goto label_2662f4;
        default: break;
    }

    ctx->pc = 0x266140u;

    // 0x266140: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x266140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x266144: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x266144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x266148: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x266148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x26614c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26614cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266150: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x266150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x266154: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x266154u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266158: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x266158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x26615c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x26615cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266160: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x266160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x266164: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x266164u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266168: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x266168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26616c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26616cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266170: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x266170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x266174: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x266174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266178: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x266178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26617c: 0x24040401  addiu       $a0, $zero, 0x401
    ctx->pc = 0x26617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x266180: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x266180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x266184: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x266184u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266188: 0xc098552  jal         func_261548
    ctx->pc = 0x266188u;
    SET_GPR_U32(ctx, 31, 0x266190u);
    ctx->pc = 0x26618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266188u;
    // 0x26618c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x266188u, 0x266190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266190u;
label_266190:
    // 0x266190: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x266190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266194: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x266194u;
    {
        const bool branch_taken_0x266194 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x266194) {
            ctx->pc = 0x2661C0u;
            goto label_2661c0;
        }
    }
    ctx->pc = 0x26619Cu;
    // 0x26619c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x26619Cu;
    SET_GPR_U32(ctx, 31, 0x2661A4u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x26619Cu, 0x2661A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661A4u;
label_2661a4:
    // 0x2661a4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2661a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2661a8: 0xc097308  jal         func_25CC20
    ctx->pc = 0x2661A8u;
    SET_GPR_U32(ctx, 31, 0x2661B0u);
    ctx->pc = 0x2661ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2661A8u;
    // 0x2661ac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x2661A8u, 0x2661B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661B0u;
label_2661b0:
    // 0x2661b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2661b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2661b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2661b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2661b8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2661B8u;
    {
        const bool branch_taken_0x2661b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2661BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661B8u;
        // 0x2661bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661b8) {
            ctx->pc = 0x2662F8u;
            goto label_2662f8;
        }
    }
    ctx->pc = 0x2661C0u;
label_2661c0:
    // 0x2661c0: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x2661C0u;
    SET_GPR_U32(ctx, 31, 0x2661C8u);
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x2661C0u, 0x2661C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661C8u;
label_2661c8:
    // 0x2661c8: 0xc097242  jal         func_25C908
    ctx->pc = 0x2661C8u;
    SET_GPR_U32(ctx, 31, 0x2661D0u);
    ctx->pc = 0x2661CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2661C8u;
    // 0x2661cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C908u, 0x2661C8u, 0x2661D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661D0u;
label_2661d0:
    // 0x2661d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2661d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2661d4: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2661D4u;
    {
        const bool branch_taken_0x2661d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2661d4) {
            ctx->pc = 0x2661D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2661D4u;
            // 0x2661d8: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2661E4u;
            goto label_2661e4;
        }
    }
    ctx->pc = 0x2661DCu;
    // 0x2661dc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2661DCu;
    {
        const bool branch_taken_0x2661dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2661E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661DCu;
        // 0x2661e0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661dc) {
            ctx->pc = 0x2662E4u;
            goto label_2662e4;
        }
    }
    ctx->pc = 0x2661E4u;
label_2661e4:
    // 0x2661e4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2661E4u;
    {
        const bool branch_taken_0x2661e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2661e4) {
            ctx->pc = 0x266214u;
            goto label_266214;
        }
    }
    ctx->pc = 0x2661ECu;
    // 0x2661ec: 0xc099642  jal         func_265908
    ctx->pc = 0x2661ECu;
    SET_GPR_U32(ctx, 31, 0x2661F4u);
    ctx->pc = 0x265908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265908u, 0x2661ECu, 0x2661F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661F4u;
label_2661f4:
    // 0x2661f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2661f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2661f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2661f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2661fc: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2661FCu;
    {
        const bool branch_taken_0x2661fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2661fc) {
            ctx->pc = 0x266214u;
            goto label_266214;
        }
    }
    ctx->pc = 0x266204u;
    // 0x266204: 0xc097308  jal         func_25CC20
    ctx->pc = 0x266204u;
    SET_GPR_U32(ctx, 31, 0x26620Cu);
    ctx->pc = 0x266208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266204u;
    // 0x266208: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x266204u, 0x26620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26620Cu;
label_26620c:
    // 0x26620c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x26620Cu;
    {
        const bool branch_taken_0x26620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26620Cu;
        // 0x266210: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26620c) {
            ctx->pc = 0x2662E4u;
            goto label_2662e4;
        }
    }
    ctx->pc = 0x266214u;
label_266214:
    // 0x266214: 0x16400017  bnez        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x266214u;
    {
        const bool branch_taken_0x266214 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x266214) {
            ctx->pc = 0x266274u;
            goto label_266274;
        }
    }
    ctx->pc = 0x26621Cu;
    // 0x26621c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26621Cu;
    SET_GPR_U32(ctx, 31, 0x266224u);
    ctx->pc = 0x266220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26621Cu;
    // 0x266220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26621Cu, 0x266224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266224u;
label_266224:
    // 0x266224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266228: 0x2e020401  sltiu       $v0, $s0, 0x401
    ctx->pc = 0x266228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x26622c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x26622Cu;
    {
        const bool branch_taken_0x26622c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26622c) {
            ctx->pc = 0x26629Cu;
            goto label_26629c;
        }
    }
    ctx->pc = 0x266234u;
    // 0x266234: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x266234u;
    {
        const bool branch_taken_0x266234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x266238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266234u;
        // 0x266238: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266234) {
            ctx->pc = 0x26626Cu;
            goto label_26626c;
        }
    }
    ctx->pc = 0x26623Cu;
    // 0x26623c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x26623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x266240: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x266240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x266244: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x266244u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266248: 0x5482001f  bnel        $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x266248u;
    {
        const bool branch_taken_0x266248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x266248) {
            ctx->pc = 0x26624Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266248u;
            // 0x26624c: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2662C8u;
            goto label_2662c8;
        }
    }
    ctx->pc = 0x266250u;
    // 0x266250: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x266250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266258: 0xc04a966  jal         func_12A598
    ctx->pc = 0x266258u;
    SET_GPR_U32(ctx, 31, 0x266260u);
    ctx->pc = 0x26625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266258u;
    // 0x26625c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x266258u, 0x266260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266260u;
label_266260:
    // 0x266260: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x266260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x266264: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x266264u;
    {
        const bool branch_taken_0x266264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266264u;
        // 0x266268: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266264) {
            ctx->pc = 0x2662C8u;
            goto label_2662c8;
        }
    }
    ctx->pc = 0x26626Cu;
label_26626c:
    // 0x26626c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26626Cu;
    {
        const bool branch_taken_0x26626c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26626Cu;
        // 0x266270: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26626c) {
            ctx->pc = 0x2662C8u;
            goto label_2662c8;
        }
    }
    ctx->pc = 0x266274u;
label_266274:
    // 0x266274: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x266274u;
    SET_GPR_U32(ctx, 31, 0x26627Cu);
    ctx->pc = 0x266278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266274u;
    // 0x266278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x266274u, 0x26627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26627Cu;
label_26627c:
    // 0x26627c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26627cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266280: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x266280u;
    SET_GPR_U32(ctx, 31, 0x266288u);
    ctx->pc = 0x266284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266280u;
    // 0x266284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x266280u, 0x266288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266288u;
label_266288:
    // 0x266288: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x266288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26628c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x266290: 0x2c420401  sltiu       $v0, $v0, 0x401
    ctx->pc = 0x266290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x266294: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266294u;
    {
        const bool branch_taken_0x266294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266294u;
        // 0x266298: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266294) {
            ctx->pc = 0x2662B0u;
            goto label_2662b0;
        }
    }
    ctx->pc = 0x26629Cu;
label_26629c:
    // 0x26629c: 0xc097308  jal         func_25CC20
    ctx->pc = 0x26629Cu;
    SET_GPR_U32(ctx, 31, 0x2662A4u);
    ctx->pc = 0x2662A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26629Cu;
    // 0x2662a0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x26629Cu, 0x2662A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662A4u;
label_2662a4:
    // 0x2662a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2662a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2662a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2662A8u;
    {
        const bool branch_taken_0x2662a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662A8u;
        // 0x2662ac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662a8) {
            ctx->pc = 0x2662E4u;
            goto label_2662e4;
        }
    }
    ctx->pc = 0x2662B0u;
label_2662b0:
    // 0x2662b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2662b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662b4: 0x24c67808  addiu       $a2, $a2, 0x7808
    ctx->pc = 0x2662b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30728));
    // 0x2662b8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2662b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2662bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662c0: 0xc043e24  jal         func_10F890
    ctx->pc = 0x2662C0u;
    SET_GPR_U32(ctx, 31, 0x2662C8u);
    ctx->pc = 0x2662C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2662C0u;
    // 0x2662c4: 0x24050401  addiu       $a1, $zero, 0x401 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x2662C0u, 0x2662C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662C8u;
label_2662c8:
    // 0x2662c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2662c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2662ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2662d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662d4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2662d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662d8: 0xc099780  jal         func_265E00
    ctx->pc = 0x2662D8u;
    SET_GPR_U32(ctx, 31, 0x2662E0u);
    ctx->pc = 0x2662DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2662D8u;
    // 0x2662dc: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E00u, 0x2662D8u, 0x2662E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662E0u;
label_2662e0:
    // 0x2662e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2662e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2662e4:
    // 0x2662e4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2662E4u;
    {
        const bool branch_taken_0x2662e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662E4u;
        // 0x2662e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662e4) {
            ctx->pc = 0x2662F8u;
            goto label_2662f8;
        }
    }
    ctx->pc = 0x2662ECu;
    // 0x2662ec: 0xc098560  jal         func_261580
    ctx->pc = 0x2662ECu;
    SET_GPR_U32(ctx, 31, 0x2662F4u);
    ctx->pc = 0x2662F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2662ECu;
    // 0x2662f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2662ECu, 0x2662F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662F4u;
label_2662f4:
    // 0x2662f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2662f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2662f8:
    // 0x2662f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2662f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2662fc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2662fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x266300: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x266300u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x266304: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x266304u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266308: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x266308u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26630c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26630cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266310: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x266310u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266314: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x266314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266318: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x266318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26631c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26631cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266320: 0x3e00008  jr          $ra
    ctx->pc = 0x266320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266320u;
        // 0x266324: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266328u;
    // 0x266328: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x266328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x26632c: 0x3e00008  jr          $ra
    ctx->pc = 0x26632Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26632Cu;
        // 0x266330: 0xac441a38  sw          $a0, 0x1A38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6712), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26632Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266334u;
    // 0x266334: 0x0  nop
    ctx->pc = 0x266334u;
    // NOP
    // 0x266338: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x266338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x26633c: 0x3e00008  jr          $ra
    ctx->pc = 0x26633Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26633Cu;
        // 0x266340: 0xac441a3c  sw          $a0, 0x1A3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6716), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26633Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266344u;
    // 0x266344: 0x0  nop
    ctx->pc = 0x266344u;
    // NOP
}
