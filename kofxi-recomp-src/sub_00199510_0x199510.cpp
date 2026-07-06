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

// Function: sub_00199510
// Address: 0x199510 - 0x19acb0
void sub_00199510_0x199510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199510_0x199510");
#endif

    switch (ctx->pc) {
        case 0x199560u: goto label_199560;
        case 0x199594u: goto label_199594;
        case 0x19ac78u: goto label_19ac78;
        case 0x19ac84u: goto label_19ac84;
        default: break;
    }

    ctx->pc = 0x199510u;

    // 0x199510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x199510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x199514: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199518: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x199518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19951c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x199520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199524: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x199524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19952c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x199530: 0x8c50da28  lw          $s0, -0x25D8($v0)
    ctx->pc = 0x199530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957608)));
    // 0x199534: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x199534u;
    {
        const bool branch_taken_0x199534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199534u;
        // 0x199538: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199534) {
            ctx->pc = 0x199580u;
            goto label_199580;
        }
    }
    ctx->pc = 0x19953Cu;
    // 0x19953c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199540: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x199540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199544: 0xac44d4b8  sw          $a0, -0x2B48($v0)
    ctx->pc = 0x199544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956216), GPR_U32(ctx, 4));
    // 0x199548: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x199548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x19954c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19954cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199550: 0xac45d4d0  sw          $a1, -0x2B30($v0)
    ctx->pc = 0x199550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956240), GPR_U32(ctx, 5));
    // 0x199554: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x199554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x199558: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x199558u;
    SET_GPR_U32(ctx, 31, 0x199560u);
    ctx->pc = 0x19955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199558u;
    // 0x19955c: 0x432024  and         $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x199558u, 0x199560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199560u;
label_199560:
    // 0x199560: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199564: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x199564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x199568: 0x8c64d4b8  lw          $a0, -0x2B48($v1)
    ctx->pc = 0x199568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956216)));
    // 0x19956c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x19956cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x199570: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199574: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x199574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x199578: 0xac62d4c8  sw          $v0, -0x2B38($v1)
    ctx->pc = 0x199578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 2));
    // 0x19957c: 0xaca4d4c0  sw          $a0, -0x2B40($a1)
    ctx->pc = 0x19957cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294956224), GPR_U32(ctx, 4));
label_199580:
    // 0x199580: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x199580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x199584: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199584u;
    {
        const bool branch_taken_0x199584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199584) {
            ctx->pc = 0x199594u;
            goto label_199594;
        }
    }
    ctx->pc = 0x19958Cu;
    // 0x19958c: 0x100005c1  b           . + 4 + (0x5C1 << 2)
    ctx->pc = 0x19958Cu;
    {
        const bool branch_taken_0x19958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19958Cu;
        // 0x199590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19958c) {
            ctx->pc = 0x19AC94u;
            goto label_19ac94;
        }
    }
    ctx->pc = 0x199594u;
label_199594:
    // 0x199594: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199598: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x199598u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x19959c: 0x8c44d4c0  lw          $a0, -0x2B40($v0)
    ctx->pc = 0x19959cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956224)));
    // 0x1995a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1995a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1995a4: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x1995a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1995a8: 0x8c43d4d0  lw          $v1, -0x2B30($v0)
    ctx->pc = 0x1995a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956240)));
    // 0x1995ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1995acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1995b0: 0x186000ad  blez        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x1995B0u;
    {
        const bool branch_taken_0x1995b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995B0u;
        // 0x1995b4: 0xacc4d4c0  sw          $a0, -0x2B40($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294956224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995b0) {
            ctx->pc = 0x199868u;
            goto label_199868;
        }
    }
    ctx->pc = 0x1995B8u;
    // 0x1995b8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1995b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1995bc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1995bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1995c0: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1995C0u;
    {
        const bool branch_taken_0x1995c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995c0) {
            ctx->pc = 0x199830u;
            goto label_199830;
        }
    }
    ctx->pc = 0x1995C8u;
    // 0x1995c8: 0x908a0000  lbu         $t2, 0x0($a0)
    ctx->pc = 0x1995c8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1995cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1995ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1995d0: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x1995d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x1995d4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1995d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1995d8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1995d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1995dc: 0x8c42d4c8  lw          $v0, -0x2B38($v0)
    ctx->pc = 0x1995dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x1995e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1995e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1995e4: 0xa4903  sra         $t1, $t2, 4
    ctx->pc = 0x1995e4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 4));
    // 0x1995e8: 0xacc4d4c0  sw          $a0, -0x2B40($a2)
    ctx->pc = 0x1995e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956224), GPR_U32(ctx, 4));
    // 0x1995ec: 0x24e7e930  addiu       $a3, $a3, -0x16D0
    ctx->pc = 0x1995ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961456));
    // 0x1995f0: 0x3126000f  andi        $a2, $t1, 0xF
    ctx->pc = 0x1995f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x1995f4: 0x1064023  subu        $t0, $t0, $a2
    ctx->pc = 0x1995f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1995f8: 0x3146000f  andi        $a2, $t2, 0xF
    ctx->pc = 0x1995f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x1995fc: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x1995fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x199600: 0x483023  subu        $a2, $v0, $t0
    ctx->pc = 0x199600u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x199604: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x199604u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x199608: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x199608u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x19960c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x19960cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x199610: 0x2d010011  sltiu       $at, $t0, 0x11
    ctx->pc = 0x199610u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x199614: 0x10200094  beqz        $at, . + 4 + (0x94 << 2)
    ctx->pc = 0x199614u;
    {
        const bool branch_taken_0x199614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199614u;
        // 0x199618: 0xace3d4d0  sw          $v1, -0x2B30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294956240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199614) {
            ctx->pc = 0x199868u;
            goto label_199868;
        }
    }
    ctx->pc = 0x19961Cu;
    // 0x19961c: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x19961cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x199620: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x199620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x199624: 0x24e7ee50  addiu       $a3, $a3, -0x11B0
    ctx->pc = 0x199624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962768));
    // 0x199628: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x199628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19962c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199630: 0x600008  jr          $v1
    ctx->pc = 0x199630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199638u: goto label_199638;
            case 0x199650u: goto label_199650;
            case 0x199670u: goto label_199670;
            case 0x199690u: goto label_199690;
            case 0x1996B0u: goto label_1996b0;
            case 0x1996D0u: goto label_1996d0;
            case 0x1996F0u: goto label_1996f0;
            case 0x199710u: goto label_199710;
            case 0x199730u: goto label_199730;
            case 0x199750u: goto label_199750;
            case 0x199770u: goto label_199770;
            case 0x199790u: goto label_199790;
            case 0x1997B0u: goto label_1997b0;
            case 0x1997D0u: goto label_1997d0;
            case 0x1997F0u: goto label_1997f0;
            case 0x199810u: goto label_199810;
            case 0x199868u: goto label_199868;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x199638u;
label_199638:
    // 0x199638: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x199638u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19963c: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x19963cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199640: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199644: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x199644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x199648: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x199648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x19964c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19964cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_199650:
    // 0x199650: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199654: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199654u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199658: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19965c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199660: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199664: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199668: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19966c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19966cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199670:
    // 0x199670: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199674: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199674u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199678: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19967c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199680: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199684: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199688: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19968c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19968cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199690:
    // 0x199690: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199694: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199694u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199698: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19969c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x1996a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1996a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1996a4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1996a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1996a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1996a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1996ac: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x1996acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_1996b0:
    // 0x1996b0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1996b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1996b4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x1996b4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1996b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1996b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1996bc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x1996bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x1996c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1996c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1996c4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1996c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1996c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1996c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1996cc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x1996ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_1996d0:
    // 0x1996d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1996d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1996d4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x1996d4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1996d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1996d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1996dc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x1996dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x1996e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1996e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1996e4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1996e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1996e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1996e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1996ec: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x1996ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_1996f0:
    // 0x1996f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1996f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1996f4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x1996f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1996f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1996f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1996fc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x1996fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199700: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199704: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199708: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19970c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19970cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199710:
    // 0x199710: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199714: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199714u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199718: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19971c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19971cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199720: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199724: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19972c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19972cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199730:
    // 0x199730: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199734: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199734u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199738: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19973c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199740: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199744: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199748: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19974c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19974cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199750:
    // 0x199750: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199754: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199754u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199758: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19975c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19975cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199760: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199764: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199768: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19976c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19976cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199770:
    // 0x199770: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199774: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199774u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199778: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19977c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199780: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199784: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19978c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19978cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199790:
    // 0x199790: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199794: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199794u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199798: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19979c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x1997a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1997a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1997a4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1997a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1997a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1997a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1997ac: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x1997acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_1997b0:
    // 0x1997b0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1997b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1997b4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x1997b4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1997b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1997b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1997bc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x1997bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x1997c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1997c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1997c4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1997c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1997c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1997c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1997cc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x1997ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_1997d0:
    // 0x1997d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1997d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1997d4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x1997d4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1997d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1997d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1997dc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x1997dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x1997e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1997e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1997e4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1997e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1997e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1997e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1997ec: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x1997ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_1997f0:
    // 0x1997f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1997f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1997f4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x1997f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1997f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1997f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1997fc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x1997fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199800: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199804: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199808: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19980c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19980cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199810:
    // 0x199810: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199814: 0x80c60000  lb          $a2, 0x0($a2)
    ctx->pc = 0x199814u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199818: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19981c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199820: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x199820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x199824: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199828: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x199828u;
    {
        const bool branch_taken_0x199828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199828u;
        // 0x19982c: 0xac43d4c8  sw          $v1, -0x2B38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199828) {
            ctx->pc = 0x199868u;
            goto label_199868;
        }
    }
    ctx->pc = 0x199830u;
label_199830:
    // 0x199830: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199834: 0x8c48d4c8  lw          $t0, -0x2B38($v0)
    ctx->pc = 0x199834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x199838: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x199838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19983c: 0x80890000  lb          $t1, 0x0($a0)
    ctx->pc = 0x19983cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199840: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x199840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x199844: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199848: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19984c: 0xac47d4d0  sw          $a3, -0x2B30($v0)
    ctx->pc = 0x19984cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956240), GPR_U32(ctx, 7));
    // 0x199850: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x199854: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x199854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x199858: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x199858u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x19985c: 0xac62d4c8  sw          $v0, -0x2B38($v1)
    ctx->pc = 0x19985cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 2));
    // 0x199860: 0xacc4d4c0  sw          $a0, -0x2B40($a2)
    ctx->pc = 0x199860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956224), GPR_U32(ctx, 4));
    // 0x199864: 0x0  nop
    ctx->pc = 0x199864u;
    // NOP
label_199868:
    // 0x199868: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19986c: 0x8c43d4d0  lw          $v1, -0x2B30($v0)
    ctx->pc = 0x19986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956240)));
    // 0x199870: 0x186000b3  blez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x199870u;
    {
        const bool branch_taken_0x199870 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x199870) {
            ctx->pc = 0x199B40u;
            goto label_199b40;
        }
    }
    ctx->pc = 0x199878u;
    // 0x199878: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x199878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19987c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19987cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x199880: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x199880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x199884: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x199884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x199888: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x199888u;
    {
        const bool branch_taken_0x199888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199888) {
            ctx->pc = 0x199B00u;
            goto label_199b00;
        }
    }
    ctx->pc = 0x199890u;
    // 0x199890: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x199890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x199894: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199898: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x199898u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x19989c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x19989cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1998a0: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x1998a0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1998a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1998a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1998a8: 0x73103  sra         $a2, $a3, 4
    ctx->pc = 0x1998a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 4));
    // 0x1998ac: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x1998acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x1998b0: 0x30c9000f  andi        $t1, $a2, 0xF
    ctx->pc = 0x1998b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1998b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1998b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1998b8: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x1998b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x1998bc: 0x8c42d4c8  lw          $v0, -0x2B38($v0)
    ctx->pc = 0x1998bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x1998c0: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x1998c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x1998c4: 0x24c6e930  addiu       $a2, $a2, -0x16D0
    ctx->pc = 0x1998c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961456));
    // 0x1998c8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1998c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1998cc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1998ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1998d0: 0x483023  subu        $a2, $v0, $t0
    ctx->pc = 0x1998d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1998d4: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x1998d4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1998d8: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x1998d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x1998dc: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1998dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1998e0: 0x2d010011  sltiu       $at, $t0, 0x11
    ctx->pc = 0x1998e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1998e4: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x1998E4u;
    {
        const bool branch_taken_0x1998e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1998E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998E4u;
        // 0x1998e8: 0xace3d4d0  sw          $v1, -0x2B30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294956240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998e4) {
            ctx->pc = 0x199B40u;
            goto label_199b40;
        }
    }
    ctx->pc = 0x1998ECu;
    // 0x1998ec: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x1998ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x1998f0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1998f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1998f4: 0x24e7ee00  addiu       $a3, $a3, -0x1200
    ctx->pc = 0x1998f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962688));
    // 0x1998f8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1998f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1998fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1998fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199900: 0x600008  jr          $v1
    ctx->pc = 0x199900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199908u: goto label_199908;
            case 0x199920u: goto label_199920;
            case 0x199940u: goto label_199940;
            case 0x199960u: goto label_199960;
            case 0x199980u: goto label_199980;
            case 0x1999A0u: goto label_1999a0;
            case 0x1999C0u: goto label_1999c0;
            case 0x1999E0u: goto label_1999e0;
            case 0x199A00u: goto label_199a00;
            case 0x199A20u: goto label_199a20;
            case 0x199A40u: goto label_199a40;
            case 0x199A60u: goto label_199a60;
            case 0x199A80u: goto label_199a80;
            case 0x199AA0u: goto label_199aa0;
            case 0x199AC0u: goto label_199ac0;
            case 0x199AE0u: goto label_199ae0;
            case 0x199B40u: goto label_199b40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199900u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x199908u;
label_199908:
    // 0x199908: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x199908u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19990c: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x19990cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199910: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199914: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x199914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x199918: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x199918u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x19991c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19991cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_199920:
    // 0x199920: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199924: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199924u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199928: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19992c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19992cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199930: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199934: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199938: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19993c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19993cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199940:
    // 0x199940: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199944: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199944u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199948: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19994c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199950: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199954: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199958: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19995c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19995cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199960:
    // 0x199960: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199964: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199964u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199968: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19996c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19996cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199970: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199974: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199978: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19997c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19997cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199980:
    // 0x199980: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199984: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199984u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199988: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19998c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199990: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199994: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199998: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19999c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19999cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_1999a0:
    // 0x1999a0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1999a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1999a4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x1999a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1999a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1999a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1999ac: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x1999acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x1999b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1999b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1999b4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1999b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1999b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1999b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1999bc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x1999bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_1999c0:
    // 0x1999c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1999c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1999c4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x1999c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1999c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1999c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1999cc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x1999ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x1999d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1999d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1999d4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1999d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1999d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1999d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1999dc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x1999dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_1999e0:
    // 0x1999e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1999e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1999e4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x1999e4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1999e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1999e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1999ec: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x1999ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x1999f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1999f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1999f4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1999f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1999f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1999f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1999fc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x1999fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199a00:
    // 0x199a00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199a04: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199a04u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199a08: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199a0c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199a10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199a14: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199a18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199a1c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199a20:
    // 0x199a20: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199a24: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199a24u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199a28: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199a2c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199a30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199a34: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199a38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199a3c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199a40:
    // 0x199a40: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199a44: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199a44u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199a48: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199a4c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199a50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199a54: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199a54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199a58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199a5c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199a60:
    // 0x199a60: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199a64: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199a64u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199a68: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199a6c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199a70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199a74: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199a78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199a7c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199a80:
    // 0x199a80: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199a84: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199a84u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199a88: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199a8c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199a90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199a94: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199a94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199a98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199a9c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199aa0:
    // 0x199aa0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199aa4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199aa4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199aa8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199aac: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199ab0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199ab4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199ab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199abc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199ac0:
    // 0x199ac0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199ac4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199ac4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199ac8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199acc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199ad0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199ad4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199ad8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199adc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199ae0:
    // 0x199ae0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199ae4: 0x80c60000  lb          $a2, 0x0($a2)
    ctx->pc = 0x199ae4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199ae8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199aec: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199af0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x199af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x199af4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199af8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x199AF8u;
    {
        const bool branch_taken_0x199af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AF8u;
        // 0x199afc: 0xac43d4c8  sw          $v1, -0x2B38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199af8) {
            ctx->pc = 0x199B40u;
            goto label_199b40;
        }
    }
    ctx->pc = 0x199B00u;
label_199b00:
    // 0x199b00: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x199b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x199b04: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199b08: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x199b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x199b0c: 0x8c48d4c8  lw          $t0, -0x2B38($v0)
    ctx->pc = 0x199b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x199b10: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x199b10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x199b14: 0x80690000  lb          $t1, 0x0($v1)
    ctx->pc = 0x199b14u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199b18: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x199b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199b1c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199b20: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x199b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x199b24: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x199b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x199b28: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199b2c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199b30: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x199b30u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x199b34: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x199b34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x199b38: 0xac46d4d0  sw          $a2, -0x2B30($v0)
    ctx->pc = 0x199b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956240), GPR_U32(ctx, 6));
    // 0x199b3c: 0x0  nop
    ctx->pc = 0x199b3cu;
    // NOP
label_199b40:
    // 0x199b40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199b44: 0x8c43d4d0  lw          $v1, -0x2B30($v0)
    ctx->pc = 0x199b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956240)));
    // 0x199b48: 0x186000b3  blez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x199B48u;
    {
        const bool branch_taken_0x199b48 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x199b48) {
            ctx->pc = 0x199E18u;
            goto label_199e18;
        }
    }
    ctx->pc = 0x199B50u;
    // 0x199b50: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x199b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x199b54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x199b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x199b58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x199b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x199b5c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x199b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x199b60: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x199B60u;
    {
        const bool branch_taken_0x199b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199b60) {
            ctx->pc = 0x199DD8u;
            goto label_199dd8;
        }
    }
    ctx->pc = 0x199B68u;
    // 0x199b68: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x199b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x199b6c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199b70: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x199b70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x199b74: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x199b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x199b78: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x199b78u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199b7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x199b80: 0x73103  sra         $a2, $a3, 4
    ctx->pc = 0x199b80u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 4));
    // 0x199b84: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x199b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x199b88: 0x30c9000f  andi        $t1, $a2, 0xF
    ctx->pc = 0x199b88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x199b8c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199b90: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x199b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x199b94: 0x8c42d4c8  lw          $v0, -0x2B38($v0)
    ctx->pc = 0x199b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x199b98: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x199b98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x199b9c: 0x24c6e930  addiu       $a2, $a2, -0x16D0
    ctx->pc = 0x199b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961456));
    // 0x199ba0: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x199ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x199ba4: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x199ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x199ba8: 0x483023  subu        $a2, $v0, $t0
    ctx->pc = 0x199ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x199bac: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x199bacu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x199bb0: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x199bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x199bb4: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x199bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x199bb8: 0x2d010011  sltiu       $at, $t0, 0x11
    ctx->pc = 0x199bb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x199bbc: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x199BBCu;
    {
        const bool branch_taken_0x199bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BBCu;
        // 0x199bc0: 0xace3d4d0  sw          $v1, -0x2B30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294956240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bbc) {
            ctx->pc = 0x199E18u;
            goto label_199e18;
        }
    }
    ctx->pc = 0x199BC4u;
    // 0x199bc4: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x199bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x199bc8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x199bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x199bcc: 0x24e7edb0  addiu       $a3, $a3, -0x1250
    ctx->pc = 0x199bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962608));
    // 0x199bd0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x199bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x199bd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x199bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199bd8: 0x600008  jr          $v1
    ctx->pc = 0x199BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199BE0u: goto label_199be0;
            case 0x199BF8u: goto label_199bf8;
            case 0x199C18u: goto label_199c18;
            case 0x199C38u: goto label_199c38;
            case 0x199C58u: goto label_199c58;
            case 0x199C78u: goto label_199c78;
            case 0x199C98u: goto label_199c98;
            case 0x199CB8u: goto label_199cb8;
            case 0x199CD8u: goto label_199cd8;
            case 0x199CF8u: goto label_199cf8;
            case 0x199D18u: goto label_199d18;
            case 0x199D38u: goto label_199d38;
            case 0x199D58u: goto label_199d58;
            case 0x199D78u: goto label_199d78;
            case 0x199D98u: goto label_199d98;
            case 0x199DB8u: goto label_199db8;
            case 0x199E18u: goto label_199e18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199BD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x199BE0u;
label_199be0:
    // 0x199be0: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x199be0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199be4: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x199be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199be8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199bec: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x199becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x199bf0: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x199bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x199bf4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_199bf8:
    // 0x199bf8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199bfc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199bfcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199c00: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199c04: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199c08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199c0c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199c10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199c14: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199c18:
    // 0x199c18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199c1c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199c1cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199c20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199c24: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199c28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199c2c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199c30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199c34: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199c38:
    // 0x199c38: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199c3c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199c3cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199c40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199c44: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199c48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199c4c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199c50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199c54: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199c58:
    // 0x199c58: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199c5c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199c5cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199c60: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199c64: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199c68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199c6c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199c70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199c74: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199c78:
    // 0x199c78: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199c7c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199c7cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199c80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199c84: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199c88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199c8c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199c90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199c94: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199c98:
    // 0x199c98: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199c9c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199c9cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199ca0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199ca4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199ca8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199cac: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199cb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199cb4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199cb8:
    // 0x199cb8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199cbc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199cbcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199cc0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199cc4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199cc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199ccc: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199cd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199cd4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199cd8:
    // 0x199cd8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199cdc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199cdcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199ce0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199ce4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199ce8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199cec: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199cf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199cf4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199cf8:
    // 0x199cf8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199cfc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199cfcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199d00: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199d04: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199d08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199d0c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199d10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199d14: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199d18:
    // 0x199d18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199d1c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199d1cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199d20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199d24: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199d28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199d2c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199d30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199d34: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199d38:
    // 0x199d38: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199d3c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199d3cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199d40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199d44: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199d48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199d4c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199d54: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199d58:
    // 0x199d58: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199d5c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199d5cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199d60: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199d64: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199d68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199d6c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199d70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199d74: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199d78:
    // 0x199d78: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199d7c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199d7cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199d80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199d84: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199d88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199d8c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199d90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199d94: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199d98:
    // 0x199d98: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199d9c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199d9cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199da0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199da4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199da8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199dac: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199db0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199db4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199db8:
    // 0x199db8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199dbc: 0x80c60000  lb          $a2, 0x0($a2)
    ctx->pc = 0x199dbcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199dc0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199dc4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199dc8: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x199dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x199dcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199dd0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x199DD0u;
    {
        const bool branch_taken_0x199dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DD0u;
        // 0x199dd4: 0xac43d4c8  sw          $v1, -0x2B38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dd0) {
            ctx->pc = 0x199E18u;
            goto label_199e18;
        }
    }
    ctx->pc = 0x199DD8u;
label_199dd8:
    // 0x199dd8: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x199dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x199ddc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199de0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x199de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x199de4: 0x8c48d4c8  lw          $t0, -0x2B38($v0)
    ctx->pc = 0x199de4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x199de8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x199de8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x199dec: 0x80690000  lb          $t1, 0x0($v1)
    ctx->pc = 0x199decu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199df0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x199df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199df4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199df8: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x199df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x199dfc: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x199dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x199e00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199e04: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199e08: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x199e08u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x199e0c: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x199e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x199e10: 0xac46d4d0  sw          $a2, -0x2B30($v0)
    ctx->pc = 0x199e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956240), GPR_U32(ctx, 6));
    // 0x199e14: 0x0  nop
    ctx->pc = 0x199e14u;
    // NOP
label_199e18:
    // 0x199e18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199e1c: 0x8c43d4d0  lw          $v1, -0x2B30($v0)
    ctx->pc = 0x199e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956240)));
    // 0x199e20: 0x186000b3  blez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x199E20u;
    {
        const bool branch_taken_0x199e20 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x199e20) {
            ctx->pc = 0x19A0F0u;
            goto label_19a0f0;
        }
    }
    ctx->pc = 0x199E28u;
    // 0x199e28: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x199e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x199e2c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x199e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x199e30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x199e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x199e34: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x199e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x199e38: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x199E38u;
    {
        const bool branch_taken_0x199e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e38) {
            ctx->pc = 0x19A0B0u;
            goto label_19a0b0;
        }
    }
    ctx->pc = 0x199E40u;
    // 0x199e40: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x199e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x199e44: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199e48: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x199e48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x199e4c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x199e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x199e50: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x199e50u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199e54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x199e58: 0x73103  sra         $a2, $a3, 4
    ctx->pc = 0x199e58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 4));
    // 0x199e5c: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x199e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x199e60: 0x30c9000f  andi        $t1, $a2, 0xF
    ctx->pc = 0x199e60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x199e64: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199e68: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x199e68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x199e6c: 0x8c42d4c8  lw          $v0, -0x2B38($v0)
    ctx->pc = 0x199e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x199e70: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x199e70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x199e74: 0x24c6e930  addiu       $a2, $a2, -0x16D0
    ctx->pc = 0x199e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961456));
    // 0x199e78: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x199e78u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x199e7c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x199e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x199e80: 0x483023  subu        $a2, $v0, $t0
    ctx->pc = 0x199e80u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x199e84: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x199e84u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x199e88: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x199e88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x199e8c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x199e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x199e90: 0x2d010011  sltiu       $at, $t0, 0x11
    ctx->pc = 0x199e90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x199e94: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x199E94u;
    {
        const bool branch_taken_0x199e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E94u;
        // 0x199e98: 0xace3d4d0  sw          $v1, -0x2B30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294956240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e94) {
            ctx->pc = 0x19A0F0u;
            goto label_19a0f0;
        }
    }
    ctx->pc = 0x199E9Cu;
    // 0x199e9c: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x199e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x199ea0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x199ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x199ea4: 0x24e7ed60  addiu       $a3, $a3, -0x12A0
    ctx->pc = 0x199ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962528));
    // 0x199ea8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x199ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x199eac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x199eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199eb0: 0x600008  jr          $v1
    ctx->pc = 0x199EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199EB8u: goto label_199eb8;
            case 0x199ED0u: goto label_199ed0;
            case 0x199EF0u: goto label_199ef0;
            case 0x199F10u: goto label_199f10;
            case 0x199F30u: goto label_199f30;
            case 0x199F50u: goto label_199f50;
            case 0x199F70u: goto label_199f70;
            case 0x199F90u: goto label_199f90;
            case 0x199FB0u: goto label_199fb0;
            case 0x199FD0u: goto label_199fd0;
            case 0x199FF0u: goto label_199ff0;
            case 0x19A010u: goto label_19a010;
            case 0x19A030u: goto label_19a030;
            case 0x19A050u: goto label_19a050;
            case 0x19A070u: goto label_19a070;
            case 0x19A090u: goto label_19a090;
            case 0x19A0F0u: goto label_19a0f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199EB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x199EB8u;
label_199eb8:
    // 0x199eb8: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x199eb8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199ebc: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x199ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199ec0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199ec4: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x199ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x199ec8: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x199ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x199ecc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_199ed0:
    // 0x199ed0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199ed4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199ed4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199ed8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199edc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199ee0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199ee4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199ee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199eec: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199ef0:
    // 0x199ef0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199ef4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199ef4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199ef8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199efc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199f00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199f04: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199f04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199f08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199f0c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199f10:
    // 0x199f10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199f14: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199f14u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199f18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199f1c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199f20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199f24: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199f24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199f28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199f2c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199f30:
    // 0x199f30: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199f34: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199f34u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199f38: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199f3c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199f40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199f44: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199f44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199f48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199f4c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199f50:
    // 0x199f50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199f54: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199f54u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199f58: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199f5c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199f60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199f64: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199f64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199f68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199f6c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199f70:
    // 0x199f70: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199f74: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199f74u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199f78: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199f7c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199f80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199f84: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199f88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199f8c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199f90:
    // 0x199f90: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199f94: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199f94u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199f98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199f9c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199fa0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199fa4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199fa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199fac: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199fb0:
    // 0x199fb0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199fb4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199fb4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199fb8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199fbc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199fc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199fc4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199fc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199fcc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199fd0:
    // 0x199fd0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199fd4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199fd4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199fd8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199fdc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x199fe0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199fe4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x199fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x199fe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199fec: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x199fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_199ff0:
    // 0x199ff0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x199ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x199ff4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x199ff4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199ff8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x199ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x199ffc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x199ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a000: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a004: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a008: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a00c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a010:
    // 0x19a010: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a014: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a014u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a018: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a01c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a020: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a024: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a028: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a02c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a030:
    // 0x19a030: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a034: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a034u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a038: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a03c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a040: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a044: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a048: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a04c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a050:
    // 0x19a050: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a054: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a054u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a058: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a05c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a060: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a064: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a068: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a06c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a070:
    // 0x19a070: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a074: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a074u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a078: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a07c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a080: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a084: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a088: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a08c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a08cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a090:
    // 0x19a090: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a094: 0x80c60000  lb          $a2, 0x0($a2)
    ctx->pc = 0x19a094u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a098: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a09c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a0a0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19a0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19a0a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a0a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19A0A8u;
    {
        const bool branch_taken_0x19a0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0A8u;
        // 0x19a0ac: 0xac43d4c8  sw          $v1, -0x2B38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0a8) {
            ctx->pc = 0x19A0F0u;
            goto label_19a0f0;
        }
    }
    ctx->pc = 0x19A0B0u;
label_19a0b0:
    // 0x19a0b0: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x19a0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19a0b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a0b8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x19a0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19a0bc: 0x8c48d4c8  lw          $t0, -0x2B38($v0)
    ctx->pc = 0x19a0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x19a0c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19a0c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19a0c4: 0x80690000  lb          $t1, 0x0($v1)
    ctx->pc = 0x19a0c4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a0c8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x19a0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a0cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a0d0: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x19a0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19a0d4: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x19a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x19a0d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a0dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a0e0: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x19a0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a0e4: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x19a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x19a0e8: 0xac46d4d0  sw          $a2, -0x2B30($v0)
    ctx->pc = 0x19a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956240), GPR_U32(ctx, 6));
    // 0x19a0ec: 0x0  nop
    ctx->pc = 0x19a0ecu;
    // NOP
label_19a0f0:
    // 0x19a0f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a0f4: 0x8c43d4d0  lw          $v1, -0x2B30($v0)
    ctx->pc = 0x19a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956240)));
    // 0x19a0f8: 0x186000b3  blez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x19A0F8u;
    {
        const bool branch_taken_0x19a0f8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x19a0f8) {
            ctx->pc = 0x19A3C8u;
            goto label_19a3c8;
        }
    }
    ctx->pc = 0x19A100u;
    // 0x19a100: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x19a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19a104: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19a104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19a108: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a10c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19a10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19a110: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x19A110u;
    {
        const bool branch_taken_0x19a110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a110) {
            ctx->pc = 0x19A388u;
            goto label_19a388;
        }
    }
    ctx->pc = 0x19A118u;
    // 0x19a118: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19a118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19a11c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a120: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x19a120u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x19a124: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x19a124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19a128: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x19a128u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a12c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19a130: 0x73103  sra         $a2, $a3, 4
    ctx->pc = 0x19a130u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 4));
    // 0x19a134: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x19a134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x19a138: 0x30c9000f  andi        $t1, $a2, 0xF
    ctx->pc = 0x19a138u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x19a13c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a140: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x19a140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x19a144: 0x8c42d4c8  lw          $v0, -0x2B38($v0)
    ctx->pc = 0x19a144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x19a148: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x19a148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x19a14c: 0x24c6e930  addiu       $a2, $a2, -0x16D0
    ctx->pc = 0x19a14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961456));
    // 0x19a150: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x19a150u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x19a154: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x19a154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19a158: 0x483023  subu        $a2, $v0, $t0
    ctx->pc = 0x19a158u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19a15c: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x19a15cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19a160: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x19a160u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x19a164: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x19a164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19a168: 0x2d010011  sltiu       $at, $t0, 0x11
    ctx->pc = 0x19a168u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19a16c: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x19A16Cu;
    {
        const bool branch_taken_0x19a16c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A16Cu;
        // 0x19a170: 0xace3d4d0  sw          $v1, -0x2B30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294956240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a16c) {
            ctx->pc = 0x19A3C8u;
            goto label_19a3c8;
        }
    }
    ctx->pc = 0x19A174u;
    // 0x19a174: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x19a174u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x19a178: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x19a178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x19a17c: 0x24e7ed10  addiu       $a3, $a3, -0x12F0
    ctx->pc = 0x19a17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962448));
    // 0x19a180: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19a180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19a184: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a188: 0x600008  jr          $v1
    ctx->pc = 0x19A188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A190u: goto label_19a190;
            case 0x19A1A8u: goto label_19a1a8;
            case 0x19A1C8u: goto label_19a1c8;
            case 0x19A1E8u: goto label_19a1e8;
            case 0x19A208u: goto label_19a208;
            case 0x19A228u: goto label_19a228;
            case 0x19A248u: goto label_19a248;
            case 0x19A268u: goto label_19a268;
            case 0x19A288u: goto label_19a288;
            case 0x19A2A8u: goto label_19a2a8;
            case 0x19A2C8u: goto label_19a2c8;
            case 0x19A2E8u: goto label_19a2e8;
            case 0x19A308u: goto label_19a308;
            case 0x19A328u: goto label_19a328;
            case 0x19A348u: goto label_19a348;
            case 0x19A368u: goto label_19a368;
            case 0x19A3C8u: goto label_19a3c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A188u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19A190u;
label_19a190:
    // 0x19a190: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x19a190u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a194: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x19a194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a198: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a19c: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x19a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x19a1a0: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x19a1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x19a1a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19a1a8:
    // 0x19a1a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a1ac: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a1b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a1b4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a1b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a1bc: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a1c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a1c4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a1c8:
    // 0x19a1c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a1cc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a1ccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a1d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a1d4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a1d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a1dc: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a1e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a1e4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a1e8:
    // 0x19a1e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a1ec: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a1ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a1f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a1f4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a1f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a1fc: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a200: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a204: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a208:
    // 0x19a208: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a20c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a20cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a210: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a214: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a218: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a21c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a21cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a220: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a224: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a228:
    // 0x19a228: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a22c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a22cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a230: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a234: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a238: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a23c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a23cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a240: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a244: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a248:
    // 0x19a248: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a24c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a24cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a250: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a254: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a258: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a25c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a260: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a264: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a268:
    // 0x19a268: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a26c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a26cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a270: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a274: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a278: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a27c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a27cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a280: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a284: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a288:
    // 0x19a288: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a28c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a28cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a290: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a294: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a298: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a29c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a29cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a2a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a2a4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a2a8:
    // 0x19a2a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a2ac: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a2acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a2b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a2b4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a2b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a2bc: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a2c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a2c4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a2c8:
    // 0x19a2c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a2cc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a2ccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a2d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a2d4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a2d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a2dc: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a2e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a2e4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a2e8:
    // 0x19a2e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a2ec: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a2ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a2f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a2f4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a2f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a2fc: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a304: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a308:
    // 0x19a308: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a30c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a30cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a310: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a314: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a318: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a31c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a31cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a320: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a324: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a328:
    // 0x19a328: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a32c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a32cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a330: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a334: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a338: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a33c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a33cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a340: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a344: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a348:
    // 0x19a348: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a34c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a34cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a350: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a354: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a358: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a35c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a35cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a360: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a364: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a368:
    // 0x19a368: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a36c: 0x80c60000  lb          $a2, 0x0($a2)
    ctx->pc = 0x19a36cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a370: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a374: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a378: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19a378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19a37c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a380: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19A380u;
    {
        const bool branch_taken_0x19a380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A380u;
        // 0x19a384: 0xac43d4c8  sw          $v1, -0x2B38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a380) {
            ctx->pc = 0x19A3C8u;
            goto label_19a3c8;
        }
    }
    ctx->pc = 0x19A388u;
label_19a388:
    // 0x19a388: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x19a388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19a38c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a390: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x19a390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19a394: 0x8c48d4c8  lw          $t0, -0x2B38($v0)
    ctx->pc = 0x19a394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x19a398: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19a398u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19a39c: 0x80690000  lb          $t1, 0x0($v1)
    ctx->pc = 0x19a39cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a3a0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x19a3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a3a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a3a8: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x19a3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19a3ac: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x19a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x19a3b0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a3b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a3b8: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x19a3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a3bc: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x19a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x19a3c0: 0xac46d4d0  sw          $a2, -0x2B30($v0)
    ctx->pc = 0x19a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956240), GPR_U32(ctx, 6));
    // 0x19a3c4: 0x0  nop
    ctx->pc = 0x19a3c4u;
    // NOP
label_19a3c8:
    // 0x19a3c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a3cc: 0x8c43d4d0  lw          $v1, -0x2B30($v0)
    ctx->pc = 0x19a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956240)));
    // 0x19a3d0: 0x186000b3  blez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x19A3D0u;
    {
        const bool branch_taken_0x19a3d0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x19a3d0) {
            ctx->pc = 0x19A6A0u;
            goto label_19a6a0;
        }
    }
    ctx->pc = 0x19A3D8u;
    // 0x19a3d8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x19a3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19a3dc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x19a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x19a3e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a3e4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19a3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19a3e8: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x19A3E8u;
    {
        const bool branch_taken_0x19a3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a3e8) {
            ctx->pc = 0x19A660u;
            goto label_19a660;
        }
    }
    ctx->pc = 0x19A3F0u;
    // 0x19a3f0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19a3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19a3f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a3f8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x19a3f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x19a3fc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x19a3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19a400: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x19a400u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a404: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19a408: 0x73103  sra         $a2, $a3, 4
    ctx->pc = 0x19a408u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 4));
    // 0x19a40c: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x19a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x19a410: 0x30c9000f  andi        $t1, $a2, 0xF
    ctx->pc = 0x19a410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x19a414: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a418: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x19a418u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x19a41c: 0x8c42d4c8  lw          $v0, -0x2B38($v0)
    ctx->pc = 0x19a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x19a420: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x19a420u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x19a424: 0x24c6e930  addiu       $a2, $a2, -0x16D0
    ctx->pc = 0x19a424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961456));
    // 0x19a428: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x19a428u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x19a42c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x19a42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19a430: 0x483023  subu        $a2, $v0, $t0
    ctx->pc = 0x19a430u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19a434: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x19a434u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19a438: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x19a438u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x19a43c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x19a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19a440: 0x2d010011  sltiu       $at, $t0, 0x11
    ctx->pc = 0x19a440u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19a444: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x19A444u;
    {
        const bool branch_taken_0x19a444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A444u;
        // 0x19a448: 0xace3d4d0  sw          $v1, -0x2B30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294956240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a444) {
            ctx->pc = 0x19A6A0u;
            goto label_19a6a0;
        }
    }
    ctx->pc = 0x19A44Cu;
    // 0x19a44c: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x19a44cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x19a450: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x19a450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x19a454: 0x24e7ecc0  addiu       $a3, $a3, -0x1340
    ctx->pc = 0x19a454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962368));
    // 0x19a458: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19a458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19a45c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a460: 0x600008  jr          $v1
    ctx->pc = 0x19A460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A468u: goto label_19a468;
            case 0x19A480u: goto label_19a480;
            case 0x19A4A0u: goto label_19a4a0;
            case 0x19A4C0u: goto label_19a4c0;
            case 0x19A4E0u: goto label_19a4e0;
            case 0x19A500u: goto label_19a500;
            case 0x19A520u: goto label_19a520;
            case 0x19A540u: goto label_19a540;
            case 0x19A560u: goto label_19a560;
            case 0x19A580u: goto label_19a580;
            case 0x19A5A0u: goto label_19a5a0;
            case 0x19A5C0u: goto label_19a5c0;
            case 0x19A5E0u: goto label_19a5e0;
            case 0x19A600u: goto label_19a600;
            case 0x19A620u: goto label_19a620;
            case 0x19A640u: goto label_19a640;
            case 0x19A6A0u: goto label_19a6a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A460u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19A468u;
label_19a468:
    // 0x19a468: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x19a468u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a46c: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x19a46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a470: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a474: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x19a474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x19a478: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x19a478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x19a47c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19a480:
    // 0x19a480: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a484: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a484u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a488: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a48c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a490: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a494: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a494u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a49c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a4a0:
    // 0x19a4a0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a4a4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a4a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a4a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a4ac: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a4b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a4b4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a4b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a4bc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a4c0:
    // 0x19a4c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a4c4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a4c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a4c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a4cc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a4d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a4d4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a4d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a4dc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a4e0:
    // 0x19a4e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a4e4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a4e4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a4e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a4ec: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a4f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a4f4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a4f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a4fc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a500:
    // 0x19a500: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a504: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a504u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a508: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a50c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a510: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a514: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a514u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a518: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a51c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a520:
    // 0x19a520: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a524: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a524u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a528: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a52c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a530: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a534: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a534u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a538: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a53c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a540:
    // 0x19a540: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a544: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a544u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a548: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a54c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a550: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a554: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a558: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a55c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a560:
    // 0x19a560: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a564: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a564u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a568: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a56c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a570: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a574: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a57c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a580:
    // 0x19a580: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a584: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a584u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a588: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a58c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a590: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a594: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a598: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a59c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a5a0:
    // 0x19a5a0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a5a4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a5a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a5a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a5ac: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a5b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a5b4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a5b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a5bc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a5c0:
    // 0x19a5c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a5c4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a5c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a5c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a5cc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a5d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a5d4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a5d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a5dc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a5e0:
    // 0x19a5e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a5e4: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a5e4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a5e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a5ec: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a5f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a5f4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a5f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a5fc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a600:
    // 0x19a600: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a604: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a604u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a608: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a60c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a610: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a614: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a614u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a618: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a61c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a620:
    // 0x19a620: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a624: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a624u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a628: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a62c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a630: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a634: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a638: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a63c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a640:
    // 0x19a640: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a644: 0x80c60000  lb          $a2, 0x0($a2)
    ctx->pc = 0x19a644u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a648: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a64c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a650: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19a650u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19a654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a658: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19A658u;
    {
        const bool branch_taken_0x19a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A658u;
        // 0x19a65c: 0xac43d4c8  sw          $v1, -0x2B38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a658) {
            ctx->pc = 0x19A6A0u;
            goto label_19a6a0;
        }
    }
    ctx->pc = 0x19A660u;
label_19a660:
    // 0x19a660: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x19a660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19a664: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a668: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x19a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19a66c: 0x8c48d4c8  lw          $t0, -0x2B38($v0)
    ctx->pc = 0x19a66cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x19a670: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19a670u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19a674: 0x80690000  lb          $t1, 0x0($v1)
    ctx->pc = 0x19a674u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a678: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x19a678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a67c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a680: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x19a680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19a684: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x19a684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x19a688: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a68c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a690: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x19a690u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a694: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x19a694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x19a698: 0xac46d4d0  sw          $a2, -0x2B30($v0)
    ctx->pc = 0x19a698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956240), GPR_U32(ctx, 6));
    // 0x19a69c: 0x0  nop
    ctx->pc = 0x19a69cu;
    // NOP
label_19a6a0:
    // 0x19a6a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a6a4: 0x8c43d4d0  lw          $v1, -0x2B30($v0)
    ctx->pc = 0x19a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956240)));
    // 0x19a6a8: 0x186000b3  blez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x19A6A8u;
    {
        const bool branch_taken_0x19a6a8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x19a6a8) {
            ctx->pc = 0x19A978u;
            goto label_19a978;
        }
    }
    ctx->pc = 0x19A6B0u;
    // 0x19a6b0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x19a6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19a6b4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x19a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x19a6b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a6bc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19a6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19a6c0: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x19A6C0u;
    {
        const bool branch_taken_0x19a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a6c0) {
            ctx->pc = 0x19A938u;
            goto label_19a938;
        }
    }
    ctx->pc = 0x19A6C8u;
    // 0x19a6c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19a6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19a6cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a6d0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x19a6d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x19a6d4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x19a6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19a6d8: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x19a6d8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a6dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19a6e0: 0x73103  sra         $a2, $a3, 4
    ctx->pc = 0x19a6e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 4));
    // 0x19a6e4: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x19a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x19a6e8: 0x30c9000f  andi        $t1, $a2, 0xF
    ctx->pc = 0x19a6e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x19a6ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a6f0: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x19a6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x19a6f4: 0x8c42d4c8  lw          $v0, -0x2B38($v0)
    ctx->pc = 0x19a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x19a6f8: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x19a6f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x19a6fc: 0x24c6e930  addiu       $a2, $a2, -0x16D0
    ctx->pc = 0x19a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961456));
    // 0x19a700: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x19a700u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x19a704: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x19a704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19a708: 0x483023  subu        $a2, $v0, $t0
    ctx->pc = 0x19a708u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19a70c: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x19a70cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19a710: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x19a710u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x19a714: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x19a714u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19a718: 0x2d010011  sltiu       $at, $t0, 0x11
    ctx->pc = 0x19a718u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19a71c: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x19A71Cu;
    {
        const bool branch_taken_0x19a71c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A71Cu;
        // 0x19a720: 0xace3d4d0  sw          $v1, -0x2B30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294956240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a71c) {
            ctx->pc = 0x19A978u;
            goto label_19a978;
        }
    }
    ctx->pc = 0x19A724u;
    // 0x19a724: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x19a724u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x19a728: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x19a728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x19a72c: 0x24e7ec70  addiu       $a3, $a3, -0x1390
    ctx->pc = 0x19a72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962288));
    // 0x19a730: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19a730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19a734: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19a734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a738: 0x600008  jr          $v1
    ctx->pc = 0x19A738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A740u: goto label_19a740;
            case 0x19A758u: goto label_19a758;
            case 0x19A778u: goto label_19a778;
            case 0x19A798u: goto label_19a798;
            case 0x19A7B8u: goto label_19a7b8;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F8u: goto label_19a7f8;
            case 0x19A818u: goto label_19a818;
            case 0x19A838u: goto label_19a838;
            case 0x19A858u: goto label_19a858;
            case 0x19A878u: goto label_19a878;
            case 0x19A898u: goto label_19a898;
            case 0x19A8B8u: goto label_19a8b8;
            case 0x19A8D8u: goto label_19a8d8;
            case 0x19A8F8u: goto label_19a8f8;
            case 0x19A918u: goto label_19a918;
            case 0x19A978u: goto label_19a978;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A738u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19A740u;
label_19a740:
    // 0x19a740: 0x80c80000  lb          $t0, 0x0($a2)
    ctx->pc = 0x19a740u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a744: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x19a744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a748: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a74c: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x19a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x19a750: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x19a750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x19a754: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19a758:
    // 0x19a758: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a75c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a75cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a760: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a764: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a768: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a76c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a76cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a770: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a774: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a778:
    // 0x19a778: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a77c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a77cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a780: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a784: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a788: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a78c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a78cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a790: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a794: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a798:
    // 0x19a798: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a79c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a79cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a7a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a7a4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a7a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a7ac: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a7acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a7b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a7b4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a7b8:
    // 0x19a7b8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a7bc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a7bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a7c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a7c4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a7c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a7cc: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a7d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a7d4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a7d8:
    // 0x19a7d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a7dc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a7dcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a7e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a7e4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a7e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a7ec: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a7f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a7f4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a7f8:
    // 0x19a7f8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a7fc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a7fcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a800: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a804: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a808: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a80c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a80cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a810: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a814: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a818:
    // 0x19a818: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a81c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a81cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a820: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a824: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a828: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a82c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a830: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a834: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a838:
    // 0x19a838: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a83c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a83cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a840: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a844: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a848: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a84c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a84cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a850: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a854: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a858:
    // 0x19a858: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a85c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a85cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a860: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a864: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a868: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a86c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a86cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a870: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a874: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a878:
    // 0x19a878: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a87c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a87cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a880: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a884: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a888: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a88c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a890: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a894: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a898:
    // 0x19a898: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a89c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a89cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a8a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a8a4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a8a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a8ac: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a8acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a8b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a8b4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a8b8:
    // 0x19a8b8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a8bc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a8bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a8c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a8c4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a8c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a8cc: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a8d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a8d4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a8d8:
    // 0x19a8d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a8dc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a8dcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a8e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a8e4: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a8e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a8ec: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a8f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a8f4: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a8f8:
    // 0x19a8f8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a8fc: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x19a8fcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a900: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a904: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a908: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a90c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x19a90cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19a910: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a914: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19a914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19a918:
    // 0x19a918: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a91c: 0x80c60000  lb          $a2, 0x0($a2)
    ctx->pc = 0x19a91cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a920: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a924: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19a924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19a928: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19a928u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19a92c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a930: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19A930u;
    {
        const bool branch_taken_0x19a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A930u;
        // 0x19a934: 0xac43d4c8  sw          $v1, -0x2B38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a930) {
            ctx->pc = 0x19A978u;
            goto label_19a978;
        }
    }
    ctx->pc = 0x19A938u;
label_19a938:
    // 0x19a938: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x19a938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19a93c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a940: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x19a940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19a944: 0x8c48d4c8  lw          $t0, -0x2B38($v0)
    ctx->pc = 0x19a944u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x19a948: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19a948u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19a94c: 0x80690000  lb          $t1, 0x0($v1)
    ctx->pc = 0x19a94cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a950: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x19a950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a954: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a958: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x19a958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19a95c: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x19a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x19a960: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19a960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19a964: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a968: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x19a968u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a96c: 0xac67d4c8  sw          $a3, -0x2B38($v1)
    ctx->pc = 0x19a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 7));
    // 0x19a970: 0xac46d4d0  sw          $a2, -0x2B30($v0)
    ctx->pc = 0x19a970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956240), GPR_U32(ctx, 6));
    // 0x19a974: 0x0  nop
    ctx->pc = 0x19a974u;
    // NOP
label_19a978:
    // 0x19a978: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a97c: 0x8c43d4d0  lw          $v1, -0x2B30($v0)
    ctx->pc = 0x19a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956240)));
    // 0x19a980: 0x186000b3  blez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x19A980u;
    {
        const bool branch_taken_0x19a980 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x19a980) {
            ctx->pc = 0x19AC50u;
            goto label_19ac50;
        }
    }
    ctx->pc = 0x19A988u;
    // 0x19a988: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x19a988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19a98c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x19a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x19a990: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a994: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19a994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19a998: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x19A998u;
    {
        const bool branch_taken_0x19a998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a998) {
            ctx->pc = 0x19AC10u;
            goto label_19ac10;
        }
    }
    ctx->pc = 0x19A9A0u;
    // 0x19a9a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19a9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19a9a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a9a8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x19a9a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x19a9ac: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19a9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19a9b0: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x19a9b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a9b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19a9b8: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x19a9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x19a9bc: 0x52103  sra         $a0, $a1, 4
    ctx->pc = 0x19a9bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
    // 0x19a9c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19a9c4: 0x3087000f  andi        $a3, $a0, 0xF
    ctx->pc = 0x19a9c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x19a9c8: 0x8c42d4c8  lw          $v0, -0x2B38($v0)
    ctx->pc = 0x19a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x19a9cc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x19a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x19a9d0: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x19a9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x19a9d4: 0x2484e930  addiu       $a0, $a0, -0x16D0
    ctx->pc = 0x19a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
    // 0x19a9d8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x19a9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19a9dc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x19a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19a9e0: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x19a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19a9e4: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x19a9e4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a9e8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x19a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x19a9ec: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x19a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19a9f0: 0x2cc10011  sltiu       $at, $a2, 0x11
    ctx->pc = 0x19a9f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19a9f4: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x19A9F4u;
    {
        const bool branch_taken_0x19a9f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9F4u;
        // 0x19a9f8: 0xaca3d4d0  sw          $v1, -0x2B30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294956240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9f4) {
            ctx->pc = 0x19AC50u;
            goto label_19ac50;
        }
    }
    ctx->pc = 0x19A9FCu;
    // 0x19a9fc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x19a9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x19aa00: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x19aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19aa04: 0x24a5ec20  addiu       $a1, $a1, -0x13E0
    ctx->pc = 0x19aa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962208));
    // 0x19aa08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19aa0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19aa10: 0x600008  jr          $v1
    ctx->pc = 0x19AA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AA18u: goto label_19aa18;
            case 0x19AA30u: goto label_19aa30;
            case 0x19AA50u: goto label_19aa50;
            case 0x19AA70u: goto label_19aa70;
            case 0x19AA90u: goto label_19aa90;
            case 0x19AAB0u: goto label_19aab0;
            case 0x19AAD0u: goto label_19aad0;
            case 0x19AAF0u: goto label_19aaf0;
            case 0x19AB10u: goto label_19ab10;
            case 0x19AB30u: goto label_19ab30;
            case 0x19AB50u: goto label_19ab50;
            case 0x19AB70u: goto label_19ab70;
            case 0x19AB90u: goto label_19ab90;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19ABF0u: goto label_19abf0;
            case 0x19AC50u: goto label_19ac50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AA10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19AA18u;
label_19aa18:
    // 0x19aa18: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x19aa18u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19aa1c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x19aa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19aa20: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19aa24: 0xac65d4c8  sw          $a1, -0x2B38($v1)
    ctx->pc = 0x19aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 5));
    // 0x19aa28: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x19aa28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19aa2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19aa30:
    // 0x19aa30: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19aa34: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19aa34u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19aa38: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19aa3c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19aa40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19aa44: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19aa44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19aa48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19aa4c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19aa50:
    // 0x19aa50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19aa54: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19aa54u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19aa58: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19aa5c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19aa60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19aa64: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19aa64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19aa68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19aa6c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19aa70:
    // 0x19aa70: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19aa74: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19aa74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19aa78: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19aa7c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19aa80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19aa84: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19aa84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19aa88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19aa8c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19aa90:
    // 0x19aa90: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19aa94: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19aa94u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19aa98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19aa9c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19aaa0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19aaa4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19aaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19aaa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19aaac: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19aab0:
    // 0x19aab0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19aab4: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19aab4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19aab8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19aabc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19aac0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19aac4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19aac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19aac8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19aacc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19aad0:
    // 0x19aad0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19aad4: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19aad4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19aad8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19aadc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19aae0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19aae4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19aae4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19aae8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19aaec: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19aaf0:
    // 0x19aaf0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19aaf4: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19aaf4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19aaf8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19aafc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19ab00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19ab04: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19ab04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19ab08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ab0c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19ab10:
    // 0x19ab10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ab14: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19ab14u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ab18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ab1c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19ab20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19ab24: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19ab24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19ab28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ab2c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19ab30:
    // 0x19ab30: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ab34: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19ab34u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ab38: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ab3c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19ab40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19ab40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19ab44: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19ab44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19ab48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ab4c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19ab50:
    // 0x19ab50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ab54: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19ab54u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ab58: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ab5c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19ab60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19ab64: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19ab64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19ab68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ab6c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19ab70:
    // 0x19ab70: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ab74: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19ab74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ab78: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ab7c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19ab80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19ab84: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19ab84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19ab88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ab8c: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19ab90:
    // 0x19ab90: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ab94: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19ab94u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ab98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ab9c: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19aba0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19aba4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19aba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19aba8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19abac: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19abacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19abb0:
    // 0x19abb0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19abb4: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19abb4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19abb8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19abbc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19abc0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19abc4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19abc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19abc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19abcc: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19abccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19abd0:
    // 0x19abd0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19abd4: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19abd4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19abd8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19abdc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19abe0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19abe4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19abe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19abe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19abec: 0xac43d4c8  sw          $v1, -0x2B38($v0)
    ctx->pc = 0x19abecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
label_19abf0:
    // 0x19abf0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19abf4: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x19abf4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19abf8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19abfc: 0x8c63d4c8  lw          $v1, -0x2B38($v1)
    ctx->pc = 0x19abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956232)));
    // 0x19ac00: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19ac00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19ac04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ac08: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19AC08u;
    {
        const bool branch_taken_0x19ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC08u;
        // 0x19ac0c: 0xac43d4c8  sw          $v1, -0x2B38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac08) {
            ctx->pc = 0x19AC50u;
            goto label_19ac50;
        }
    }
    ctx->pc = 0x19AC10u;
label_19ac10:
    // 0x19ac10: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x19ac10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19ac14: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ac18: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x19ac18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19ac1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19ac1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19ac20: 0x8c46d4c8  lw          $a2, -0x2B38($v0)
    ctx->pc = 0x19ac20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956232)));
    // 0x19ac24: 0x80670000  lb          $a3, 0x0($v1)
    ctx->pc = 0x19ac24u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ac28: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x19ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ac2c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ac30: 0xac44d4c0  sw          $a0, -0x2B40($v0)
    ctx->pc = 0x19ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 4));
    // 0x19ac34: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ac38: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x19ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19ac3c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ac40: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x19ac40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19ac44: 0xac64d4c8  sw          $a0, -0x2B38($v1)
    ctx->pc = 0x19ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956232), GPR_U32(ctx, 4));
    // 0x19ac48: 0xac45d4d0  sw          $a1, -0x2B30($v0)
    ctx->pc = 0x19ac48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956240), GPR_U32(ctx, 5));
    // 0x19ac4c: 0x0  nop
    ctx->pc = 0x19ac4cu;
    // NOP
label_19ac50:
    // 0x19ac50: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ac54: 0x8c42d4d0  lw          $v0, -0x2B30($v0)
    ctx->pc = 0x19ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956240)));
    // 0x19ac58: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AC58u;
    {
        const bool branch_taken_0x19ac58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19ac58) {
            ctx->pc = 0x19AC70u;
            goto label_19ac70;
        }
    }
    ctx->pc = 0x19AC60u;
    // 0x19ac60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ac64: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ac68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19AC68u;
    {
        const bool branch_taken_0x19ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC68u;
        // 0x19ac6c: 0xac60d4c0  sw          $zero, -0x2B40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac68) {
            ctx->pc = 0x19AC94u;
            goto label_19ac94;
        }
    }
    ctx->pc = 0x19AC70u;
label_19ac70:
    // 0x19ac70: 0xc067d80  jal         func_19F600
    ctx->pc = 0x19AC70u;
    SET_GPR_U32(ctx, 31, 0x19AC78u);
    ctx->pc = 0x19F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F600u, 0x19AC70u, 0x19AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC78u;
label_19ac78:
    // 0x19ac78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ac78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac7c: 0xc067d7c  jal         func_19F5F0
    ctx->pc = 0x19AC7Cu;
    SET_GPR_U32(ctx, 31, 0x19AC84u);
    ctx->pc = 0x19AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC7Cu;
    // 0x19ac80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F5F0u, 0x19AC7Cu, 0x19AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC84u;
label_19ac84:
    // 0x19ac84: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x19ac84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x19ac88: 0x1440fa42  bnez        $v0, . + 4 + (-0x5BE << 2)
    ctx->pc = 0x19AC88u;
    {
        const bool branch_taken_0x19ac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ac88) {
            ctx->pc = 0x199594u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_199594;
        }
    }
    ctx->pc = 0x19AC90u;
    // 0x19ac90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ac90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ac94:
    // 0x19ac94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19ac94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ac98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19ac98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ac9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ac9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19aca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aca4: 0x3e00008  jr          $ra
    ctx->pc = 0x19ACA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACA4u;
        // 0x19aca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ACA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ACACu;
    // 0x19acac: 0x0  nop
    ctx->pc = 0x19acacu;
    // NOP
    if (ctx->pc == 0x19acacu) { ctx->pc = 0x19acb0u; }
}
