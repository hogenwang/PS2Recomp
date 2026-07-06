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

// Function: sub_00280650
// Address: 0x280650 - 0x2808b0
void sub_00280650_0x280650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280650_0x280650");
#endif

    switch (ctx->pc) {
        case 0x280694u: goto label_280694;
        case 0x2806e8u: goto label_2806e8;
        case 0x280718u: goto label_280718;
        case 0x280758u: goto label_280758;
        case 0x2807b0u: goto label_2807b0;
        case 0x2807f0u: goto label_2807f0;
        case 0x280870u: goto label_280870;
        case 0x28088cu: goto label_28088c;
        default: break;
    }

    ctx->pc = 0x280650u;

    // 0x280650: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x280650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x280654: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x280654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x280658: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x280658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x28065c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28065cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280660: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x280660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x280664: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x280664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280668: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x280668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x28066c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28066cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280670: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x280670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x280674: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x280674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280678: 0x10e00085  beqz        $a3, . + 4 + (0x85 << 2)
    ctx->pc = 0x280678u;
    {
        const bool branch_taken_0x280678 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x28067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280678u;
        // 0x28067c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280678) {
            ctx->pc = 0x280890u;
            goto label_280890;
        }
    }
    ctx->pc = 0x280680u;
    // 0x280680: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x280680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x280684: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280684u;
    {
        const bool branch_taken_0x280684 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x280684) {
            ctx->pc = 0x280688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280684u;
            // 0x280688: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28069Cu;
            goto label_28069c;
        }
    }
    ctx->pc = 0x28068Cu;
    // 0x28068c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x28068Cu;
    SET_GPR_U32(ctx, 31, 0x280694u);
    ctx->pc = 0x280690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28068Cu;
    // 0x280690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x28068Cu, 0x280694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280694u;
label_280694:
    // 0x280694: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x280694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280698: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x280698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28069c:
    // 0x28069c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28069cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2806a0: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x2806a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2806a4: 0x2503ffd0  addiu       $v1, $t0, -0x30
    ctx->pc = 0x2806a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
    // 0x2806a8: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x2806a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2806ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2806ACu;
    {
        const bool branch_taken_0x2806ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2806B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806ACu;
        // 0x2806b0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806ac) {
            ctx->pc = 0x2806C4u;
            goto label_2806c4;
        }
    }
    ctx->pc = 0x2806B4u;
    // 0x2806b4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2806b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2806b8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2806b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2806bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2806BCu;
    {
        const bool branch_taken_0x2806bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806BCu;
        // 0x2806c0: 0x24060077  addiu       $a2, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806bc) {
            ctx->pc = 0x2806DCu;
            goto label_2806dc;
        }
    }
    ctx->pc = 0x2806C4u;
label_2806c4:
    // 0x2806c4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2806c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2806c8: 0x1ce00009  bgtz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2806C8u;
    {
        const bool branch_taken_0x2806c8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2806CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806C8u;
        // 0x2806cc: 0x621018  mult        $v0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806c8) {
            ctx->pc = 0x2806F0u;
            goto label_2806f0;
        }
    }
    ctx->pc = 0x2806D0u;
    // 0x2806d0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2806d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2806d4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2806d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2806d8: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x2806d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2806dc:
    // 0x2806dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2806dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2806e0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2806E0u;
    SET_GPR_U32(ctx, 31, 0x2806E8u);
    ctx->pc = 0x2806E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2806E0u;
    // 0x2806e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2806E0u, 0x2806E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806E8u;
label_2806e8:
    // 0x2806e8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2806E8u;
    {
        const bool branch_taken_0x2806e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806E8u;
        // 0x2806ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806e8) {
            ctx->pc = 0x280890u;
            goto label_280890;
        }
    }
    ctx->pc = 0x2806F0u;
label_2806f0:
    // 0x2806f0: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x2806f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2806f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2806f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2806f8: 0x18e0004e  blez        $a3, . + 4 + (0x4E << 2)
    ctx->pc = 0x2806F8u;
    {
        const bool branch_taken_0x2806f8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2806FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806F8u;
        // 0x2806fc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806f8) {
            ctx->pc = 0x280834u;
            goto label_280834;
        }
    }
    ctx->pc = 0x280700u;
    // 0x280700: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x280700u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280704: 0x240b002e  addiu       $t3, $zero, 0x2E
    ctx->pc = 0x280704u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x280708: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x280708u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28070c: 0x284d0002  slti        $t5, $v0, 0x2
    ctx->pc = 0x28070cu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x280710: 0x240cff80  addiu       $t4, $zero, -0x80
    ctx->pc = 0x280710u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x280714: 0x0  nop
    ctx->pc = 0x280714u;
    // NOP
label_280718:
    // 0x280718: 0x110b0003  beq         $t0, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x280718u;
    {
        const bool branch_taken_0x280718 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        if (branch_taken_0x280718) {
            ctx->pc = 0x280728u;
            goto label_280728;
        }
    }
    ctx->pc = 0x280720u;
    // 0x280720: 0x150a0055  bne         $t0, $t2, . + 4 + (0x55 << 2)
    ctx->pc = 0x280720u;
    {
        const bool branch_taken_0x280720 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x280724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280720u;
        // 0x280724: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280720) {
            ctx->pc = 0x280878u;
            goto label_280878;
        }
    }
    ctx->pc = 0x280728u;
label_280728:
    // 0x280728: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x280728u;
    {
        const bool branch_taken_0x280728 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x28072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280728u;
        // 0x28072c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280728) {
            ctx->pc = 0x28078Cu;
            goto label_28078c;
        }
    }
    ctx->pc = 0x280730u;
    // 0x280730: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x280730u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x280734: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x280734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x280738: 0x110a0014  beq         $t0, $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x280738u;
    {
        const bool branch_taken_0x280738 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x28073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280738u;
        // 0x28073c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280738) {
            ctx->pc = 0x28078Cu;
            goto label_28078c;
        }
    }
    ctx->pc = 0x280740u;
    // 0x280740: 0x110b0012  beq         $t0, $t3, . + 4 + (0x12 << 2)
    ctx->pc = 0x280740u;
    {
        const bool branch_taken_0x280740 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        if (branch_taken_0x280740) {
            ctx->pc = 0x28078Cu;
            goto label_28078c;
        }
    }
    ctx->pc = 0x280748u;
    // 0x280748: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x280748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28074c: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x28074cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x280750: 0x2503ffd0  addiu       $v1, $t0, -0x30
    ctx->pc = 0x280750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
    // 0x280754: 0x0  nop
    ctx->pc = 0x280754u;
    // NOP
label_280758:
    // 0x280758: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x280758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28075c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x28075Cu;
    {
        const bool branch_taken_0x28075c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28075Cu;
        // 0x280760: 0x410b8  dsll        $v0, $a0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28075c) {
            ctx->pc = 0x28083Cu;
            goto label_28083c;
        }
    }
    ctx->pc = 0x280764u;
    // 0x280764: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x280764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x280768: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x280768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x28076c: 0x18e00007  blez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x28076Cu;
    {
        const bool branch_taken_0x28076c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x280770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28076Cu;
        // 0x280770: 0x62202d  daddu       $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28076c) {
            ctx->pc = 0x28078Cu;
            goto label_28078c;
        }
    }
    ctx->pc = 0x280774u;
    // 0x280774: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x280774u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x280778: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x280778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28077c: 0x11090003  beq         $t0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28077Cu;
    {
        const bool branch_taken_0x28077c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x280780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28077Cu;
        // 0x280780: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28077c) {
            ctx->pc = 0x28078Cu;
            goto label_28078c;
        }
    }
    ctx->pc = 0x280784u;
    // 0x280784: 0x5505fff4  bnel        $t0, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x280784u;
    {
        const bool branch_taken_0x280784 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x280784) {
            ctx->pc = 0x280788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280784u;
            // 0x280788: 0x2503ffd0  addiu       $v1, $t0, -0x30 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280758;
        }
    }
    ctx->pc = 0x28078Cu;
label_28078c:
    // 0x28078c: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28078Cu;
    {
        const bool branch_taken_0x28078c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28078c) {
            ctx->pc = 0x280790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28078Cu;
            // 0x280790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2807B0u;
            goto label_2807b0;
        }
    }
    ctx->pc = 0x280794u;
    // 0x280794: 0x11a00003  beqz        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x280794u;
    {
        const bool branch_taken_0x280794 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x280798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280794u;
        // 0x280798: 0x2c820028  sltiu       $v0, $a0, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280794) {
            ctx->pc = 0x2807A4u;
            goto label_2807a4;
        }
    }
    ctx->pc = 0x28079Cu;
    // 0x28079c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x28079Cu;
    {
        const bool branch_taken_0x28079c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28079c) {
            ctx->pc = 0x2807A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28079Cu;
            // 0x2807a0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28084Cu;
            goto label_28084c;
        }
    }
    ctx->pc = 0x2807A4u;
label_2807a4:
    // 0x2807a4: 0x8e202d  daddu       $a0, $a0, $t6
    ctx->pc = 0x2807a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 14));
    // 0x2807a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2807a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2807ac: 0x0  nop
    ctx->pc = 0x2807acu;
    // NOP
label_2807b0:
    // 0x2807b0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2807b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2807b4: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x2807b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x2807b8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2807b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2807bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2807bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2807c0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2807c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2807c4: 0x421fa  dsrl        $a0, $a0, 7
    ctx->pc = 0x2807c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 7);
    // 0x2807c8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2807C8u;
    {
        const bool branch_taken_0x2807c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2807c8) {
            ctx->pc = 0x2807B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2807b0;
        }
    }
    ctx->pc = 0x2807D0u;
    // 0x2807d0: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2807D0u;
    {
        const bool branch_taken_0x2807d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2807D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807D0u;
        // 0x2807d4: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807d0) {
            ctx->pc = 0x280828u;
            goto label_280828;
        }
    }
    ctx->pc = 0x2807D8u;
    // 0x2807d8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2807d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2807dc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2807DCu;
    {
        const bool branch_taken_0x2807dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2807E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807DCu;
        // 0x2807e0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807dc) {
            ctx->pc = 0x280858u;
            goto label_280858;
        }
    }
    ctx->pc = 0x2807E4u;
    // 0x2807e4: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2807E4u;
    {
        const bool branch_taken_0x2807e4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2807E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807E4u;
        // 0x2807e8: 0x93a90000  lbu         $t1, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807e4) {
            ctx->pc = 0x280818u;
            goto label_280818;
        }
    }
    ctx->pc = 0x2807ECu;
    // 0x2807ec: 0x0  nop
    ctx->pc = 0x2807ecu;
    // NOP
label_2807f0:
    // 0x2807f0: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x2807f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x2807f4: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x2807f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2807f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2807f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2807fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2807fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x280800: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x280800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x280804: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x280804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x280808: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x280808u;
    {
        const bool branch_taken_0x280808 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280808u;
        // 0x28080c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280808) {
            ctx->pc = 0x2807F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2807f0;
        }
    }
    ctx->pc = 0x280810u;
    // 0x280810: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280810u;
    {
        const bool branch_taken_0x280810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280810u;
        // 0x280814: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280810) {
            ctx->pc = 0x28081Cu;
            goto label_28081c;
        }
    }
    ctx->pc = 0x280818u;
label_280818:
    // 0x280818: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x280818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_28081c:
    // 0x28081c: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x28081cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x280820: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280820u;
    {
        const bool branch_taken_0x280820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280820u;
        // 0x280824: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280820) {
            ctx->pc = 0x28082Cu;
            goto label_28082c;
        }
    }
    ctx->pc = 0x280828u;
label_280828:
    // 0x280828: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x280828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_28082c:
    // 0x28082c: 0x1ce0ffba  bgtz        $a3, . + 4 + (-0x46 << 2)
    ctx->pc = 0x28082Cu;
    {
        const bool branch_taken_0x28082c = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x28082c) {
            ctx->pc = 0x280718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280718;
        }
    }
    ctx->pc = 0x280834u;
label_280834:
    // 0x280834: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x280834u;
    {
        const bool branch_taken_0x280834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280834u;
        // 0x280838: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280834) {
            ctx->pc = 0x280890u;
            goto label_280890;
        }
    }
    ctx->pc = 0x28083Cu;
label_28083c:
    // 0x28083c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x28083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x280840: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x280840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x280844: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x280844u;
    {
        const bool branch_taken_0x280844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280844u;
        // 0x280848: 0x24060079  addiu       $a2, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280844) {
            ctx->pc = 0x280864u;
            goto label_280864;
        }
    }
    ctx->pc = 0x28084Cu;
label_28084c:
    // 0x28084c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x28084cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x280850: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x280850u;
    {
        const bool branch_taken_0x280850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280850u;
        // 0x280854: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280850) {
            ctx->pc = 0x280864u;
            goto label_280864;
        }
    }
    ctx->pc = 0x280858u;
label_280858:
    // 0x280858: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x280858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x28085c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x28085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x280860: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x280860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280864:
    // 0x280864: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280868: 0xc0a5648  jal         func_295920
    ctx->pc = 0x280868u;
    SET_GPR_U32(ctx, 31, 0x280870u);
    ctx->pc = 0x28086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280868u;
    // 0x28086c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x280868u, 0x280870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280870u;
label_280870:
    // 0x280870: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x280870u;
    {
        const bool branch_taken_0x280870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280870u;
        // 0x280874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280870) {
            ctx->pc = 0x280890u;
            goto label_280890;
        }
    }
    ctx->pc = 0x280878u;
label_280878:
    // 0x280878: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x280878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28087c: 0x2406007a  addiu       $a2, $zero, 0x7A
    ctx->pc = 0x28087cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x280880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280884: 0xc0a5648  jal         func_295920
    ctx->pc = 0x280884u;
    SET_GPR_U32(ctx, 31, 0x28088Cu);
    ctx->pc = 0x280888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280884u;
    // 0x280888: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x280884u, 0x28088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28088Cu;
label_28088c:
    // 0x28088c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28088cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280890:
    // 0x280890: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x280890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x280894: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x280894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280898: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x280898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28089c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x28089cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2808a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2808a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2808a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2808A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2808A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808A4u;
        // 0x2808a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2808A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2808ACu;
    // 0x2808ac: 0x0  nop
    ctx->pc = 0x2808acu;
    // NOP
    if (ctx->pc == 0x2808acu) { ctx->pc = 0x2808b0u; }
}
