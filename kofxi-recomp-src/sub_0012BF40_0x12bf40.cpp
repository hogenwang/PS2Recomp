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

// Function: sub_0012BF40
// Address: 0x12bf40 - 0x12d490
void sub_0012BF40_0x12bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BF40_0x12bf40");
#endif

    switch (ctx->pc) {
        case 0x12bf80u: goto label_12bf80;
        case 0x12bfbcu: goto label_12bfbc;
        case 0x12bff8u: goto label_12bff8;
        case 0x12bffcu: goto label_12bffc;
        case 0x12c044u: goto label_12c044;
        case 0x12c054u: goto label_12c054;
        case 0x12c06cu: goto label_12c06c;
        case 0x12c074u: goto label_12c074;
        case 0x12c0b8u: goto label_12c0b8;
        case 0x12c0e8u: goto label_12c0e8;
        case 0x12c0ecu: goto label_12c0ec;
        case 0x12c0f8u: goto label_12c0f8;
        case 0x12c12cu: goto label_12c12c;
        case 0x12c134u: goto label_12c134;
        case 0x12c148u: goto label_12c148;
        case 0x12c180u: goto label_12c180;
        case 0x12c1dcu: goto label_12c1dc;
        case 0x12c230u: goto label_12c230;
        case 0x12c278u: goto label_12c278;
        case 0x12c280u: goto label_12c280;
        case 0x12c298u: goto label_12c298;
        case 0x12c2f4u: goto label_12c2f4;
        case 0x12c2f8u: goto label_12c2f8;
        case 0x12c314u: goto label_12c314;
        case 0x12c348u: goto label_12c348;
        case 0x12c37cu: goto label_12c37c;
        case 0x12c3d4u: goto label_12c3d4;
        case 0x12c3e0u: goto label_12c3e0;
        case 0x12c42cu: goto label_12c42c;
        case 0x12c434u: goto label_12c434;
        case 0x12c438u: goto label_12c438;
        case 0x12c450u: goto label_12c450;
        case 0x12c454u: goto label_12c454;
        case 0x12c484u: goto label_12c484;
        case 0x12c4b8u: goto label_12c4b8;
        case 0x12c510u: goto label_12c510;
        case 0x12c53cu: goto label_12c53c;
        case 0x12c570u: goto label_12c570;
        case 0x12c5c8u: goto label_12c5c8;
        case 0x12c5f4u: goto label_12c5f4;
        case 0x12c600u: goto label_12c600;
        case 0x12c620u: goto label_12c620;
        case 0x12c628u: goto label_12c628;
        case 0x12c62cu: goto label_12c62c;
        case 0x12c65cu: goto label_12c65c;
        case 0x12c690u: goto label_12c690;
        case 0x12c6e4u: goto label_12c6e4;
        case 0x12c718u: goto label_12c718;
        case 0x12c740u: goto label_12c740;
        case 0x12c78cu: goto label_12c78c;
        case 0x12c7f0u: goto label_12c7f0;
        case 0x12c81cu: goto label_12c81c;
        case 0x12c850u: goto label_12c850;
        case 0x12c8e0u: goto label_12c8e0;
        case 0x12c93cu: goto label_12c93c;
        case 0x12c968u: goto label_12c968;
        case 0x12c99cu: goto label_12c99c;
        case 0x12c9f4u: goto label_12c9f4;
        case 0x12ca04u: goto label_12ca04;
        case 0x12ca60u: goto label_12ca60;
        case 0x12ca90u: goto label_12ca90;
        case 0x12cac4u: goto label_12cac4;
        case 0x12cb1cu: goto label_12cb1c;
        case 0x12cb88u: goto label_12cb88;
        case 0x12cbdcu: goto label_12cbdc;
        case 0x12cc64u: goto label_12cc64;
        case 0x12cc78u: goto label_12cc78;
        case 0x12ccb8u: goto label_12ccb8;
        case 0x12ccc4u: goto label_12ccc4;
        case 0x12ccccu: goto label_12cccc;
        case 0x12ccd0u: goto label_12ccd0;
        case 0x12cd10u: goto label_12cd10;
        case 0x12cd44u: goto label_12cd44;
        case 0x12cd78u: goto label_12cd78;
        case 0x12ce08u: goto label_12ce08;
        case 0x12ce70u: goto label_12ce70;
        case 0x12ce98u: goto label_12ce98;
        case 0x12cec0u: goto label_12cec0;
        case 0x12cec4u: goto label_12cec4;
        case 0x12ceccu: goto label_12cecc;
        case 0x12cf04u: goto label_12cf04;
        case 0x12cf18u: goto label_12cf18;
        case 0x12cf24u: goto label_12cf24;
        case 0x12cf40u: goto label_12cf40;
        case 0x12cfd4u: goto label_12cfd4;
        case 0x12cfdcu: goto label_12cfdc;
        case 0x12cfe0u: goto label_12cfe0;
        case 0x12d02cu: goto label_12d02c;
        case 0x12d034u: goto label_12d034;
        case 0x12d068u: goto label_12d068;
        case 0x12d080u: goto label_12d080;
        case 0x12d088u: goto label_12d088;
        case 0x12d104u: goto label_12d104;
        case 0x12d108u: goto label_12d108;
        case 0x12d128u: goto label_12d128;
        case 0x12d130u: goto label_12d130;
        case 0x12d140u: goto label_12d140;
        case 0x12d164u: goto label_12d164;
        case 0x12d1a8u: goto label_12d1a8;
        case 0x12d208u: goto label_12d208;
        case 0x12d230u: goto label_12d230;
        case 0x12d234u: goto label_12d234;
        case 0x12d348u: goto label_12d348;
        case 0x12d3f8u: goto label_12d3f8;
        case 0x12d414u: goto label_12d414;
        case 0x12d424u: goto label_12d424;
        case 0x12d458u: goto label_12d458;
        default: break;
    }

    ctx->pc = 0x12bf40u;

    // 0x12bf40: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x12bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x12bf44: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x12bf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x12bf48: 0xffb10238  sd          $s1, 0x238($sp)
    ctx->pc = 0x12bf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 17));
    // 0x12bf4c: 0xffb20240  sd          $s2, 0x240($sp)
    ctx->pc = 0x12bf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 18));
    // 0x12bf50: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12bf50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf54: 0xffb30248  sd          $s3, 0x248($sp)
    ctx->pc = 0x12bf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 19));
    // 0x12bf58: 0xffb40250  sd          $s4, 0x250($sp)
    ctx->pc = 0x12bf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 20));
    // 0x12bf5c: 0xffb50258  sd          $s5, 0x258($sp)
    ctx->pc = 0x12bf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 21));
    // 0x12bf60: 0xffb60260  sd          $s6, 0x260($sp)
    ctx->pc = 0x12bf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 22));
    // 0x12bf64: 0xffb70268  sd          $s7, 0x268($sp)
    ctx->pc = 0x12bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 23));
    // 0x12bf68: 0xffbe0270  sd          $fp, 0x270($sp)
    ctx->pc = 0x12bf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 30));
    // 0x12bf6c: 0xffbf0278  sd          $ra, 0x278($sp)
    ctx->pc = 0x12bf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
    // 0x12bf70: 0xafa501f4  sw          $a1, 0x1F4($sp)
    ctx->pc = 0x12bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 5));
    // 0x12bf74: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x12bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
    // 0x12bf78: 0xc049890  jal         func_126240
    ctx->pc = 0x12BF78u;
    SET_GPR_U32(ctx, 31, 0x12BF80u);
    ctx->pc = 0x12BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF78u;
    // 0x12bf7c: 0xafa701f8  sw          $a3, 0x1F8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126240u, 0x12BF78u, 0x12BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF80u;
label_12bf80:
    // 0x12bf80: 0x8fad01f4  lw          $t5, 0x1F4($sp)
    ctx->pc = 0x12bf80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12bf84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bf88: 0x95ae000c  lhu         $t6, 0xC($t5)
    ctx->pc = 0x12bf88u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x12bf8c: 0xffa00210  sd          $zero, 0x210($sp)
    ctx->pc = 0x12bf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 0));
    // 0x12bf90: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x12bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x12bf94: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x12bf94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x12bf98: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x12bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x12bf9c: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x12bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    // 0x12bfa0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BFA0u;
    {
        const bool branch_taken_0x12bfa0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFA0u;
        // 0x12bfa4: 0xafa001e4  sw          $zero, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfa0) {
            ctx->pc = 0x12BFB4u;
            goto label_12bfb4;
        }
    }
    ctx->pc = 0x12BFA8u;
    // 0x12bfa8: 0x8daf0010  lw          $t7, 0x10($t5)
    ctx->pc = 0x12bfa8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x12bfac: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BFACu;
    {
        const bool branch_taken_0x12bfac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFACu;
        // 0x12bfb0: 0x31ce001a  andi        $t6, $t6, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfac) {
            ctx->pc = 0x12BFD0u;
            goto label_12bfd0;
        }
    }
    ctx->pc = 0x12BFB4u;
label_12bfb4:
    // 0x12bfb4: 0xc04b9c6  jal         func_12E718
    ctx->pc = 0x12BFB4u;
    SET_GPR_U32(ctx, 31, 0x12BFBCu);
    ctx->pc = 0x12BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFB4u;
    // 0x12bfb8: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E718u, 0x12BFB4u, 0x12BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFBCu;
label_12bfbc:
    // 0x12bfbc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12BFBCu;
    {
        const bool branch_taken_0x12bfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFBCu;
        // 0x12bfc0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfbc) {
            ctx->pc = 0x12BFFCu;
            goto label_12bffc;
        }
    }
    ctx->pc = 0x12BFC4u;
    // 0x12bfc4: 0x8faf01f4  lw          $t7, 0x1F4($sp)
    ctx->pc = 0x12bfc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12bfc8: 0x95ee000c  lhu         $t6, 0xC($t7)
    ctx->pc = 0x12bfc8u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x12bfcc: 0x31ce001a  andi        $t6, $t6, 0x1A
    ctx->pc = 0x12bfccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)26);
label_12bfd0:
    // 0x12bfd0: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x12bfd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12bfd4: 0x15cf0016  bne         $t6, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x12BFD4u;
    {
        const bool branch_taken_0x12bfd4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFD4u;
        // 0x12bfd8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfd4) {
            ctx->pc = 0x12C030u;
            goto label_12c030;
        }
    }
    ctx->pc = 0x12BFDCu;
    // 0x12bfdc: 0x8fad01f4  lw          $t5, 0x1F4($sp)
    ctx->pc = 0x12bfdcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12bfe0: 0x85af000e  lh          $t7, 0xE($t5)
    ctx->pc = 0x12bfe0u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 14)));
    // 0x12bfe4: 0x5e00012  bltz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x12BFE4u;
    {
        const bool branch_taken_0x12bfe4 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x12BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFE4u;
        // 0x12bfe8: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfe4) {
            ctx->pc = 0x12C030u;
            goto label_12c030;
        }
    }
    ctx->pc = 0x12BFECu;
    // 0x12bfec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12bfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bff0: 0xc04af86  jal         func_12BE18
    ctx->pc = 0x12BFF0u;
    SET_GPR_U32(ctx, 31, 0x12BFF8u);
    ctx->pc = 0x12BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFF0u;
    // 0x12bff4: 0x8fa601f8  lw          $a2, 0x1F8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BE18u, 0x12BFF0u, 0x12BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFF8u;
label_12bff8:
    // 0x12bff8: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x12bff8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12bffc:
    // 0x12bffc: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x12bffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x12c000: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x12c000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c004: 0xdfb10238  ld          $s1, 0x238($sp)
    ctx->pc = 0x12c004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x12c008: 0xdfb20240  ld          $s2, 0x240($sp)
    ctx->pc = 0x12c008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x12c00c: 0xdfb30248  ld          $s3, 0x248($sp)
    ctx->pc = 0x12c00cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x12c010: 0xdfb40250  ld          $s4, 0x250($sp)
    ctx->pc = 0x12c010u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x12c014: 0xdfb50258  ld          $s5, 0x258($sp)
    ctx->pc = 0x12c014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x12c018: 0xdfb60260  ld          $s6, 0x260($sp)
    ctx->pc = 0x12c018u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x12c01c: 0xdfb70268  ld          $s7, 0x268($sp)
    ctx->pc = 0x12c01cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x12c020: 0xdfbe0270  ld          $fp, 0x270($sp)
    ctx->pc = 0x12c020u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x12c024: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x12c024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x12c028: 0x3e00008  jr          $ra
    ctx->pc = 0x12C028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C028u;
        // 0x12c02c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C030u;
label_12c030:
    // 0x12c030: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x12c030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x12c034: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x12c034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x12c038: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x12c038u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c03c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x12c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x12c040: 0xafa00200  sw          $zero, 0x200($sp)
    ctx->pc = 0x12c040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
label_12c044:
    // 0x12c044: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x12c044u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c048: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x12c048u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    // 0x12c04c: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x12c04cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x12c050: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x12c050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_12c054:
    // 0x12c054: 0x8e64bde8  lw          $a0, -0x4218($s3)
    ctx->pc = 0x12c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950376)));
    // 0x12c058: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x12c058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x12c05c: 0x8e47bdf0  lw          $a3, -0x4210($s2)
    ctx->pc = 0x12c05cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950384)));
    // 0x12c060: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12c060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c064: 0xc049bde  jal         func_126F78
    ctx->pc = 0x12C064u;
    SET_GPR_U32(ctx, 31, 0x12C06Cu);
    ctx->pc = 0x12C068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C064u;
    // 0x12c068: 0x27a801e4  addiu       $t0, $sp, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126F78u, 0x12C064u, 0x12C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C06Cu;
label_12c06c:
    // 0x12c06c: 0x1c400502  bgtz        $v0, . + 4 + (0x502 << 2)
    ctx->pc = 0x12C06Cu;
    {
        const bool branch_taken_0x12c06c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C06Cu;
        // 0x12c070: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c06c) {
            ctx->pc = 0x12D478u;
            goto label_12d478;
        }
    }
    ctx->pc = 0x12C074u;
label_12c074:
    // 0x12c074: 0x2b68823  subu        $s1, $s5, $s6
    ctx->pc = 0x12c074u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x12c078: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12C078u;
    {
        const bool branch_taken_0x12c078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c078) {
            ctx->pc = 0x12C0CCu;
            goto label_12c0cc;
        }
    }
    ctx->pc = 0x12C080u;
    // 0x12c080: 0xae910004  sw          $s1, 0x4($s4)
    ctx->pc = 0x12c080u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 17));
    // 0x12c084: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12c084u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12c088: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c088u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c08c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c08cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c090: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c094: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c094u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c098: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x12c098u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x12c09c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c0a0: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c0a0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c0a4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C0A4u;
    {
        const bool branch_taken_0x12c0a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0A4u;
        // 0x12c0a8: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0a4) {
            ctx->pc = 0x12C0C0u;
            goto label_12c0c0;
        }
    }
    ctx->pc = 0x12C0ACu;
    // 0x12c0ac: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c0b0: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C0B0u;
    SET_GPR_U32(ctx, 31, 0x12C0B8u);
    ctx->pc = 0x12C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C0B0u;
    // 0x12c0b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C0B0u, 0x12C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0B8u;
label_12c0b8:
    // 0x12c0b8: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x12C0B8u;
    {
        const bool branch_taken_0x12c0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0B8u;
        // 0x12c0bc: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0b8) {
            ctx->pc = 0x12C434u;
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C0C0u;
label_12c0c0:
    // 0x12c0c0: 0x8fae0200  lw          $t6, 0x200($sp)
    ctx->pc = 0x12c0c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12c0c4: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x12c0c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x12c0c8: 0xafae0200  sw          $t6, 0x200($sp)
    ctx->pc = 0x12c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 14));
label_12c0cc:
    // 0x12c0cc: 0x1a0004dd  blez        $s0, . + 4 + (0x4DD << 2)
    ctx->pc = 0x12C0CCu;
    {
        const bool branch_taken_0x12c0cc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0CCu;
        // 0x12c0d0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0cc) {
            ctx->pc = 0x12D444u;
            goto label_12d444;
        }
    }
    ctx->pc = 0x12C0D4u;
    // 0x12c0d4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x12c0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c0d8: 0xafa001fc  sw          $zero, 0x1FC($sp)
    ctx->pc = 0x12c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 0));
    // 0x12c0dc: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x12c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
    // 0x12c0e0: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12c0e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12c0e4: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x12c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_12c0e8:
    // 0x12c0e8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x12c0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12c0ec:
    // 0x12c0ec: 0x69e00  sll         $s3, $a2, 24
    ctx->pc = 0x12c0ecu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x12c0f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12c0f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12c0f4: 0x139e03  sra         $s3, $s3, 24
    ctx->pc = 0x12c0f4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 24));
label_12c0f8:
    // 0x12c0f8: 0x266effe0  addiu       $t6, $s3, -0x20
    ctx->pc = 0x12c0f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x12c0fc: 0x2dcf0059  sltiu       $t7, $t6, 0x59
    ctx->pc = 0x12c0fcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x12c100: 0x11e004ca  beqz        $t7, . + 4 + (0x4CA << 2)
    ctx->pc = 0x12C100u;
    {
        const bool branch_taken_0x12c100 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C100u;
        // 0x12c104: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c100) {
            ctx->pc = 0x12D42Cu;
            goto label_12d42c;
        }
    }
    ctx->pc = 0x12C108u;
    // 0x12c108: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12c108u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x12c10c: 0x25cebc08  addiu       $t6, $t6, -0x43F8
    ctx->pc = 0x12c10cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949896));
    // 0x12c110: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12c110u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12c114: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12c114u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12c118: 0x1a00008  jr          $t5
    ctx->pc = 0x12C118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C120u: goto label_12c120;
            case 0x12C13Cu: goto label_12c13c;
            case 0x12C150u: goto label_12c150;
            case 0x12C174u: goto label_12c174;
            case 0x12C188u: goto label_12c188;
            case 0x12C190u: goto label_12c190;
            case 0x12C210u: goto label_12c210;
            case 0x12C224u: goto label_12c224;
            case 0x12C258u: goto label_12c258;
            case 0x12C264u: goto label_12c264;
            case 0x12CFA4u: goto label_12cfa4;
            case 0x12CFB4u: goto label_12cfb4;
            case 0x12CFC0u: goto label_12cfc0;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D018u: goto label_12d018;
            case 0x12D060u: goto label_12d060;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D328u: goto label_12d328;
            case 0x12D384u: goto label_12d384;
            case 0x12D3B8u: goto label_12d3b8;
            case 0x12D3C8u: goto label_12d3c8;
            case 0x12D42Cu: goto label_12d42c;
            case 0x12D468u: goto label_12d468;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C118u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12C120u;
label_12c120:
    // 0x12c120: 0x83af0000  lb          $t7, 0x0($sp)
    ctx->pc = 0x12c120u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c124: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C124u;
    {
        const bool branch_taken_0x12c124 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C124u;
        // 0x12c128: 0x240e0020  addiu       $t6, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c124) {
            ctx->pc = 0x12C134u;
            goto label_12c134;
        }
    }
    ctx->pc = 0x12C12Cu;
label_12c12c:
    // 0x12c12c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x12C12Cu;
    {
        const bool branch_taken_0x12c12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C12Cu;
        // 0x12c130: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c12c) {
            ctx->pc = 0x12C0ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c0ec;
        }
    }
    ctx->pc = 0x12C134u;
label_12c134:
    // 0x12c134: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x12C134u;
    {
        const bool branch_taken_0x12c134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C134u;
        // 0x12c138: 0xa3ae0000  sb          $t6, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c134) {
            ctx->pc = 0x12C12Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c12c;
        }
    }
    ctx->pc = 0x12C13Cu;
label_12c13c:
    // 0x12c13c: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12c13cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12c140: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12c140u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12c144: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x12c144u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
label_12c148:
    // 0x12c148: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x12C148u;
    {
        const bool branch_taken_0x12c148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C148u;
        // 0x12c14c: 0xafaf01fc  sw          $t7, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c148) {
            ctx->pc = 0x12C0ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c0ec;
        }
    }
    ctx->pc = 0x12C150u;
label_12c150:
    // 0x12c150: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12c150u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12c154: 0x8fad01f8  lw          $t5, 0x1F8($sp)
    ctx->pc = 0x12c154u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12c158: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12c158u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12c15c: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12c15cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x12c160: 0xafaf0204  sw          $t7, 0x204($sp)
    ctx->pc = 0x12c160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 15));
    // 0x12c164: 0x5e1fff1  bgez        $t7, . + 4 + (-0xF << 2)
    ctx->pc = 0x12C164u;
    {
        const bool branch_taken_0x12c164 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x12C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C164u;
        // 0x12c168: 0xafad01f8  sw          $t5, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c164) {
            ctx->pc = 0x12C12Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c12c;
        }
    }
    ctx->pc = 0x12C16Cu;
    // 0x12c16c: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x12c16cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12c170: 0xafaf0204  sw          $t7, 0x204($sp)
    ctx->pc = 0x12c170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 15));
label_12c174:
    // 0x12c174: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12c174u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12c178: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12c178u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12c17c: 0x35ce0004  ori         $t6, $t6, 0x4
    ctx->pc = 0x12c17cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
label_12c180:
    // 0x12c180: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x12C180u;
    {
        const bool branch_taken_0x12c180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C180u;
        // 0x12c184: 0xafae01fc  sw          $t6, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c180) {
            ctx->pc = 0x12C0ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c0ec;
        }
    }
    ctx->pc = 0x12C188u;
label_12c188:
    // 0x12c188: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x12C188u;
    {
        const bool branch_taken_0x12c188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C188u;
        // 0x12c18c: 0x240e002b  addiu       $t6, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c188) {
            ctx->pc = 0x12C134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c134;
        }
    }
    ctx->pc = 0x12C190u;
label_12c190:
    // 0x12c190: 0x82b30000  lb          $s3, 0x0($s5)
    ctx->pc = 0x12c190u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12c194: 0x240f002a  addiu       $t7, $zero, 0x2A
    ctx->pc = 0x12c194u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x12c198: 0x166f000b  bne         $s3, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12C198u;
    {
        const bool branch_taken_0x12c198 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x12C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C198u;
        // 0x12c19c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c198) {
            ctx->pc = 0x12C1C8u;
            goto label_12c1c8;
        }
    }
    ctx->pc = 0x12C1A0u;
    // 0x12c1a0: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12c1a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12c1a4: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x12c1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12c1a8: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12c1a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12c1ac: 0xafaf01f8  sw          $t7, 0x1F8($sp)
    ctx->pc = 0x12c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
    // 0x12c1b0: 0x2a0fffff  slti        $t7, $s0, -0x1
    ctx->pc = 0x12c1b0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x12c1b4: 0x11e0ffdd  beqz        $t7, . + 4 + (-0x23 << 2)
    ctx->pc = 0x12C1B4u;
    {
        const bool branch_taken_0x12c1b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1B4u;
        // 0x12c1b8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1b4) {
            ctx->pc = 0x12C12Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c12c;
        }
    }
    ctx->pc = 0x12C1BCu;
    // 0x12c1bc: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x12C1BCu;
    {
        const bool branch_taken_0x12c1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1BCu;
        // 0x12c1c0: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1bc) {
            ctx->pc = 0x12C0E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c0e8;
        }
    }
    ctx->pc = 0x12C1C4u;
    // 0x12c1c4: 0x0  nop
    ctx->pc = 0x12c1c4u;
    // NOP
label_12c1c8:
    // 0x12c1c8: 0x266fffd0  addiu       $t7, $s3, -0x30
    ctx->pc = 0x12c1c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
    // 0x12c1cc: 0x2def000a  sltiu       $t7, $t7, 0xA
    ctx->pc = 0x12c1ccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12c1d0: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12C1D0u;
    {
        const bool branch_taken_0x12c1d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1D0u;
        // 0x12c1d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1d0) {
            ctx->pc = 0x12C1FCu;
            goto label_12c1fc;
        }
    }
    ctx->pc = 0x12C1D8u;
    // 0x12c1d8: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x12c1d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12c1dc:
    // 0x12c1dc: 0x20d7818  mult        $t7, $s0, $t5
    ctx->pc = 0x12c1dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x12c1e0: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x12c1e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x12c1e4: 0x82b30000  lb          $s3, 0x0($s5)
    ctx->pc = 0x12c1e4u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12c1e8: 0x25f0ffd0  addiu       $s0, $t7, -0x30
    ctx->pc = 0x12c1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
    // 0x12c1ec: 0x266effd0  addiu       $t6, $s3, -0x30
    ctx->pc = 0x12c1ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
    // 0x12c1f0: 0x2dce000a  sltiu       $t6, $t6, 0xA
    ctx->pc = 0x12c1f0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12c1f4: 0x15c0fff9  bnez        $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12C1F4u;
    {
        const bool branch_taken_0x12c1f4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1F4u;
        // 0x12c1f8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1f4) {
            ctx->pc = 0x12C1DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c1dc;
        }
    }
    ctx->pc = 0x12C1FCu;
label_12c1fc:
    // 0x12c1fc: 0x2a0fffff  slti        $t7, $s0, -0x1
    ctx->pc = 0x12c1fcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x12c200: 0x11e0ffbd  beqz        $t7, . + 4 + (-0x43 << 2)
    ctx->pc = 0x12C200u;
    {
        const bool branch_taken_0x12c200 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C200u;
        // 0x12c204: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c200) {
            ctx->pc = 0x12C0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c0f8;
        }
    }
    ctx->pc = 0x12C208u;
    // 0x12c208: 0x1000ffbb  b           . + 4 + (-0x45 << 2)
    ctx->pc = 0x12C208u;
    {
        const bool branch_taken_0x12c208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C208u;
        // 0x12c20c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c208) {
            ctx->pc = 0x12C0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c0f8;
        }
    }
    ctx->pc = 0x12C210u;
label_12c210:
    // 0x12c210: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12c210u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12c214: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12c214u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12c218: 0x35ad0080  ori         $t5, $t5, 0x80
    ctx->pc = 0x12c218u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)128);
    // 0x12c21c: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x12C21Cu;
    {
        const bool branch_taken_0x12c21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C21Cu;
        // 0x12c220: 0xafad01fc  sw          $t5, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c21c) {
            ctx->pc = 0x12C0ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c0ec;
        }
    }
    ctx->pc = 0x12C224u;
label_12c224:
    // 0x12c224: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12c224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c228: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x12c228u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12c22c: 0x20e7818  mult        $t7, $s0, $t6
    ctx->pc = 0x12c22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_12c230:
    // 0x12c230: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x12c230u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x12c234: 0x82b30000  lb          $s3, 0x0($s5)
    ctx->pc = 0x12c234u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12c238: 0x25f0ffd0  addiu       $s0, $t7, -0x30
    ctx->pc = 0x12c238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
    // 0x12c23c: 0x266fffd0  addiu       $t7, $s3, -0x30
    ctx->pc = 0x12c23cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
    // 0x12c240: 0xafb00204  sw          $s0, 0x204($sp)
    ctx->pc = 0x12c240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 16));
    // 0x12c244: 0x2def000a  sltiu       $t7, $t7, 0xA
    ctx->pc = 0x12c244u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12c248: 0x11e0ffab  beqz        $t7, . + 4 + (-0x55 << 2)
    ctx->pc = 0x12C248u;
    {
        const bool branch_taken_0x12c248 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C248u;
        // 0x12c24c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c248) {
            ctx->pc = 0x12C0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c0f8;
        }
    }
    ctx->pc = 0x12C250u;
    // 0x12c250: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12C250u;
    {
        const bool branch_taken_0x12c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C250u;
        // 0x12c254: 0x20e7818  mult        $t7, $s0, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c250) {
            ctx->pc = 0x12C230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c230;
        }
    }
    ctx->pc = 0x12C258u;
label_12c258:
    // 0x12c258: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12c258u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12c25c: 0x35ce0010  ori         $t6, $t6, 0x10
    ctx->pc = 0x12c25cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
    // 0x12c260: 0xafae01fc  sw          $t6, 0x1FC($sp)
    ctx->pc = 0x12c260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
label_12c264:
    // 0x12c264: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12c264u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12c268: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12c268u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12c26c: 0x11e00344  beqz        $t7, . + 4 + (0x344 << 2)
    ctx->pc = 0x12C26Cu;
    {
        const bool branch_taken_0x12c26c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C26Cu;
        // 0x12c270: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c26c) {
            ctx->pc = 0x12CF80u;
            goto label_12cf80;
        }
    }
    ctx->pc = 0x12C274u;
    // 0x12c274: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x12c274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_12c278:
    // 0x12c278: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12c278u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12c27c: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12c280:
    // 0x12c280: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C280u;
    {
        const bool branch_taken_0x12c280 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C280u;
        // 0x12c284: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c280) {
            ctx->pc = 0x12C298u;
            goto label_12c298;
        }
    }
    ctx->pc = 0x12C288u;
    // 0x12c288: 0x240e002d  addiu       $t6, $zero, 0x2D
    ctx->pc = 0x12c288u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12c28c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x12c28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x12c290: 0xa3ae0000  sb          $t6, 0x0($sp)
    ctx->pc = 0x12c290u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x12c294: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12c294u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c298:
    // 0x12c298: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C298u;
    {
        const bool branch_taken_0x12c298 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x12C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C298u;
        // 0x12c29c: 0xafb1021c  sw          $s1, 0x21C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c298) {
            ctx->pc = 0x12C2B0u;
            goto label_12c2b0;
        }
    }
    ctx->pc = 0x12C2A0u;
    // 0x12c2a0: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12c2a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12c2a4: 0x240fff7f  addiu       $t7, $zero, -0x81
    ctx->pc = 0x12c2a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x12c2a8: 0x1af6824  and         $t5, $t5, $t7
    ctx->pc = 0x12c2a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x12c2ac: 0xafad01fc  sw          $t5, 0x1FC($sp)
    ctx->pc = 0x12c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
label_12c2b0:
    // 0x12c2b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C2B0u;
    {
        const bool branch_taken_0x12c2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2B0u;
        // 0x12c2b4: 0x27b601cc  addiu       $s6, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2b0) {
            ctx->pc = 0x12C2C4u;
            goto label_12c2c4;
        }
    }
    ctx->pc = 0x12C2B8u;
    // 0x12c2b8: 0x8faf021c  lw          $t7, 0x21C($sp)
    ctx->pc = 0x12c2b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x12c2bc: 0x11e00327  beqz        $t7, . + 4 + (0x327 << 2)
    ctx->pc = 0x12C2BCu;
    {
        const bool branch_taken_0x12c2bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c2bc) {
            ctx->pc = 0x12CF5Cu;
            goto label_12cf5c;
        }
    }
    ctx->pc = 0x12C2C4u;
label_12c2c4:
    // 0x12c2c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12c2c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c2c8: 0x11cf0310  beq         $t6, $t7, . + 4 + (0x310 << 2)
    ctx->pc = 0x12C2C8u;
    {
        const bool branch_taken_0x12c2c8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2C8u;
        // 0x12c2cc: 0x2c4f000a  sltiu       $t7, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2c8) {
            ctx->pc = 0x12CF0Cu;
            goto label_12cf0c;
        }
    }
    ctx->pc = 0x12C2D0u;
    // 0x12c2d0: 0x11c002ff  beqz        $t6, . + 4 + (0x2FF << 2)
    ctx->pc = 0x12C2D0u;
    {
        const bool branch_taken_0x12c2d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2D0u;
        // 0x12c2d4: 0x304f0007  andi        $t7, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2d0) {
            ctx->pc = 0x12CED0u;
            goto label_12ced0;
        }
    }
    ctx->pc = 0x12C2D8u;
    // 0x12c2d8: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x12c2d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c2dc: 0x11cf02ef  beq         $t6, $t7, . + 4 + (0x2EF << 2)
    ctx->pc = 0x12C2DCu;
    {
        const bool branch_taken_0x12c2dc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2DCu;
        // 0x12c2e0: 0x304f000f  andi        $t7, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2dc) {
            ctx->pc = 0x12CE9Cu;
            goto label_12ce9c;
        }
    }
    ctx->pc = 0x12C2E4u;
    // 0x12c2e4: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12c2e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12c2e8: 0x25f6bb90  addiu       $s6, $t7, -0x4470
    ctx->pc = 0x12c2e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949776));
    // 0x12c2ec: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x12C2ECu;
    SET_GPR_U32(ctx, 31, 0x12C2F4u);
    ctx->pc = 0x12C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2ECu;
    // 0x12c2f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x12C2ECu, 0x12C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2F4u;
label_12c2f4:
    // 0x12c2f4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x12c2f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12c2f8:
    // 0x12c2f8: 0x8fad021c  lw          $t5, 0x21C($sp)
    ctx->pc = 0x12c2f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x12c2fc: 0x3c0b82d  daddu       $s7, $fp, $zero
    ctx->pc = 0x12c2fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c300: 0x93ae0000  lbu         $t6, 0x0($sp)
    ctx->pc = 0x12c300u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c304: 0x3cd782a  slt         $t7, $fp, $t5
    ctx->pc = 0x12c304u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x12c308: 0x11c002df  beqz        $t6, . + 4 + (0x2DF << 2)
    ctx->pc = 0x12C308u;
    {
        const bool branch_taken_0x12c308 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C308u;
        // 0x12c30c: 0x1afb80b  movn        $s7, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c308) {
            ctx->pc = 0x12CE88u;
            goto label_12ce88;
        }
    }
    ctx->pc = 0x12C310u;
    // 0x12c310: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12c310u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_12c314:
    // 0x12c314: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12c314u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12c318: 0x31ef0084  andi        $t7, $t7, 0x84
    ctx->pc = 0x12c318u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)132);
    // 0x12c31c: 0x15e00030  bnez        $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x12C31Cu;
    {
        const bool branch_taken_0x12c31c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C31Cu;
        // 0x12c320: 0xafaf0224  sw          $t7, 0x224($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c31c) {
            ctx->pc = 0x12C3E0u;
            goto label_12c3e0;
        }
    }
    ctx->pc = 0x12C324u;
    // 0x12c324: 0x8fad0204  lw          $t5, 0x204($sp)
    ctx->pc = 0x12c324u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x12c328: 0x1b78023  subu        $s0, $t5, $s7
    ctx->pc = 0x12c328u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 23)));
    // 0x12c32c: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x12C32Cu;
    {
        const bool branch_taken_0x12c32c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C32Cu;
        // 0x12c330: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c32c) {
            ctx->pc = 0x12C3E0u;
            goto label_12c3e0;
        }
    }
    ctx->pc = 0x12C334u;
    // 0x12c334: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C334u;
    {
        const bool branch_taken_0x12c334 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C334u;
        // 0x12c338: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c334) {
            ctx->pc = 0x12C398u;
            goto label_12c398;
        }
    }
    ctx->pc = 0x12C33Cu;
    // 0x12c33c: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12c33cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c340: 0x25f1bb70  addiu       $s1, $t7, -0x4490
    ctx->pc = 0x12c340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949744));
    // 0x12c344: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12c344u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12c348:
    // 0x12c348: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12c348u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12c34c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c34cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c350: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c350u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c354: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c358: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c358u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c35c: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12c35cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12c360: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c364: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c364u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c368: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C368u;
    {
        const bool branch_taken_0x12c368 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C368u;
        // 0x12c36c: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c368) {
            ctx->pc = 0x12C384u;
            goto label_12c384;
        }
    }
    ctx->pc = 0x12C370u;
    // 0x12c370: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c374: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C374u;
    SET_GPR_U32(ctx, 31, 0x12C37Cu);
    ctx->pc = 0x12C378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C374u;
    // 0x12c378: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C374u, 0x12C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C37Cu;
label_12c37c:
    // 0x12c37c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x12C37Cu;
    {
        const bool branch_taken_0x12c37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C37Cu;
        // 0x12c380: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c37c) {
            ctx->pc = 0x12C434u;
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C384u;
label_12c384:
    // 0x12c384: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12c384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12c388: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12c388u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12c38c: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12C38Cu;
    {
        const bool branch_taken_0x12c38c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c38c) {
            ctx->pc = 0x12C390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C38Cu;
            // 0x12c390: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c348;
        }
    }
    ctx->pc = 0x12C394u;
    // 0x12c394: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12c394u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_12c398:
    // 0x12c398: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12c398u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12c39c: 0x25efbb70  addiu       $t7, $t7, -0x4490
    ctx->pc = 0x12c39cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949744));
    // 0x12c3a0: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12c3a4: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c3a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c3a8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c3a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c3ac: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12c3acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12c3b0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c3b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c3b4: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12c3b8: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c3bc: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c3bcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c3c0: 0x15e002af  bnez        $t7, . + 4 + (0x2AF << 2)
    ctx->pc = 0x12C3C0u;
    {
        const bool branch_taken_0x12c3c0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3C0u;
        // 0x12c3c4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3c0) {
            ctx->pc = 0x12CE80u;
            goto label_12ce80;
        }
    }
    ctx->pc = 0x12C3C8u;
    // 0x12c3c8: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c3cc: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C3CCu;
    SET_GPR_U32(ctx, 31, 0x12C3D4u);
    ctx->pc = 0x12C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C3CCu;
    // 0x12c3d0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C3CCu, 0x12C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3D4u;
label_12c3d4:
    // 0x12c3d4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x12C3D4u;
    {
        const bool branch_taken_0x12c3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3D4u;
        // 0x12c3d8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3d4) {
            ctx->pc = 0x12C434u;
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C3DCu;
    // 0x12c3dc: 0x93ae0000  lbu         $t6, 0x0($sp)
    ctx->pc = 0x12c3dcu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_12c3e0:
    // 0x12c3e0: 0xe7e00  sll         $t7, $t6, 24
    ctx->pc = 0x12c3e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x12c3e4: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x12c3e4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x12c3e8: 0x11e0028b  beqz        $t7, . + 4 + (0x28B << 2)
    ctx->pc = 0x12C3E8u;
    {
        const bool branch_taken_0x12c3e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3E8u;
        // 0x12c3ec: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3e8) {
            ctx->pc = 0x12CE18u;
            goto label_12ce18;
        }
    }
    ctx->pc = 0x12C3F0u;
    // 0x12c3f0: 0xae9d0000  sw          $sp, 0x0($s4)
    ctx->pc = 0x12c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 29));
    // 0x12c3f4: 0xae8f0004  sw          $t7, 0x4($s4)
    ctx->pc = 0x12c3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 15));
    // 0x12c3f8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c3f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c3fc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c3fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c400: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c400u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c404: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c404u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c408: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12c408u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12c40c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c410: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c410u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c414: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12C414u;
    {
        const bool branch_taken_0x12c414 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C414u;
        // 0x12c418: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c414) {
            ctx->pc = 0x12C450u;
            goto label_12c450;
        }
    }
    ctx->pc = 0x12C41Cu;
    // 0x12c41c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c420: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12c420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12c424: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C424u;
    SET_GPR_U32(ctx, 31, 0x12C42Cu);
    ctx->pc = 0x12C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C424u;
    // 0x12c428: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C424u, 0x12C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C42Cu;
label_12c42c:
    // 0x12c42c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12C42Cu;
    {
        const bool branch_taken_0x12c42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C42Cu;
        // 0x12c430: 0x8fad0224  lw          $t5, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c42c) {
            ctx->pc = 0x12C454u;
            goto label_12c454;
        }
    }
    ctx->pc = 0x12C434u;
label_12c434:
    // 0x12c434: 0x8fad01f4  lw          $t5, 0x1F4($sp)
    ctx->pc = 0x12c434u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_12c438:
    // 0x12c438: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12c438u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c43c: 0x95af000c  lhu         $t7, 0xC($t5)
    ctx->pc = 0x12c43cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x12c440: 0x8fad0200  lw          $t5, 0x200($sp)
    ctx->pc = 0x12c440u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12c444: 0x31ef0040  andi        $t7, $t7, 0x40
    ctx->pc = 0x12c444u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)64);
    // 0x12c448: 0x1000feec  b           . + 4 + (-0x114 << 2)
    ctx->pc = 0x12C448u;
    {
        const bool branch_taken_0x12c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C448u;
        // 0x12c44c: 0x1af700a  movz        $t6, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c448) {
            ctx->pc = 0x12BFFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bffc;
        }
    }
    ctx->pc = 0x12C450u;
label_12c450:
    // 0x12c450: 0x8fad0224  lw          $t5, 0x224($sp)
    ctx->pc = 0x12c450u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_12c454:
    // 0x12c454: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x12c454u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12c458: 0x15af0030  bne         $t5, $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x12C458u;
    {
        const bool branch_taken_0x12c458 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x12C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C458u;
        // 0x12c45c: 0x8faf021c  lw          $t7, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c458) {
            ctx->pc = 0x12C51Cu;
            goto label_12c51c;
        }
    }
    ctx->pc = 0x12C460u;
    // 0x12c460: 0x8fae0204  lw          $t6, 0x204($sp)
    ctx->pc = 0x12c460u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x12c464: 0x1d78023  subu        $s0, $t6, $s7
    ctx->pc = 0x12c464u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 23)));
    // 0x12c468: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12C468u;
    {
        const bool branch_taken_0x12c468 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C468u;
        // 0x12c46c: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c468) {
            ctx->pc = 0x12C518u;
            goto label_12c518;
        }
    }
    ctx->pc = 0x12C470u;
    // 0x12c470: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C470u;
    {
        const bool branch_taken_0x12c470 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C470u;
        // 0x12c474: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c470) {
            ctx->pc = 0x12C4D4u;
            goto label_12c4d4;
        }
    }
    ctx->pc = 0x12C478u;
    // 0x12c478: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12c478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c47c: 0x25f1bb80  addiu       $s1, $t7, -0x4480
    ctx->pc = 0x12c47cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12c480: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12c480u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12c484:
    // 0x12c484: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12c484u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12c488: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c488u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c48c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c48cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c490: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c494: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c494u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c498: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12c498u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12c49c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c4a0: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c4a0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c4a4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C4A4u;
    {
        const bool branch_taken_0x12c4a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4A4u;
        // 0x12c4a8: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4a4) {
            ctx->pc = 0x12C4C0u;
            goto label_12c4c0;
        }
    }
    ctx->pc = 0x12C4ACu;
    // 0x12c4ac: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c4b0: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C4B0u;
    SET_GPR_U32(ctx, 31, 0x12C4B8u);
    ctx->pc = 0x12C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4B0u;
    // 0x12c4b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C4B0u, 0x12C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4B8u;
label_12c4b8:
    // 0x12c4b8: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x12C4B8u;
    {
        const bool branch_taken_0x12c4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4B8u;
        // 0x12c4bc: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4b8) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C4C0u;
label_12c4c0:
    // 0x12c4c0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12c4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12c4c4: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12c4c4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12c4c8: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12C4C8u;
    {
        const bool branch_taken_0x12c4c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c4c8) {
            ctx->pc = 0x12C4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C4C8u;
            // 0x12c4cc: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C484u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c484;
        }
    }
    ctx->pc = 0x12C4D0u;
    // 0x12c4d0: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12c4d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_12c4d4:
    // 0x12c4d4: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12c4d8: 0x25efbb80  addiu       $t7, $t7, -0x4480
    ctx->pc = 0x12c4d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12c4dc: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12c4e0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c4e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c4e4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c4e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c4e8: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12c4e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12c4ec: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c4ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c4f0: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12c4f4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c4f8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c4f8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c4fc: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C4FCu;
    {
        const bool branch_taken_0x12c4fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4FCu;
        // 0x12c500: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4fc) {
            ctx->pc = 0x12C518u;
            goto label_12c518;
        }
    }
    ctx->pc = 0x12C504u;
    // 0x12c504: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c508: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C508u;
    SET_GPR_U32(ctx, 31, 0x12C510u);
    ctx->pc = 0x12C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C508u;
    // 0x12c50c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C508u, 0x12C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C510u;
label_12c510:
    // 0x12c510: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x12C510u;
    {
        const bool branch_taken_0x12c510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C510u;
        // 0x12c514: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c510) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C518u;
label_12c518:
    // 0x12c518: 0x8faf021c  lw          $t7, 0x21C($sp)
    ctx->pc = 0x12c518u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_12c51c:
    // 0x12c51c: 0x1fe8023  subu        $s0, $t7, $fp
    ctx->pc = 0x12c51cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 30)));
    // 0x12c520: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12C520u;
    {
        const bool branch_taken_0x12c520 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C520u;
        // 0x12c524: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c520) {
            ctx->pc = 0x12C5D0u;
            goto label_12c5d0;
        }
    }
    ctx->pc = 0x12C528u;
    // 0x12c528: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C528u;
    {
        const bool branch_taken_0x12c528 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C528u;
        // 0x12c52c: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c528) {
            ctx->pc = 0x12C58Cu;
            goto label_12c58c;
        }
    }
    ctx->pc = 0x12C530u;
    // 0x12c530: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12c530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c534: 0x25f1bb80  addiu       $s1, $t7, -0x4480
    ctx->pc = 0x12c534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12c538: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12c538u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12c53c:
    // 0x12c53c: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12c540: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c540u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c544: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c544u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c548: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c548u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c54c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c54cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c550: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12c550u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12c554: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c558: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c558u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c55c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C55Cu;
    {
        const bool branch_taken_0x12c55c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C55Cu;
        // 0x12c560: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c55c) {
            ctx->pc = 0x12C578u;
            goto label_12c578;
        }
    }
    ctx->pc = 0x12C564u;
    // 0x12c564: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c568: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C568u;
    SET_GPR_U32(ctx, 31, 0x12C570u);
    ctx->pc = 0x12C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C568u;
    // 0x12c56c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C568u, 0x12C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C570u;
label_12c570:
    // 0x12c570: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x12C570u;
    {
        const bool branch_taken_0x12c570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C570u;
        // 0x12c574: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c570) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C578u;
label_12c578:
    // 0x12c578: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12c578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12c57c: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12c57cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12c580: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12C580u;
    {
        const bool branch_taken_0x12c580 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c580) {
            ctx->pc = 0x12C584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C580u;
            // 0x12c584: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C53Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c53c;
        }
    }
    ctx->pc = 0x12C588u;
    // 0x12c588: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12c588u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_12c58c:
    // 0x12c58c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12c590: 0x25efbb80  addiu       $t7, $t7, -0x4480
    ctx->pc = 0x12c590u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12c594: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12c594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12c598: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c598u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c59c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c59cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c5a0: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12c5a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12c5a4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c5a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c5a8: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12c5ac: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c5b0: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c5b0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c5b4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C5B4u;
    {
        const bool branch_taken_0x12c5b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5B4u;
        // 0x12c5b8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5b4) {
            ctx->pc = 0x12C5D0u;
            goto label_12c5d0;
        }
    }
    ctx->pc = 0x12C5BCu;
    // 0x12c5bc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c5c0: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C5C0u;
    SET_GPR_U32(ctx, 31, 0x12C5C8u);
    ctx->pc = 0x12C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5C0u;
    // 0x12c5c4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C5C0u, 0x12C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5C8u;
label_12c5c8:
    // 0x12c5c8: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x12C5C8u;
    {
        const bool branch_taken_0x12c5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5C8u;
        // 0x12c5cc: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5c8) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C5D0u;
label_12c5d0:
    // 0x12c5d0: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12c5d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12c5d4: 0x31af0100  andi        $t7, $t5, 0x100
    ctx->pc = 0x12c5d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)256);
    // 0x12c5d8: 0x15e00054  bnez        $t7, . + 4 + (0x54 << 2)
    ctx->pc = 0x12C5D8u;
    {
        const bool branch_taken_0x12c5d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5D8u;
        // 0x12c5dc: 0x2a6f0066  slti        $t7, $s3, 0x66 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)102) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5d8) {
            ctx->pc = 0x12C72Cu;
            goto label_12c72c;
        }
    }
    ctx->pc = 0x12C5E0u;
    // 0x12c5e0: 0xae9e0004  sw          $fp, 0x4($s4)
    ctx->pc = 0x12c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 30));
    // 0x12c5e4: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12c5e8: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c5e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c5ec: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c5ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c5f0: 0x1de7021  addu        $t6, $t6, $fp
    ctx->pc = 0x12c5f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 30)));
label_12c5f4:
    // 0x12c5f4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c5f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c5f8: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12c5fc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c5fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12c600:
    // 0x12c600: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c604: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c604u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c608: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C608u;
    {
        const bool branch_taken_0x12c608 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C608u;
        // 0x12c60c: 0x8fad01fc  lw          $t5, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c608) {
            ctx->pc = 0x12C62Cu;
            goto label_12c62c;
        }
    }
    ctx->pc = 0x12C610u;
    // 0x12c610: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c614: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12c614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12c618: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C618u;
    SET_GPR_U32(ctx, 31, 0x12C620u);
    ctx->pc = 0x12C61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C618u;
    // 0x12c61c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C618u, 0x12C620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C620u;
label_12c620:
    // 0x12c620: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x12C620u;
    {
        const bool branch_taken_0x12c620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C620u;
        // 0x12c624: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c620) {
            ctx->pc = 0x12C438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c438;
        }
    }
    ctx->pc = 0x12C628u;
label_12c628:
    // 0x12c628: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12c628u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_12c62c:
    // 0x12c62c: 0x31af0004  andi        $t7, $t5, 0x4
    ctx->pc = 0x12c62cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x12c630: 0x11e0002e  beqz        $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x12C630u;
    {
        const bool branch_taken_0x12c630 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C630u;
        // 0x12c634: 0x8fae0204  lw          $t6, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c630) {
            ctx->pc = 0x12C6ECu;
            goto label_12c6ec;
        }
    }
    ctx->pc = 0x12C638u;
    // 0x12c638: 0x1d78023  subu        $s0, $t6, $s7
    ctx->pc = 0x12c638u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 23)));
    // 0x12c63c: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12C63Cu;
    {
        const bool branch_taken_0x12c63c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C63Cu;
        // 0x12c640: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c63c) {
            ctx->pc = 0x12C6ECu;
            goto label_12c6ec;
        }
    }
    ctx->pc = 0x12C644u;
    // 0x12c644: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x12C644u;
    {
        const bool branch_taken_0x12c644 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c644) {
            ctx->pc = 0x12C648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C644u;
            // 0x12c648: 0xae900004  sw          $s0, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C6ACu;
            goto label_12c6ac;
        }
    }
    ctx->pc = 0x12C64Cu;
    // 0x12c64c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12c64cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12c650: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c654: 0x25f1bb70  addiu       $s1, $t7, -0x4490
    ctx->pc = 0x12c654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949744));
    // 0x12c658: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12c658u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12c65c:
    // 0x12c65c: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12c660: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c660u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c664: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c664u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c668: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c668u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c66c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c66cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c670: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12c670u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12c674: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c678: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c678u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c67c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C67Cu;
    {
        const bool branch_taken_0x12c67c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C67Cu;
        // 0x12c680: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c67c) {
            ctx->pc = 0x12C698u;
            goto label_12c698;
        }
    }
    ctx->pc = 0x12C684u;
    // 0x12c684: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c688: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C688u;
    SET_GPR_U32(ctx, 31, 0x12C690u);
    ctx->pc = 0x12C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C688u;
    // 0x12c68c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C688u, 0x12C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C690u;
label_12c690:
    // 0x12c690: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x12C690u;
    {
        const bool branch_taken_0x12c690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C690u;
        // 0x12c694: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c690) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C698u;
label_12c698:
    // 0x12c698: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12c698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12c69c: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12c69cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12c6a0: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12C6A0u;
    {
        const bool branch_taken_0x12c6a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c6a0) {
            ctx->pc = 0x12C6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C6A0u;
            // 0x12c6a4: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C65Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c65c;
        }
    }
    ctx->pc = 0x12C6A8u;
    // 0x12c6a8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_12c6ac:
    // 0x12c6ac: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12c6acu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x12c6b0: 0x25cebb70  addiu       $t6, $t6, -0x4490
    ctx->pc = 0x12c6b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949744));
    // 0x12c6b4: 0x8fad0024  lw          $t5, 0x24($sp)
    ctx->pc = 0x12c6b4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c6b8: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12c6b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c6bc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12c6bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12c6c0: 0xae8e0000  sw          $t6, 0x0($s4)
    ctx->pc = 0x12c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 14));
    // 0x12c6c4: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12c6c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x12c6c8: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x12c6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x12c6cc: 0x29ad0008  slti        $t5, $t5, 0x8
    ctx->pc = 0x12c6ccu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c6d0: 0x15a00006  bnez        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C6D0u;
    {
        const bool branch_taken_0x12c6d0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6D0u;
        // 0x12c6d4: 0xafaf0028  sw          $t7, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6d0) {
            ctx->pc = 0x12C6ECu;
            goto label_12c6ec;
        }
    }
    ctx->pc = 0x12C6D8u;
    // 0x12c6d8: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c6dc: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C6DCu;
    SET_GPR_U32(ctx, 31, 0x12C6E4u);
    ctx->pc = 0x12C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6DCu;
    // 0x12c6e0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C6DCu, 0x12C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6E4u;
label_12c6e4:
    // 0x12c6e4: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x12C6E4u;
    {
        const bool branch_taken_0x12c6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6E4u;
        // 0x12c6e8: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6e4) {
            ctx->pc = 0x12C438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c438;
        }
    }
    ctx->pc = 0x12C6ECu;
label_12c6ec:
    // 0x12c6ec: 0x8fad0204  lw          $t5, 0x204($sp)
    ctx->pc = 0x12c6ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x12c6f0: 0x8fae0200  lw          $t6, 0x200($sp)
    ctx->pc = 0x12c6f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12c6f4: 0x2ed782a  slt         $t7, $s7, $t5
    ctx->pc = 0x12c6f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x12c6f8: 0x2ef680a  movz        $t5, $s7, $t7
    ctx->pc = 0x12c6f8u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 23));
    // 0x12c6fc: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x12c6fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x12c700: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12c700u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c704: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C704u;
    {
        const bool branch_taken_0x12c704 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C704u;
        // 0x12c708: 0xafae0200  sw          $t6, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c704) {
            ctx->pc = 0x12C720u;
            goto label_12c720;
        }
    }
    ctx->pc = 0x12C70Cu;
    // 0x12c70c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c710: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C710u;
    SET_GPR_U32(ctx, 31, 0x12C718u);
    ctx->pc = 0x12C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C710u;
    // 0x12c714: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C710u, 0x12C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C718u;
label_12c718:
    // 0x12c718: 0x1440ff47  bnez        $v0, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x12C718u;
    {
        const bool branch_taken_0x12c718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C718u;
        // 0x12c71c: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c718) {
            ctx->pc = 0x12C438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c438;
        }
    }
    ctx->pc = 0x12C720u;
label_12c720:
    // 0x12c720: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x12c720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x12c724: 0x1000fe47  b           . + 4 + (-0x1B9 << 2)
    ctx->pc = 0x12C724u;
    {
        const bool branch_taken_0x12c724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C724u;
        // 0x12c728: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c724) {
            ctx->pc = 0x12C044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c044;
        }
    }
    ctx->pc = 0x12C72Cu;
label_12c72c:
    // 0x12c72c: 0x15e00132  bnez        $t7, . + 4 + (0x132 << 2)
    ctx->pc = 0x12C72Cu;
    {
        const bool branch_taken_0x12c72c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C72Cu;
        // 0x12c730: 0x8faf01ec  lw          $t7, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c72c) {
            ctx->pc = 0x12CBF8u;
            goto label_12cbf8;
        }
    }
    ctx->pc = 0x12C734u;
    // 0x12c734: 0xdfa40210  ld          $a0, 0x210($sp)
    ctx->pc = 0x12c734u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12c738: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12C738u;
    SET_GPR_U32(ctx, 31, 0x12C740u);
    ctx->pc = 0x12C73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C738u;
    // 0x12c73c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12C738u, 0x12C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C740u;
label_12c740:
    // 0x12c740: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x12C740u;
    {
        const bool branch_taken_0x12c740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c740) {
            ctx->pc = 0x12C744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C740u;
            // 0x12c744: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C894u;
            goto label_12c894;
        }
    }
    ctx->pc = 0x12C748u;
    // 0x12c748: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12c748u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12c74c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12c74cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c750: 0x25efbbb0  addiu       $t7, $t7, -0x4450
    ctx->pc = 0x12c750u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949808));
    // 0x12c754: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12c754u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12c758: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12c758u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12c75c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c75cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c760: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c760u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c764: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12c764u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12c768: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c768u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c76c: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12c770: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c774: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c774u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c778: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C778u;
    {
        const bool branch_taken_0x12c778 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C778u;
        // 0x12c77c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c778) {
            ctx->pc = 0x12C794u;
            goto label_12c794;
        }
    }
    ctx->pc = 0x12C780u;
    // 0x12c780: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c784: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C784u;
    SET_GPR_U32(ctx, 31, 0x12C78Cu);
    ctx->pc = 0x12C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C784u;
    // 0x12c788: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C784u, 0x12C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C78Cu;
label_12c78c:
    // 0x12c78c: 0x1440ff29  bnez        $v0, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x12C78Cu;
    {
        const bool branch_taken_0x12c78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C78Cu;
        // 0x12c790: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c78c) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C794u;
label_12c794:
    // 0x12c794: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12c794u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c798: 0x8fae01ec  lw          $t6, 0x1EC($sp)
    ctx->pc = 0x12c798u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c79c: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x12c79cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x12c7a0: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C7A0u;
    {
        const bool branch_taken_0x12c7a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7A0u;
        // 0x12c7a4: 0x8faf0208  lw          $t7, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7a0) {
            ctx->pc = 0x12C7B8u;
            goto label_12c7b8;
        }
    }
    ctx->pc = 0x12C7A8u;
    // 0x12c7a8: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12c7a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12c7ac: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12c7acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12c7b0: 0x11e0ff9d  beqz        $t7, . + 4 + (-0x63 << 2)
    ctx->pc = 0x12C7B0u;
    {
        const bool branch_taken_0x12c7b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7B0u;
        // 0x12c7b4: 0x8faf0208  lw          $t7, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7b0) {
            ctx->pc = 0x12C628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c628;
        }
    }
    ctx->pc = 0x12C7B8u;
label_12c7b8:
    // 0x12c7b8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12c7bc: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12c7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12c7c0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c7c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c7c4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c7c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c7c8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12c7c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12c7cc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c7ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c7d0: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12c7d4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c7d8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c7d8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c7dc: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C7DCu;
    {
        const bool branch_taken_0x12c7dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7DCu;
        // 0x12c7e0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7dc) {
            ctx->pc = 0x12C7F8u;
            goto label_12c7f8;
        }
    }
    ctx->pc = 0x12C7E4u;
    // 0x12c7e4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c7e8: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C7E8u;
    SET_GPR_U32(ctx, 31, 0x12C7F0u);
    ctx->pc = 0x12C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C7E8u;
    // 0x12c7ec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C7E8u, 0x12C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7F0u;
label_12c7f0:
    // 0x12c7f0: 0x1440ff10  bnez        $v0, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x12C7F0u;
    {
        const bool branch_taken_0x12c7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7F0u;
        // 0x12c7f4: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7f0) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C7F8u;
label_12c7f8:
    // 0x12c7f8: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c7fc: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x12c7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12c800: 0x1a00ff89  blez        $s0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x12C800u;
    {
        const bool branch_taken_0x12c800 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C800u;
        // 0x12c804: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c800) {
            ctx->pc = 0x12C628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c628;
        }
    }
    ctx->pc = 0x12C808u;
    // 0x12c808: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C808u;
    {
        const bool branch_taken_0x12c808 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C808u;
        // 0x12c80c: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c808) {
            ctx->pc = 0x12C86Cu;
            goto label_12c86c;
        }
    }
    ctx->pc = 0x12C810u;
    // 0x12c810: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12c810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c814: 0x25f1bb80  addiu       $s1, $t7, -0x4480
    ctx->pc = 0x12c814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12c818: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12c818u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12c81c:
    // 0x12c81c: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12c820: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c820u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c824: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c824u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c828: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c828u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c82c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c82cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c830: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12c830u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12c834: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c838: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c838u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c83c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C83Cu;
    {
        const bool branch_taken_0x12c83c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C83Cu;
        // 0x12c840: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c83c) {
            ctx->pc = 0x12C858u;
            goto label_12c858;
        }
    }
    ctx->pc = 0x12C844u;
    // 0x12c844: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c848: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C848u;
    SET_GPR_U32(ctx, 31, 0x12C850u);
    ctx->pc = 0x12C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C848u;
    // 0x12c84c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C848u, 0x12C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C850u;
label_12c850:
    // 0x12c850: 0x1440fef8  bnez        $v0, . + 4 + (-0x108 << 2)
    ctx->pc = 0x12C850u;
    {
        const bool branch_taken_0x12c850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C850u;
        // 0x12c854: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c850) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C858u;
label_12c858:
    // 0x12c858: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12c858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12c85c: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12c85cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12c860: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12C860u;
    {
        const bool branch_taken_0x12c860 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c860) {
            ctx->pc = 0x12C864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C860u;
            // 0x12c864: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C81Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c81c;
        }
    }
    ctx->pc = 0x12C868u;
    // 0x12c868: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12c868u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_12c86c:
    // 0x12c86c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12c870: 0x25efbb80  addiu       $t7, $t7, -0x4480
    ctx->pc = 0x12c870u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12c874: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12c874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12c878: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c878u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c87c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c87cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c880: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c884: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12c884u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12c888: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c888u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c88c: 0x1000ff5c  b           . + 4 + (-0xA4 << 2)
    ctx->pc = 0x12C88Cu;
    {
        const bool branch_taken_0x12c88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C88Cu;
        // 0x12c890: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c88c) {
            ctx->pc = 0x12C600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c600;
        }
    }
    ctx->pc = 0x12C894u;
label_12c894:
    // 0x12c894: 0x1ca00060  bgtz        $a1, . + 4 + (0x60 << 2)
    ctx->pc = 0x12C894u;
    {
        const bool branch_taken_0x12c894 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x12C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C894u;
        // 0x12c898: 0x8fae01ec  lw          $t6, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c894) {
            ctx->pc = 0x12CA18u;
            goto label_12ca18;
        }
    }
    ctx->pc = 0x12C89Cu;
    // 0x12c89c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12c89cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12c8a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12c8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c8a4: 0x25efbbb0  addiu       $t7, $t7, -0x4450
    ctx->pc = 0x12c8a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949808));
    // 0x12c8a8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12c8ac: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12c8b0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c8b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c8b4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c8b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c8b8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12c8b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12c8bc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c8bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c8c0: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12c8c4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c8c8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c8c8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c8cc: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C8CCu;
    {
        const bool branch_taken_0x12c8cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8CCu;
        // 0x12c8d0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8cc) {
            ctx->pc = 0x12C8E8u;
            goto label_12c8e8;
        }
    }
    ctx->pc = 0x12C8D4u;
    // 0x12c8d4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c8d8: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C8D8u;
    SET_GPR_U32(ctx, 31, 0x12C8E0u);
    ctx->pc = 0x12C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8D8u;
    // 0x12c8dc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C8D8u, 0x12C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8E0u;
label_12c8e0:
    // 0x12c8e0: 0x1440fed4  bnez        $v0, . + 4 + (-0x12C << 2)
    ctx->pc = 0x12C8E0u;
    {
        const bool branch_taken_0x12c8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8E0u;
        // 0x12c8e4: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8e0) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C8E8u;
label_12c8e8:
    // 0x12c8e8: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12c8e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c8ec: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C8ECu;
    {
        const bool branch_taken_0x12c8ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c8ec) {
            ctx->pc = 0x12C8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C8ECu;
            // 0x12c8f0: 0xae900004  sw          $s0, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C904u;
            goto label_12c904;
        }
    }
    ctx->pc = 0x12C8F4u;
    // 0x12c8f4: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12c8f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c8f8: 0x11e0ff4c  beqz        $t7, . + 4 + (-0xB4 << 2)
    ctx->pc = 0x12C8F8u;
    {
        const bool branch_taken_0x12c8f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8F8u;
        // 0x12c8fc: 0x8fad01fc  lw          $t5, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8f8) {
            ctx->pc = 0x12C62Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c62c;
        }
    }
    ctx->pc = 0x12C900u;
    // 0x12c900: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12c900u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_12c904:
    // 0x12c904: 0x8fad0208  lw          $t5, 0x208($sp)
    ctx->pc = 0x12c904u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x12c908: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c908u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c90c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c90cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c910: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c910u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c914: 0xae8d0000  sw          $t5, 0x0($s4)
    ctx->pc = 0x12c914u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 13));
    // 0x12c918: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12c918u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12c91c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c920: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12c920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12c924: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c924u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c928: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C928u;
    {
        const bool branch_taken_0x12c928 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C928u;
        // 0x12c92c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c928) {
            ctx->pc = 0x12C944u;
            goto label_12c944;
        }
    }
    ctx->pc = 0x12C930u;
    // 0x12c930: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c934: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C934u;
    SET_GPR_U32(ctx, 31, 0x12C93Cu);
    ctx->pc = 0x12C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C934u;
    // 0x12c938: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C934u, 0x12C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C93Cu;
label_12c93c:
    // 0x12c93c: 0x1440febd  bnez        $v0, . + 4 + (-0x143 << 2)
    ctx->pc = 0x12C93Cu;
    {
        const bool branch_taken_0x12c93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C93Cu;
        // 0x12c940: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c93c) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C944u;
label_12c944:
    // 0x12c944: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12c944u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c948: 0xf8023  negu        $s0, $t7
    ctx->pc = 0x12c948u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12c94c: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12C94Cu;
    {
        const bool branch_taken_0x12c94c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C94Cu;
        // 0x12c950: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c94c) {
            ctx->pc = 0x12C9FCu;
            goto label_12c9fc;
        }
    }
    ctx->pc = 0x12C954u;
    // 0x12c954: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C954u;
    {
        const bool branch_taken_0x12c954 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C954u;
        // 0x12c958: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c954) {
            ctx->pc = 0x12C9B8u;
            goto label_12c9b8;
        }
    }
    ctx->pc = 0x12C95Cu;
    // 0x12c95c: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12c95cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c960: 0x25f1bb80  addiu       $s1, $t7, -0x4480
    ctx->pc = 0x12c960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12c964: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12c964u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12c968:
    // 0x12c968: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12c968u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12c96c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c96cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c970: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c970u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c974: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c974u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c978: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c978u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c97c: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12c97cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12c980: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c984: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c984u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c988: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C988u;
    {
        const bool branch_taken_0x12c988 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C988u;
        // 0x12c98c: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c988) {
            ctx->pc = 0x12C9A4u;
            goto label_12c9a4;
        }
    }
    ctx->pc = 0x12C990u;
    // 0x12c990: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c994: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C994u;
    SET_GPR_U32(ctx, 31, 0x12C99Cu);
    ctx->pc = 0x12C998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C994u;
    // 0x12c998: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C994u, 0x12C99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C99Cu;
label_12c99c:
    // 0x12c99c: 0x1440fea5  bnez        $v0, . + 4 + (-0x15B << 2)
    ctx->pc = 0x12C99Cu;
    {
        const bool branch_taken_0x12c99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C99Cu;
        // 0x12c9a0: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c99c) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C9A4u;
label_12c9a4:
    // 0x12c9a4: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12c9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12c9a8: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12c9a8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12c9ac: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12C9ACu;
    {
        const bool branch_taken_0x12c9ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c9ac) {
            ctx->pc = 0x12C9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C9ACu;
            // 0x12c9b0: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c968;
        }
    }
    ctx->pc = 0x12C9B4u;
    // 0x12c9b4: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12c9b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_12c9b8:
    // 0x12c9b8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12c9bc: 0x25efbb80  addiu       $t7, $t7, -0x4480
    ctx->pc = 0x12c9bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12c9c0: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12c9c4: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12c9c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c9c8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12c9c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12c9cc: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12c9ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12c9d0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c9d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c9d4: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12c9d8: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12c9dc: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12c9dcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c9e0: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C9E0u;
    {
        const bool branch_taken_0x12c9e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9E0u;
        // 0x12c9e4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9e0) {
            ctx->pc = 0x12C9FCu;
            goto label_12c9fc;
        }
    }
    ctx->pc = 0x12C9E8u;
    // 0x12c9e8: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12c9ec: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12C9ECu;
    SET_GPR_U32(ctx, 31, 0x12C9F4u);
    ctx->pc = 0x12C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9ECu;
    // 0x12c9f0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12C9ECu, 0x12C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9F4u;
label_12c9f4:
    // 0x12c9f4: 0x1440fe8f  bnez        $v0, . + 4 + (-0x171 << 2)
    ctx->pc = 0x12C9F4u;
    {
        const bool branch_taken_0x12c9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9F4u;
        // 0x12c9f8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9f4) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12C9FCu;
label_12c9fc:
    // 0x12c9fc: 0x8fad01ec  lw          $t5, 0x1EC($sp)
    ctx->pc = 0x12c9fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ca00: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
label_12ca04:
    // 0x12ca04: 0xae8d0004  sw          $t5, 0x4($s4)
    ctx->pc = 0x12ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 13));
    // 0x12ca08: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12ca08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ca0c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ca0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ca10: 0x1000fef8  b           . + 4 + (-0x108 << 2)
    ctx->pc = 0x12CA10u;
    {
        const bool branch_taken_0x12ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA10u;
        // 0x12ca14: 0x1cd7021  addu        $t6, $t6, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca10) {
            ctx->pc = 0x12C5F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c5f4;
        }
    }
    ctx->pc = 0x12CA18u;
label_12ca18:
    // 0x12ca18: 0xae782a  slt         $t7, $a1, $t6
    ctx->pc = 0x12ca18u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x12ca1c: 0x55e0004d  bnel        $t7, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x12CA1Cu;
    {
        const bool branch_taken_0x12ca1c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ca1c) {
            ctx->pc = 0x12CA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CA1Cu;
            // 0x12ca20: 0xae850004  sw          $a1, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CB54u;
            goto label_12cb54;
        }
    }
    ctx->pc = 0x12CA24u;
    // 0x12ca24: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12ca24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12ca28: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x12ca28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca2c: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12ca30: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12ca30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ca34: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12ca34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ca38: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ca38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ca3c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ca3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12ca40: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x12ca40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x12ca44: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12ca44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12ca48: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12ca48u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ca4c: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CA4Cu;
    {
        const bool branch_taken_0x12ca4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA4Cu;
        // 0x12ca50: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca4c) {
            ctx->pc = 0x12CA6Cu;
            goto label_12ca6c;
        }
    }
    ctx->pc = 0x12CA54u;
    // 0x12ca54: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12ca58: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12CA58u;
    SET_GPR_U32(ctx, 31, 0x12CA60u);
    ctx->pc = 0x12CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA58u;
    // 0x12ca5c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12CA58u, 0x12CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA60u;
label_12ca60:
    // 0x12ca60: 0x1440fe74  bnez        $v0, . + 4 + (-0x18C << 2)
    ctx->pc = 0x12CA60u;
    {
        const bool branch_taken_0x12ca60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA60u;
        // 0x12ca64: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca60) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12CA68u;
    // 0x12ca68: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x12ca68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12ca6c:
    // 0x12ca6c: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12ca6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12ca70: 0x1e28023  subu        $s0, $t7, $v0
    ctx->pc = 0x12ca70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x12ca74: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12CA74u;
    {
        const bool branch_taken_0x12ca74 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA74u;
        // 0x12ca78: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca74) {
            ctx->pc = 0x12CB24u;
            goto label_12cb24;
        }
    }
    ctx->pc = 0x12CA7Cu;
    // 0x12ca7c: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12CA7Cu;
    {
        const bool branch_taken_0x12ca7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA7Cu;
        // 0x12ca80: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca7c) {
            ctx->pc = 0x12CAE0u;
            goto label_12cae0;
        }
    }
    ctx->pc = 0x12CA84u;
    // 0x12ca84: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12ca84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12ca88: 0x25f1bb80  addiu       $s1, $t7, -0x4480
    ctx->pc = 0x12ca88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12ca8c: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12ca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12ca90:
    // 0x12ca90: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12ca94: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12ca94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ca98: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12ca98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ca9c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ca9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12caa0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12caa0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12caa4: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12caa4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12caa8: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12caac: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12caacu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cab0: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CAB0u;
    {
        const bool branch_taken_0x12cab0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAB0u;
        // 0x12cab4: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cab0) {
            ctx->pc = 0x12CACCu;
            goto label_12cacc;
        }
    }
    ctx->pc = 0x12CAB8u;
    // 0x12cab8: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12cab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12cabc: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12CABCu;
    SET_GPR_U32(ctx, 31, 0x12CAC4u);
    ctx->pc = 0x12CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CABCu;
    // 0x12cac0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12CABCu, 0x12CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAC4u;
label_12cac4:
    // 0x12cac4: 0x1440fe5b  bnez        $v0, . + 4 + (-0x1A5 << 2)
    ctx->pc = 0x12CAC4u;
    {
        const bool branch_taken_0x12cac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAC4u;
        // 0x12cac8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cac4) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12CACCu;
label_12cacc:
    // 0x12cacc: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12caccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12cad0: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12cad0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12cad4: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12CAD4u;
    {
        const bool branch_taken_0x12cad4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cad4) {
            ctx->pc = 0x12CAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CAD4u;
            // 0x12cad8: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CA90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ca90;
        }
    }
    ctx->pc = 0x12CADCu;
    // 0x12cadc: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12cadcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_12cae0:
    // 0x12cae0: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12cae4: 0x25efbb80  addiu       $t7, $t7, -0x4480
    ctx->pc = 0x12cae4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12cae8: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12caec: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12caecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12caf0: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12caf0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12caf4: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12caf4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12caf8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12caf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12cafc: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12cb00: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12cb04: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12cb04u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cb08: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CB08u;
    {
        const bool branch_taken_0x12cb08 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB08u;
        // 0x12cb0c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb08) {
            ctx->pc = 0x12CB24u;
            goto label_12cb24;
        }
    }
    ctx->pc = 0x12CB10u;
    // 0x12cb10: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12cb14: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12CB14u;
    SET_GPR_U32(ctx, 31, 0x12CB1Cu);
    ctx->pc = 0x12CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB14u;
    // 0x12cb18: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12CB14u, 0x12CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB1Cu;
label_12cb1c:
    // 0x12cb1c: 0x1440fe45  bnez        $v0, . + 4 + (-0x1BB << 2)
    ctx->pc = 0x12CB1Cu;
    {
        const bool branch_taken_0x12cb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB1Cu;
        // 0x12cb20: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb1c) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12CB24u;
label_12cb24:
    // 0x12cb24: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12cb24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12cb28: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12cb28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12cb2c: 0x11e0febe  beqz        $t7, . + 4 + (-0x142 << 2)
    ctx->pc = 0x12CB2Cu;
    {
        const bool branch_taken_0x12cb2c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB2Cu;
        // 0x12cb30: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb2c) {
            ctx->pc = 0x12C628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c628;
        }
    }
    ctx->pc = 0x12CB34u;
    // 0x12cb34: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12cb34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12cb38: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12cb3c: 0x25efbbb8  addiu       $t7, $t7, -0x4448
    ctx->pc = 0x12cb3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949816));
    // 0x12cb40: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12cb44: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12cb44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cb48: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12cb48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12cb4c: 0x1000fea9  b           . + 4 + (-0x157 << 2)
    ctx->pc = 0x12CB4Cu;
    {
        const bool branch_taken_0x12cb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB4Cu;
        // 0x12cb50: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb4c) {
            ctx->pc = 0x12C5F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c5f4;
        }
    }
    ctx->pc = 0x12CB54u;
label_12cb54:
    // 0x12cb54: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12cb58: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12cb58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12cb5c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12cb5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cb60: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12cb60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12cb64: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12cb64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12cb68: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12cb68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12cb6c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12cb70: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12cb70u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cb74: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CB74u;
    {
        const bool branch_taken_0x12cb74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB74u;
        // 0x12cb78: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb74) {
            ctx->pc = 0x12CB94u;
            goto label_12cb94;
        }
    }
    ctx->pc = 0x12CB7Cu;
    // 0x12cb7c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12cb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12cb80: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12CB80u;
    SET_GPR_U32(ctx, 31, 0x12CB88u);
    ctx->pc = 0x12CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB80u;
    // 0x12cb84: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12CB80u, 0x12CB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB88u;
label_12cb88:
    // 0x12cb88: 0x1440fe2a  bnez        $v0, . + 4 + (-0x1D6 << 2)
    ctx->pc = 0x12CB88u;
    {
        const bool branch_taken_0x12cb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB88u;
        // 0x12cb8c: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb88) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12CB90u;
    // 0x12cb90: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x12cb90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12cb94:
    // 0x12cb94: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12cb94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12cb98: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12cb98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cb9c: 0x25efbbb8  addiu       $t7, $t7, -0x4448
    ctx->pc = 0x12cb9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949816));
    // 0x12cba0: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12cba4: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12cba8: 0x2c5b021  addu        $s6, $s6, $a1
    ctx->pc = 0x12cba8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x12cbac: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12cbacu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cbb0: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12cbb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12cbb4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12cbb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12cbb8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12cbb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12cbbc: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12cbc0: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12cbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12cbc4: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12cbc4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cbc8: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CBC8u;
    {
        const bool branch_taken_0x12cbc8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBC8u;
        // 0x12cbcc: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbc8) {
            ctx->pc = 0x12CBE4u;
            goto label_12cbe4;
        }
    }
    ctx->pc = 0x12CBD0u;
    // 0x12cbd0: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12cbd4: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12CBD4u;
    SET_GPR_U32(ctx, 31, 0x12CBDCu);
    ctx->pc = 0x12CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CBD4u;
    // 0x12cbd8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12CBD4u, 0x12CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CBDCu;
label_12cbdc:
    // 0x12cbdc: 0x1440fe15  bnez        $v0, . + 4 + (-0x1EB << 2)
    ctx->pc = 0x12CBDCu;
    {
        const bool branch_taken_0x12cbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBDCu;
        // 0x12cbe0: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbdc) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12CBE4u;
label_12cbe4:
    // 0x12cbe4: 0x8fad01ec  lw          $t5, 0x1EC($sp)
    ctx->pc = 0x12cbe4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12cbe8: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12cbe8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12cbec: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12cbf0: 0x1000ff84  b           . + 4 + (-0x7C << 2)
    ctx->pc = 0x12CBF0u;
    {
        const bool branch_taken_0x12cbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBF0u;
        // 0x12cbf4: 0x1af6823  subu        $t5, $t5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbf0) {
            ctx->pc = 0x12CA04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ca04;
        }
    }
    ctx->pc = 0x12CBF8u;
label_12cbf8:
    // 0x12cbf8: 0x29ef0002  slti        $t7, $t7, 0x2
    ctx->pc = 0x12cbf8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12cbfc: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CBFCu;
    {
        const bool branch_taken_0x12cbfc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBFCu;
        // 0x12cc00: 0x8fad01fc  lw          $t5, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbfc) {
            ctx->pc = 0x12CC10u;
            goto label_12cc10;
        }
    }
    ctx->pc = 0x12CC04u;
    // 0x12cc04: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12cc04u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12cc08: 0x11e00071  beqz        $t7, . + 4 + (0x71 << 2)
    ctx->pc = 0x12CC08u;
    {
        const bool branch_taken_0x12cc08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC08u;
        // 0x12cc0c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc08) {
            ctx->pc = 0x12CDD0u;
            goto label_12cdd0;
        }
    }
    ctx->pc = 0x12CC10u;
label_12cc10:
    // 0x12cc10: 0x92cf0000  lbu         $t7, 0x0($s6)
    ctx->pc = 0x12cc10u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12cc14: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x12cc14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cc18: 0xa3af01d0  sb          $t7, 0x1D0($sp)
    ctx->pc = 0x12cc18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 15));
    // 0x12cc1c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12cc1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x12cc20: 0x240f002e  addiu       $t7, $zero, 0x2E
    ctx->pc = 0x12cc20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x12cc24: 0xa3af01d1  sb          $t7, 0x1D1($sp)
    ctx->pc = 0x12cc24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 15));
    // 0x12cc28: 0x27af01d0  addiu       $t7, $sp, 0x1D0
    ctx->pc = 0x12cc28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x12cc2c: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12cc30: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12cc34: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12cc34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cc38: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12cc38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12cc3c: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x12cc3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x12cc40: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12cc40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12cc44: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12cc48: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12cc4c: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12cc4cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cc50: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CC50u;
    {
        const bool branch_taken_0x12cc50 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC50u;
        // 0x12cc54: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc50) {
            ctx->pc = 0x12CC6Cu;
            goto label_12cc6c;
        }
    }
    ctx->pc = 0x12CC58u;
    // 0x12cc58: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12cc5c: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12CC5Cu;
    SET_GPR_U32(ctx, 31, 0x12CC64u);
    ctx->pc = 0x12CC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC5Cu;
    // 0x12cc60: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12CC5Cu, 0x12CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC64u;
label_12cc64:
    // 0x12cc64: 0x1440fdf3  bnez        $v0, . + 4 + (-0x20D << 2)
    ctx->pc = 0x12CC64u;
    {
        const bool branch_taken_0x12cc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC64u;
        // 0x12cc68: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc64) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12CC6Cu;
label_12cc6c:
    // 0x12cc6c: 0xdfa40210  ld          $a0, 0x210($sp)
    ctx->pc = 0x12cc6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12cc70: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12CC70u;
    SET_GPR_U32(ctx, 31, 0x12CC78u);
    ctx->pc = 0x12CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC70u;
    // 0x12cc74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12CC70u, 0x12CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC78u;
label_12cc78:
    // 0x12cc78: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12CC78u;
    {
        const bool branch_taken_0x12cc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC78u;
        // 0x12cc7c: 0x8fad01ec  lw          $t5, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc78) {
            ctx->pc = 0x12CD20u;
            goto label_12cd20;
        }
    }
    ctx->pc = 0x12CC80u;
    // 0x12cc80: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12cc84: 0x25afffff  addiu       $t7, $t5, -0x1
    ctx->pc = 0x12cc84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x12cc88: 0xae8f0004  sw          $t7, 0x4($s4)
    ctx->pc = 0x12cc88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 15));
    // 0x12cc8c: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cc90: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12cc90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12cc94: 0x8fae0024  lw          $t6, 0x24($sp)
    ctx->pc = 0x12cc94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12cc98: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x12cc98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x12cc9c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12cc9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12cca0: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12cca0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12cca4: 0xafaf0028  sw          $t7, 0x28($sp)
    ctx->pc = 0x12cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
    // 0x12cca8: 0x29cd0008  slti        $t5, $t6, 0x8
    ctx->pc = 0x12cca8u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ccac: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CCACu;
    {
        const bool branch_taken_0x12ccac = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCACu;
        // 0x12ccb0: 0xafae0024  sw          $t6, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccac) {
            ctx->pc = 0x12CCCCu;
            goto label_12cccc;
        }
    }
    ctx->pc = 0x12CCB4u;
    // 0x12ccb4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_12ccb8:
    // 0x12ccb8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ccbc: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12CCBCu;
    SET_GPR_U32(ctx, 31, 0x12CCC4u);
    ctx->pc = 0x12CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CCBCu;
    // 0x12ccc0: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12CCBCu, 0x12CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CCC4u;
label_12ccc4:
    // 0x12ccc4: 0x1440fddc  bnez        $v0, . + 4 + (-0x224 << 2)
    ctx->pc = 0x12CCC4u;
    {
        const bool branch_taken_0x12ccc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCC4u;
        // 0x12ccc8: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccc4) {
            ctx->pc = 0x12C438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c438;
        }
    }
    ctx->pc = 0x12CCCCu;
label_12cccc:
    // 0x12cccc: 0x8fae0218  lw          $t6, 0x218($sp)
    ctx->pc = 0x12ccccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_12ccd0:
    // 0x12ccd0: 0x27af0010  addiu       $t7, $sp, 0x10
    ctx->pc = 0x12ccd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12ccd4: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12ccd8: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12ccdc: 0x8faf0218  lw          $t7, 0x218($sp)
    ctx->pc = 0x12ccdcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x12cce0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12cce0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cce4: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x12cce4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12cce8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12cce8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ccec: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12ccf0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ccf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12ccf4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12ccf8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12ccf8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ccfc: 0x15e0fe4a  bnez        $t7, . + 4 + (-0x1B6 << 2)
    ctx->pc = 0x12CCFCu;
    {
        const bool branch_taken_0x12ccfc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCFCu;
        // 0x12cd00: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccfc) {
            ctx->pc = 0x12C628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c628;
        }
    }
    ctx->pc = 0x12CD04u;
    // 0x12cd04: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12cd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12cd08: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12CD08u;
    SET_GPR_U32(ctx, 31, 0x12CD10u);
    ctx->pc = 0x12CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD08u;
    // 0x12cd0c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12CD08u, 0x12CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD10u;
label_12cd10:
    // 0x12cd10: 0x1440fdc8  bnez        $v0, . + 4 + (-0x238 << 2)
    ctx->pc = 0x12CD10u;
    {
        const bool branch_taken_0x12cd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD10u;
        // 0x12cd14: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd10) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12CD18u;
    // 0x12cd18: 0x1000fe44  b           . + 4 + (-0x1BC << 2)
    ctx->pc = 0x12CD18u;
    {
        const bool branch_taken_0x12cd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD18u;
        // 0x12cd1c: 0x8fad01fc  lw          $t5, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd18) {
            ctx->pc = 0x12C62Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c62c;
        }
    }
    ctx->pc = 0x12CD20u;
label_12cd20:
    // 0x12cd20: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12cd20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12cd24: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x12cd24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12cd28: 0x1a00ffe8  blez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12CD28u;
    {
        const bool branch_taken_0x12cd28 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD28u;
        // 0x12cd2c: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd28) {
            ctx->pc = 0x12CCCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cccc;
        }
    }
    ctx->pc = 0x12CD30u;
    // 0x12cd30: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12CD30u;
    {
        const bool branch_taken_0x12cd30 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD30u;
        // 0x12cd34: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd30) {
            ctx->pc = 0x12CD94u;
            goto label_12cd94;
        }
    }
    ctx->pc = 0x12CD38u;
    // 0x12cd38: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12cd38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12cd3c: 0x25f1bb80  addiu       $s1, $t7, -0x4480
    ctx->pc = 0x12cd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12cd40: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12cd44:
    // 0x12cd44: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12cd48: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12cd48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12cd4c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12cd4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cd50: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12cd50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12cd54: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12cd54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12cd58: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12cd58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12cd5c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12cd60: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12cd60u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cd64: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CD64u;
    {
        const bool branch_taken_0x12cd64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD64u;
        // 0x12cd68: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd64) {
            ctx->pc = 0x12CD80u;
            goto label_12cd80;
        }
    }
    ctx->pc = 0x12CD6Cu;
    // 0x12cd6c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12cd70: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12CD70u;
    SET_GPR_U32(ctx, 31, 0x12CD78u);
    ctx->pc = 0x12CD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD70u;
    // 0x12cd74: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12CD70u, 0x12CD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD78u;
label_12cd78:
    // 0x12cd78: 0x1440fdae  bnez        $v0, . + 4 + (-0x252 << 2)
    ctx->pc = 0x12CD78u;
    {
        const bool branch_taken_0x12cd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD78u;
        // 0x12cd7c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd78) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12CD80u;
label_12cd80:
    // 0x12cd80: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12cd80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12cd84: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12cd84u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12cd88: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12CD88u;
    {
        const bool branch_taken_0x12cd88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd88) {
            ctx->pc = 0x12CD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CD88u;
            // 0x12cd8c: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cd44;
        }
    }
    ctx->pc = 0x12CD90u;
    // 0x12cd90: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12cd90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
label_12cd94:
    // 0x12cd94: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12cd98: 0x25efbb80  addiu       $t7, $t7, -0x4480
    ctx->pc = 0x12cd98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949760));
    // 0x12cd9c: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12cda0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12cda0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cda4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12cda4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12cda8: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12cda8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12cdac: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12cdacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12cdb0: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12cdb4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12cdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12cdb8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12cdb8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cdbc: 0x15e0ffc3  bnez        $t7, . + 4 + (-0x3D << 2)
    ctx->pc = 0x12CDBCu;
    {
        const bool branch_taken_0x12cdbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDBCu;
        // 0x12cdc0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdbc) {
            ctx->pc = 0x12CCCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cccc;
        }
    }
    ctx->pc = 0x12CDC4u;
    // 0x12cdc4: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x12CDC4u;
    {
        const bool branch_taken_0x12cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDC4u;
        // 0x12cdc8: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdc4) {
            ctx->pc = 0x12CCB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ccb8;
        }
    }
    ctx->pc = 0x12CDCCu;
    // 0x12cdcc: 0x0  nop
    ctx->pc = 0x12cdccu;
    // NOP
label_12cdd0:
    // 0x12cdd0: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12cdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12cdd4: 0xae8f0004  sw          $t7, 0x4($s4)
    ctx->pc = 0x12cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 15));
    // 0x12cdd8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12cdd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12cddc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12cddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12cde0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12cde0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cde4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12cde4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12cde8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12cde8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12cdec: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12cdf0: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12cdf0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cdf4: 0x15e0ffb5  bnez        $t7, . + 4 + (-0x4B << 2)
    ctx->pc = 0x12CDF4u;
    {
        const bool branch_taken_0x12cdf4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDF4u;
        // 0x12cdf8: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdf4) {
            ctx->pc = 0x12CCCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cccc;
        }
    }
    ctx->pc = 0x12CDFCu;
    // 0x12cdfc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12cdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12ce00: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12CE00u;
    SET_GPR_U32(ctx, 31, 0x12CE08u);
    ctx->pc = 0x12CE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CE00u;
    // 0x12ce04: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12CE00u, 0x12CE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE08u;
label_12ce08:
    // 0x12ce08: 0x1440fd8a  bnez        $v0, . + 4 + (-0x276 << 2)
    ctx->pc = 0x12CE08u;
    {
        const bool branch_taken_0x12ce08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE08u;
        // 0x12ce0c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce08) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12CE10u;
    // 0x12ce10: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x12CE10u;
    {
        const bool branch_taken_0x12ce10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE10u;
        // 0x12ce14: 0x8fae0218  lw          $t6, 0x218($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce10) {
            ctx->pc = 0x12CCD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ccd0;
        }
    }
    ctx->pc = 0x12CE18u;
label_12ce18:
    // 0x12ce18: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12ce18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ce1c: 0x31cf0002  andi        $t7, $t6, 0x2
    ctx->pc = 0x12ce1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x12ce20: 0x11e0fd8b  beqz        $t7, . + 4 + (-0x275 << 2)
    ctx->pc = 0x12CE20u;
    {
        const bool branch_taken_0x12ce20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE20u;
        // 0x12ce24: 0x240f0030  addiu       $t7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce20) {
            ctx->pc = 0x12C450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c450;
        }
    }
    ctx->pc = 0x12CE28u;
    // 0x12ce28: 0xa3b301d1  sb          $s3, 0x1D1($sp)
    ctx->pc = 0x12ce28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 19));
    // 0x12ce2c: 0xa3af01d0  sb          $t7, 0x1D0($sp)
    ctx->pc = 0x12ce2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 15));
    // 0x12ce30: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x12ce30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ce34: 0x27af01d0  addiu       $t7, $sp, 0x1D0
    ctx->pc = 0x12ce34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x12ce38: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12ce3c: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12ce40: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12ce40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ce44: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12ce44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12ce48: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x12ce48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x12ce4c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ce4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12ce50: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12ce54: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12ce58: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12ce58u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ce5c: 0x15e0fd7c  bnez        $t7, . + 4 + (-0x284 << 2)
    ctx->pc = 0x12CE5Cu;
    {
        const bool branch_taken_0x12ce5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE5Cu;
        // 0x12ce60: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce5c) {
            ctx->pc = 0x12C450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c450;
        }
    }
    ctx->pc = 0x12CE64u;
    // 0x12ce64: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12ce68: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12CE68u;
    SET_GPR_U32(ctx, 31, 0x12CE70u);
    ctx->pc = 0x12CE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CE68u;
    // 0x12ce6c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12CE68u, 0x12CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE70u;
label_12ce70:
    // 0x12ce70: 0x1440fd70  bnez        $v0, . + 4 + (-0x290 << 2)
    ctx->pc = 0x12CE70u;
    {
        const bool branch_taken_0x12ce70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE70u;
        // 0x12ce74: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce70) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12CE78u;
    // 0x12ce78: 0x1000fd76  b           . + 4 + (-0x28A << 2)
    ctx->pc = 0x12CE78u;
    {
        const bool branch_taken_0x12ce78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE78u;
        // 0x12ce7c: 0x8fad0224  lw          $t5, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce78) {
            ctx->pc = 0x12C454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c454;
        }
    }
    ctx->pc = 0x12CE80u;
label_12ce80:
    // 0x12ce80: 0x1000fd57  b           . + 4 + (-0x2A9 << 2)
    ctx->pc = 0x12CE80u;
    {
        const bool branch_taken_0x12ce80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE80u;
        // 0x12ce84: 0x93ae0000  lbu         $t6, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce80) {
            ctx->pc = 0x12C3E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c3e0;
        }
    }
    ctx->pc = 0x12CE88u;
label_12ce88:
    // 0x12ce88: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ce88u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ce8c: 0x31af0002  andi        $t7, $t5, 0x2
    ctx->pc = 0x12ce8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)2);
    // 0x12ce90: 0x1000fd20  b           . + 4 + (-0x2E0 << 2)
    ctx->pc = 0x12CE90u;
    {
        const bool branch_taken_0x12ce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE90u;
        // 0x12ce94: 0x1f7b821  addu        $s7, $t7, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce90) {
            ctx->pc = 0x12C314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c314;
        }
    }
    ctx->pc = 0x12CE98u;
label_12ce98:
    // 0x12ce98: 0x304f000f  andi        $t7, $v0, 0xF
    ctx->pc = 0x12ce98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_12ce9c:
    // 0x12ce9c: 0x8fae0220  lw          $t6, 0x220($sp)
    ctx->pc = 0x12ce9cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x12cea0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12cea0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12cea4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12cea4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12cea8: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12cea8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12ceac: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x12ceacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x12ceb0: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x12ceb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12ceb4: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12ceb4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ceb8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12CEB8u;
    {
        const bool branch_taken_0x12ceb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEB8u;
        // 0x12cebc: 0xa2ce0000  sb          $t6, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ceb8) {
            ctx->pc = 0x12CE98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ce98;
        }
    }
    ctx->pc = 0x12CEC0u;
label_12cec0:
    // 0x12cec0: 0x3b67823  subu        $t7, $sp, $s6
    ctx->pc = 0x12cec0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
label_12cec4:
    // 0x12cec4: 0x1000fd0c  b           . + 4 + (-0x2F4 << 2)
    ctx->pc = 0x12CEC4u;
    {
        const bool branch_taken_0x12cec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEC4u;
        // 0x12cec8: 0x25fe01cc  addiu       $fp, $t7, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cec4) {
            ctx->pc = 0x12C2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c2f8;
        }
    }
    ctx->pc = 0x12CECCu;
label_12cecc:
    // 0x12cecc: 0x304f0007  andi        $t7, $v0, 0x7
    ctx->pc = 0x12ceccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_12ced0:
    // 0x12ced0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12ced0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12ced4: 0x65ef0030  daddiu      $t7, $t7, 0x30
    ctx->pc = 0x12ced4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)48);
    // 0x12ced8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x12ced8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x12cedc: 0x31ee00ff  andi        $t6, $t7, 0xFF
    ctx->pc = 0x12cedcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x12cee0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12CEE0u;
    {
        const bool branch_taken_0x12cee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEE0u;
        // 0x12cee4: 0xa2ce0000  sb          $t6, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cee0) {
            ctx->pc = 0x12CECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cecc;
        }
    }
    ctx->pc = 0x12CEE8u;
    // 0x12cee8: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12cee8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ceec: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12ceecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12cef0: 0x11e0fff3  beqz        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x12CEF0u;
    {
        const bool branch_taken_0x12cef0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEF0u;
        // 0x12cef4: 0x240f0030  addiu       $t7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cef0) {
            ctx->pc = 0x12CEC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cec0;
        }
    }
    ctx->pc = 0x12CEF8u;
    // 0x12cef8: 0x51eefff2  beql        $t7, $t6, . + 4 + (-0xE << 2)
    ctx->pc = 0x12CEF8u;
    {
        const bool branch_taken_0x12cef8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        if (branch_taken_0x12cef8) {
            ctx->pc = 0x12CEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CEF8u;
            // 0x12cefc: 0x3b67823  subu        $t7, $sp, $s6 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CEC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cec4;
        }
    }
    ctx->pc = 0x12CF00u;
    // 0x12cf00: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_12cf04:
    // 0x12cf04: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x12CF04u;
    {
        const bool branch_taken_0x12cf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF04u;
        // 0x12cf08: 0xa2cf0000  sb          $t7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf04) {
            ctx->pc = 0x12CEC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cec0;
        }
    }
    ctx->pc = 0x12CF0Cu;
label_12cf0c:
    // 0x12cf0c: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12CF0Cu;
    {
        const bool branch_taken_0x12cf0c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF0Cu;
        // 0x12cf10: 0x644f0030  daddiu      $t7, $v0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf0c) {
            ctx->pc = 0x12CF50u;
            goto label_12cf50;
        }
    }
    ctx->pc = 0x12CF14u;
    // 0x12cf14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12cf14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12cf18:
    // 0x12cf18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf1c: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x12CF1Cu;
    SET_GPR_U32(ctx, 31, 0x12CF24u);
    ctx->pc = 0x12CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF1Cu;
    // 0x12cf20: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x12CF1Cu, 0x12CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF24u;
label_12cf24:
    // 0x12cf24: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12cf24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12cf28: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x12cf28u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x12cf2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12cf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12cf34: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12cf38: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x12CF38u;
    SET_GPR_U32(ctx, 31, 0x12CF40u);
    ctx->pc = 0x12CF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF38u;
    // 0x12cf3c: 0xa2c20000  sb          $v0, 0x0($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x12CF38u, 0x12CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF40u;
label_12cf40:
    // 0x12cf40: 0x2c4f000a  sltiu       $t7, $v0, 0xA
    ctx->pc = 0x12cf40u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12cf44: 0x11e0fff4  beqz        $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x12CF44u;
    {
        const bool branch_taken_0x12cf44 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF44u;
        // 0x12cf48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf44) {
            ctx->pc = 0x12CF18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cf18;
        }
    }
    ctx->pc = 0x12CF4Cu;
    // 0x12cf4c: 0x644f0030  daddiu      $t7, $v0, 0x30
    ctx->pc = 0x12cf4cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_12cf50:
    // 0x12cf50: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12cf50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12cf54: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x12CF54u;
    {
        const bool branch_taken_0x12cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF54u;
        // 0x12cf58: 0x31ef00ff  andi        $t7, $t7, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf54) {
            ctx->pc = 0x12CF04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cf04;
        }
    }
    ctx->pc = 0x12CF5Cu;
label_12cf5c:
    // 0x12cf5c: 0x15c0ffd9  bnez        $t6, . + 4 + (-0x27 << 2)
    ctx->pc = 0x12CF5Cu;
    {
        const bool branch_taken_0x12cf5c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF5Cu;
        // 0x12cf60: 0x3b67823  subu        $t7, $sp, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf5c) {
            ctx->pc = 0x12CEC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cec4;
        }
    }
    ctx->pc = 0x12CF64u;
    // 0x12cf64: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12cf64u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12cf68: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12cf68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12cf6c: 0x11e0ffd4  beqz        $t7, . + 4 + (-0x2C << 2)
    ctx->pc = 0x12CF6Cu;
    {
        const bool branch_taken_0x12cf6c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF6Cu;
        // 0x12cf70: 0x240f0030  addiu       $t7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf6c) {
            ctx->pc = 0x12CEC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cec0;
        }
    }
    ctx->pc = 0x12CF74u;
    // 0x12cf74: 0x27b601cb  addiu       $s6, $sp, 0x1CB
    ctx->pc = 0x12cf74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 459));
    // 0x12cf78: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x12CF78u;
    {
        const bool branch_taken_0x12cf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF78u;
        // 0x12cf7c: 0xa3af01cb  sb          $t7, 0x1CB($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 459), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf78) {
            ctx->pc = 0x12CEC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cec0;
        }
    }
    ctx->pc = 0x12CF80u;
label_12cf80:
    // 0x12cf80: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12cf80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12cf84: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CF84u;
    {
        const bool branch_taken_0x12cf84 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF84u;
        // 0x12cf88: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf84) {
            ctx->pc = 0x12CF94u;
            goto label_12cf94;
        }
    }
    ctx->pc = 0x12CF8Cu;
    // 0x12cf8c: 0x1000fcba  b           . + 4 + (-0x346 << 2)
    ctx->pc = 0x12CF8Cu;
    {
        const bool branch_taken_0x12cf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF8Cu;
        // 0x12cf90: 0x85e20000  lh          $v0, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf8c) {
            ctx->pc = 0x12C278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c278;
        }
    }
    ctx->pc = 0x12CF94u;
label_12cf94:
    // 0x12cf94: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x12cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12cf98: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12cf98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12cf9c: 0x1000fcb8  b           . + 4 + (-0x348 << 2)
    ctx->pc = 0x12CF9Cu;
    {
        const bool branch_taken_0x12cf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF9Cu;
        // 0x12cfa0: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf9c) {
            ctx->pc = 0x12C280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c280;
        }
    }
    ctx->pc = 0x12CFA4u;
label_12cfa4:
    // 0x12cfa4: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12cfa4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12cfa8: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12cfa8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12cfac: 0x1000fc74  b           . + 4 + (-0x38C << 2)
    ctx->pc = 0x12CFACu;
    {
        const bool branch_taken_0x12cfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFACu;
        // 0x12cfb0: 0x35ce0008  ori         $t6, $t6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfac) {
            ctx->pc = 0x12C180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c180;
        }
    }
    ctx->pc = 0x12CFB4u;
label_12cfb4:
    // 0x12cfb4: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12cfb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12cfb8: 0x35ce0010  ori         $t6, $t6, 0x10
    ctx->pc = 0x12cfb8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
    // 0x12cfbc: 0xafae01fc  sw          $t6, 0x1FC($sp)
    ctx->pc = 0x12cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
label_12cfc0:
    // 0x12cfc0: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12cfc0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12cfc4: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12cfc4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12cfc8: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CFC8u;
    {
        const bool branch_taken_0x12cfc8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFC8u;
        // 0x12cfcc: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfc8) {
            ctx->pc = 0x12CFE8u;
            goto label_12cfe8;
        }
    }
    ctx->pc = 0x12CFD0u;
    // 0x12cfd0: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x12cfd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_12cfd4:
    // 0x12cfd4: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12cfd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12cfd8: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12cfdc:
    // 0x12cfdc: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x12cfdcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12cfe0:
    // 0x12cfe0: 0x1000fcad  b           . + 4 + (-0x353 << 2)
    ctx->pc = 0x12CFE0u;
    {
        const bool branch_taken_0x12cfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFE0u;
        // 0x12cfe4: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfe0) {
            ctx->pc = 0x12C298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c298;
        }
    }
    ctx->pc = 0x12CFE8u;
label_12cfe8:
    // 0x12cfe8: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12cfe8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12cfec: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CFECu;
    {
        const bool branch_taken_0x12cfec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFECu;
        // 0x12cff0: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfec) {
            ctx->pc = 0x12CFFCu;
            goto label_12cffc;
        }
    }
    ctx->pc = 0x12CFF4u;
    // 0x12cff4: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12CFF4u;
    {
        const bool branch_taken_0x12cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFF4u;
        // 0x12cff8: 0x95e20000  lhu         $v0, 0x0($t7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cff4) {
            ctx->pc = 0x12CFD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cfd4;
        }
    }
    ctx->pc = 0x12CFFCu;
label_12cffc:
    // 0x12cffc: 0x9de20000  lwu         $v0, 0x0($t7)
    ctx->pc = 0x12cffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d000: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12d000u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12d004: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x12D004u;
    {
        const bool branch_taken_0x12d004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D004u;
        // 0x12d008: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d004) {
            ctx->pc = 0x12CFDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cfdc;
        }
    }
    ctx->pc = 0x12D00Cu;
label_12d00c:
    // 0x12d00c: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12d00cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d010: 0x35ce0010  ori         $t6, $t6, 0x10
    ctx->pc = 0x12d010u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
    // 0x12d014: 0xafae01fc  sw          $t6, 0x1FC($sp)
    ctx->pc = 0x12d014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
label_12d018:
    // 0x12d018: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12d018u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d01c: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12d01cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12d020: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D020u;
    {
        const bool branch_taken_0x12d020 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D020u;
        // 0x12d024: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d020) {
            ctx->pc = 0x12D03Cu;
            goto label_12d03c;
        }
    }
    ctx->pc = 0x12D028u;
    // 0x12d028: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x12d028u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_12d02c:
    // 0x12d02c: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12d02cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12d030: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12d030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12d034:
    // 0x12d034: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x12D034u;
    {
        const bool branch_taken_0x12d034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D034u;
        // 0x12d038: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d034) {
            ctx->pc = 0x12CFE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cfe0;
        }
    }
    ctx->pc = 0x12D03Cu;
label_12d03c:
    // 0x12d03c: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12d03cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12d040: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D040u;
    {
        const bool branch_taken_0x12d040 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D040u;
        // 0x12d044: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d040) {
            ctx->pc = 0x12D050u;
            goto label_12d050;
        }
    }
    ctx->pc = 0x12D048u;
    // 0x12d048: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x12D048u;
    {
        const bool branch_taken_0x12d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D048u;
        // 0x12d04c: 0x95e20000  lhu         $v0, 0x0($t7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d048) {
            ctx->pc = 0x12D02Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d02c;
        }
    }
    ctx->pc = 0x12D050u;
label_12d050:
    // 0x12d050: 0x9de20000  lwu         $v0, 0x0($t7)
    ctx->pc = 0x12d050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d054: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12d054u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12d058: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x12D058u;
    {
        const bool branch_taken_0x12d058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D058u;
        // 0x12d05c: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d058) {
            ctx->pc = 0x12D034u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d034;
        }
    }
    ctx->pc = 0x12D060u;
label_12d060:
    // 0x12d060: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12d060u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12d064: 0x25efbbc0  addiu       $t7, $t7, -0x4440
    ctx->pc = 0x12d064u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949824));
label_12d068:
    // 0x12d068: 0xafaf0220  sw          $t7, 0x220($sp)
    ctx->pc = 0x12d068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 15));
    // 0x12d06c: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12d06cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d070: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12d070u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12d074: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12D074u;
    {
        const bool branch_taken_0x12d074 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D074u;
        // 0x12d078: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d074) {
            ctx->pc = 0x12D0A8u;
            goto label_12d0a8;
        }
    }
    ctx->pc = 0x12D07Cu;
    // 0x12d07c: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x12d07cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_12d080:
    // 0x12d080: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12d080u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12d084: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12d084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12d088:
    // 0x12d088: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12d088u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d08c: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12d08cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12d090: 0x11e0ffd3  beqz        $t7, . + 4 + (-0x2D << 2)
    ctx->pc = 0x12D090u;
    {
        const bool branch_taken_0x12d090 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D090u;
        // 0x12d094: 0x240e0002  addiu       $t6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d090) {
            ctx->pc = 0x12CFE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cfe0;
        }
    }
    ctx->pc = 0x12D098u;
    // 0x12d098: 0x35af0002  ori         $t7, $t5, 0x2
    ctx->pc = 0x12d098u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)2);
    // 0x12d09c: 0x1e2680b  movn        $t5, $t7, $v0
    ctx->pc = 0x12d09cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 15));
    // 0x12d0a0: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x12D0A0u;
    {
        const bool branch_taken_0x12d0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0A0u;
        // 0x12d0a4: 0xafad01fc  sw          $t5, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0a0) {
            ctx->pc = 0x12CFE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cfe0;
        }
    }
    ctx->pc = 0x12D0A8u;
label_12d0a8:
    // 0x12d0a8: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12d0a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12d0ac: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D0ACu;
    {
        const bool branch_taken_0x12d0ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0ACu;
        // 0x12d0b0: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0ac) {
            ctx->pc = 0x12D0BCu;
            goto label_12d0bc;
        }
    }
    ctx->pc = 0x12D0B4u;
    // 0x12d0b4: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x12D0B4u;
    {
        const bool branch_taken_0x12d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0B4u;
        // 0x12d0b8: 0x95e20000  lhu         $v0, 0x0($t7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0b4) {
            ctx->pc = 0x12D080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d080;
        }
    }
    ctx->pc = 0x12D0BCu;
label_12d0bc:
    // 0x12d0bc: 0x9de20000  lwu         $v0, 0x0($t7)
    ctx->pc = 0x12d0bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d0c0: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12d0c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12d0c4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x12D0C4u;
    {
        const bool branch_taken_0x12d0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0C4u;
        // 0x12d0c8: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0c4) {
            ctx->pc = 0x12D088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d088;
        }
    }
    ctx->pc = 0x12D0CCu;
label_12d0cc:
    // 0x12d0cc: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12d0ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12d0d0: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x12d0d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12d0d4: 0x8fad01f8  lw          $t5, 0x1F8($sp)
    ctx->pc = 0x12d0d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12d0d8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x12d0d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d0dc: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12d0dcu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d0e0: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12d0e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x12d0e4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x12d0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d0e8: 0xafad01f8  sw          $t5, 0x1F8($sp)
    ctx->pc = 0x12d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
    // 0x12d0ec: 0x1000fc82  b           . + 4 + (-0x37E << 2)
    ctx->pc = 0x12D0ECu;
    {
        const bool branch_taken_0x12d0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0ECu;
        // 0x12d0f0: 0xa3ae0070  sb          $t6, 0x70($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0ec) {
            ctx->pc = 0x12C2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c2f8;
        }
    }
    ctx->pc = 0x12D0F4u;
label_12d0f4:
    // 0x12d0f4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12d0f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d0f8: 0x162f0073  bne         $s1, $t7, . + 4 + (0x73 << 2)
    ctx->pc = 0x12D0F8u;
    {
        const bool branch_taken_0x12d0f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0F8u;
        // 0x12d0fc: 0x240f0067  addiu       $t7, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0f8) {
            ctx->pc = 0x12D2C8u;
            goto label_12d2c8;
        }
    }
    ctx->pc = 0x12D100u;
    // 0x12d100: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x12d100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12d104:
    // 0x12d104: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12d104u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_12d108:
    // 0x12d108: 0x31af0008  andi        $t7, $t5, 0x8
    ctx->pc = 0x12d108u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)8);
    // 0x12d10c: 0x11e00068  beqz        $t7, . + 4 + (0x68 << 2)
    ctx->pc = 0x12D10Cu;
    {
        const bool branch_taken_0x12d10c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D10Cu;
        // 0x12d110: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d10c) {
            ctx->pc = 0x12D2B0u;
            goto label_12d2b0;
        }
    }
    ctx->pc = 0x12D114u;
    // 0x12d114: 0x8fae01f8  lw          $t6, 0x1F8($sp)
    ctx->pc = 0x12d114u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12d118: 0xddef0000  ld          $t7, 0x0($t7)
    ctx->pc = 0x12d118u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d11c: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x12d11cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x12d120: 0xffaf0210  sd          $t7, 0x210($sp)
    ctx->pc = 0x12d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 15));
    // 0x12d124: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12d124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12d128:
    // 0x12d128: 0xc0469ea  jal         func_11A7A8
    ctx->pc = 0x12D128u;
    SET_GPR_U32(ctx, 31, 0x12D130u);
    ctx->pc = 0x12D12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D128u;
    // 0x12d12c: 0xdfa40210  ld          $a0, 0x210($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A7A8u, 0x12D128u, 0x12D130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D130u;
label_12d130:
    // 0x12d130: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D130u;
    {
        const bool branch_taken_0x12d130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D130u;
        // 0x12d134: 0xdfa40210  ld          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d130) {
            ctx->pc = 0x12D15Cu;
            goto label_12d15c;
        }
    }
    ctx->pc = 0x12D138u;
    // 0x12d138: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12D138u;
    SET_GPR_U32(ctx, 31, 0x12D140u);
    ctx->pc = 0x12D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D138u;
    // 0x12d13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12D138u, 0x12D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D140u;
label_12d140:
    // 0x12d140: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D140u;
    {
        const bool branch_taken_0x12d140 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D140u;
        // 0x12d144: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d140) {
            ctx->pc = 0x12D150u;
            goto label_12d150;
        }
    }
    ctx->pc = 0x12D148u;
    // 0x12d148: 0x240e002d  addiu       $t6, $zero, 0x2D
    ctx->pc = 0x12d148u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12d14c: 0xa3ae0000  sb          $t6, 0x0($sp)
    ctx->pc = 0x12d14cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 14));
label_12d150:
    // 0x12d150: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x12d150u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d154: 0x1000fc68  b           . + 4 + (-0x398 << 2)
    ctx->pc = 0x12D154u;
    {
        const bool branch_taken_0x12d154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D154u;
        // 0x12d158: 0x25f6bbd8  addiu       $s6, $t7, -0x4428 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d154) {
            ctx->pc = 0x12C2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c2f8;
        }
    }
    ctx->pc = 0x12D15Cu;
label_12d15c:
    // 0x12d15c: 0xc0469fc  jal         func_11A7F0
    ctx->pc = 0x12D15Cu;
    SET_GPR_U32(ctx, 31, 0x12D164u);
    ctx->pc = 0x12D160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D15Cu;
    // 0x12d160: 0xdfa40210  ld          $a0, 0x210($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A7F0u, 0x12D15Cu, 0x12D164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D164u;
label_12d164:
    // 0x12d164: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D164u;
    {
        const bool branch_taken_0x12d164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D164u;
        // 0x12d168: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d164) {
            ctx->pc = 0x12D178u;
            goto label_12d178;
        }
    }
    ctx->pc = 0x12D16Cu;
    // 0x12d16c: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x12d16cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d170: 0x1000fc61  b           . + 4 + (-0x39F << 2)
    ctx->pc = 0x12D170u;
    {
        const bool branch_taken_0x12d170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D170u;
        // 0x12d174: 0x25f6bbe0  addiu       $s6, $t7, -0x4420 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d170) {
            ctx->pc = 0x12C2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c2f8;
        }
    }
    ctx->pc = 0x12D178u;
label_12d178:
    // 0x12d178: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12d178u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d17c: 0x27a80001  addiu       $t0, $sp, 0x1
    ctx->pc = 0x12d17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x12d180: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x12d180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12d184: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12d184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d188: 0x35ad0100  ori         $t5, $t5, 0x100
    ctx->pc = 0x12d188u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)256);
    // 0x12d18c: 0xdfa50210  ld          $a1, 0x210($sp)
    ctx->pc = 0x12d18cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12d190: 0xafad01fc  sw          $t5, 0x1FC($sp)
    ctx->pc = 0x12d190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
    // 0x12d194: 0x27a901e8  addiu       $t1, $sp, 0x1E8
    ctx->pc = 0x12d194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x12d198: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x12d198u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d19c: 0x27ab01ec  addiu       $t3, $sp, 0x1EC
    ctx->pc = 0x12d19cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
    // 0x12d1a0: 0xc04b524  jal         func_12D490
    ctx->pc = 0x12D1A0u;
    SET_GPR_U32(ctx, 31, 0x12D1A8u);
    ctx->pc = 0x12D1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D1A0u;
    // 0x12d1a4: 0x8fa701fc  lw          $a3, 0x1FC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D490u, 0x12D1A0u, 0x12D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1A8u;
label_12d1a8:
    // 0x12d1a8: 0x240f0067  addiu       $t7, $zero, 0x67
    ctx->pc = 0x12d1a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12d1ac: 0x126f0004  beq         $s3, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D1ACu;
    {
        const bool branch_taken_0x12d1ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x12D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1ACu;
        // 0x12d1b0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1ac) {
            ctx->pc = 0x12D1C0u;
            goto label_12d1c0;
        }
    }
    ctx->pc = 0x12D1B4u;
    // 0x12d1b4: 0x240f0047  addiu       $t7, $zero, 0x47
    ctx->pc = 0x12d1b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12d1b8: 0x166f000c  bne         $s3, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12D1B8u;
    {
        const bool branch_taken_0x12d1b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1B8u;
        // 0x12d1bc: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1b8) {
            ctx->pc = 0x12D1ECu;
            goto label_12d1ec;
        }
    }
    ctx->pc = 0x12D1C0u;
label_12d1c0:
    // 0x12d1c0: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x12d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d1c4: 0x28affffd  slti        $t7, $a1, -0x3
    ctx->pc = 0x12d1c4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x12d1c8: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D1C8u;
    {
        const bool branch_taken_0x12d1c8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1C8u;
        // 0x12d1cc: 0x3a6d0067  xori        $t5, $s3, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1c8) {
            ctx->pc = 0x12D1DCu;
            goto label_12d1dc;
        }
    }
    ctx->pc = 0x12D1D0u;
    // 0x12d1d0: 0x225782a  slt         $t7, $s1, $a1
    ctx->pc = 0x12d1d0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x12d1d4: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D1D4u;
    {
        const bool branch_taken_0x12d1d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1D4u;
        // 0x12d1d8: 0x24130067  addiu       $s3, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1d4) {
            ctx->pc = 0x12D1ECu;
            goto label_12d1ec;
        }
    }
    ctx->pc = 0x12D1DCu;
label_12d1dc:
    // 0x12d1dc: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x12d1dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12d1e0: 0x240e0045  addiu       $t6, $zero, 0x45
    ctx->pc = 0x12d1e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12d1e4: 0x1e0982d  daddu       $s3, $t7, $zero
    ctx->pc = 0x12d1e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1e8: 0x1cd980b  movn        $s3, $t6, $t5
    ctx->pc = 0x12d1e8u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 14));
label_12d1ec:
    // 0x12d1ec: 0x2a6f0066  slti        $t7, $s3, 0x66
    ctx->pc = 0x12d1ecu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x12d1f0: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x12D1F0u;
    {
        const bool branch_taken_0x12d1f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1F0u;
        // 0x12d1f4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1f0) {
            ctx->pc = 0x12D244u;
            goto label_12d244;
        }
    }
    ctx->pc = 0x12D1F8u;
    // 0x12d1f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12d1fc: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x12d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x12d200: 0xc04b58e  jal         func_12D638
    ctx->pc = 0x12D200u;
    SET_GPR_U32(ctx, 31, 0x12D208u);
    ctx->pc = 0x12D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D200u;
    // 0x12d204: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D638u, 0x12D200u, 0x12D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D208u;
label_12d208:
    // 0x12d208: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12d208u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12d20c: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x12d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x12d210: 0x29ee0002  slti        $t6, $t7, 0x2
    ctx->pc = 0x12d210u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12d214: 0x11c00005  beqz        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D214u;
    {
        const bool branch_taken_0x12d214 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D214u;
        // 0x12d218: 0x4ff021  addu        $fp, $v0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d214) {
            ctx->pc = 0x12D22Cu;
            goto label_12d22c;
        }
    }
    ctx->pc = 0x12D21Cu;
    // 0x12d21c: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12d21cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d220: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12d220u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12d224: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D224u;
    {
        const bool branch_taken_0x12d224 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D224u;
        // 0x12d228: 0x83af0001  lb          $t7, 0x1($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d224) {
            ctx->pc = 0x12D234u;
            goto label_12d234;
        }
    }
    ctx->pc = 0x12D22Cu;
label_12d22c:
    // 0x12d22c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12d22cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_12d230:
    // 0x12d230: 0x83af0001  lb          $t7, 0x1($sp)
    ctx->pc = 0x12d230u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_12d234:
    // 0x12d234: 0x11e0fc30  beqz        $t7, . + 4 + (-0x3D0 << 2)
    ctx->pc = 0x12D234u;
    {
        const bool branch_taken_0x12d234 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D234u;
        // 0x12d238: 0x240e002d  addiu       $t6, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d234) {
            ctx->pc = 0x12C2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c2f8;
        }
    }
    ctx->pc = 0x12D23Cu;
    // 0x12d23c: 0x1000fc2e  b           . + 4 + (-0x3D2 << 2)
    ctx->pc = 0x12D23Cu;
    {
        const bool branch_taken_0x12d23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D23Cu;
        // 0x12d240: 0xa3ae0000  sb          $t6, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d23c) {
            ctx->pc = 0x12C2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c2f8;
        }
    }
    ctx->pc = 0x12D244u;
label_12d244:
    // 0x12d244: 0x240f0066  addiu       $t7, $zero, 0x66
    ctx->pc = 0x12d244u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x12d248: 0x166f000c  bne         $s3, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12D248u;
    {
        const bool branch_taken_0x12d248 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D248u;
        // 0x12d24c: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d248) {
            ctx->pc = 0x12D27Cu;
            goto label_12d27c;
        }
    }
    ctx->pc = 0x12D250u;
    // 0x12d250: 0x18a0fff7  blez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12D250u;
    {
        const bool branch_taken_0x12d250 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x12D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D250u;
        // 0x12d254: 0x263e0002  addiu       $fp, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d250) {
            ctx->pc = 0x12D230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d230;
        }
    }
    ctx->pc = 0x12D258u;
    // 0x12d258: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D258u;
    {
        const bool branch_taken_0x12d258 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D258u;
        // 0x12d25c: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d258) {
            ctx->pc = 0x12D270u;
            goto label_12d270;
        }
    }
    ctx->pc = 0x12D260u;
    // 0x12d260: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12d260u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d264: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12d264u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12d268: 0x11e0fff2  beqz        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x12D268u;
    {
        const bool branch_taken_0x12d268 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D268u;
        // 0x12d26c: 0x83af0001  lb          $t7, 0x1($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d268) {
            ctx->pc = 0x12D234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d234;
        }
    }
    ctx->pc = 0x12D270u;
label_12d270:
    // 0x12d270: 0xb17821  addu        $t7, $a1, $s1
    ctx->pc = 0x12d270u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x12d274: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x12D274u;
    {
        const bool branch_taken_0x12d274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D274u;
        // 0x12d278: 0x25fe0001  addiu       $fp, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d274) {
            ctx->pc = 0x12D230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d230;
        }
    }
    ctx->pc = 0x12D27Cu;
label_12d27c:
    // 0x12d27c: 0xa2782a  slt         $t7, $a1, $v0
    ctx->pc = 0x12d27cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12d280: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D280u;
    {
        const bool branch_taken_0x12d280 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D280u;
        // 0x12d284: 0x8fae01fc  lw          $t6, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d280) {
            ctx->pc = 0x12D29Cu;
            goto label_12d29c;
        }
    }
    ctx->pc = 0x12D288u;
    // 0x12d288: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12d288u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12d28c: 0x11e0ffe8  beqz        $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12D28Cu;
    {
        const bool branch_taken_0x12d28c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D28Cu;
        // 0x12d290: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d28c) {
            ctx->pc = 0x12D230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d230;
        }
    }
    ctx->pc = 0x12D294u;
    // 0x12d294: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x12D294u;
    {
        const bool branch_taken_0x12d294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D294u;
        // 0x12d298: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d294) {
            ctx->pc = 0x12D230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d230;
        }
    }
    ctx->pc = 0x12D29Cu;
label_12d29c:
    // 0x12d29c: 0x5ca0ffe4  bgtzl       $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x12D29Cu;
    {
        const bool branch_taken_0x12d29c = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x12d29c) {
            ctx->pc = 0x12D2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D29Cu;
            // 0x12d2a0: 0x245e0001  addiu       $fp, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d230;
        }
    }
    ctx->pc = 0x12D2A4u;
    // 0x12d2a4: 0x457823  subu        $t7, $v0, $a1
    ctx->pc = 0x12d2a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12d2a8: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x12D2A8u;
    {
        const bool branch_taken_0x12d2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2A8u;
        // 0x12d2ac: 0x25fe0002  addiu       $fp, $t7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2a8) {
            ctx->pc = 0x12D230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d230;
        }
    }
    ctx->pc = 0x12D2B0u;
label_12d2b0:
    // 0x12d2b0: 0xddef0000  ld          $t7, 0x0($t7)
    ctx->pc = 0x12d2b0u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d2b4: 0xffaf0210  sd          $t7, 0x210($sp)
    ctx->pc = 0x12d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 15));
    // 0x12d2b8: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12d2b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12d2bc: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12d2bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12d2c0: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x12D2C0u;
    {
        const bool branch_taken_0x12d2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2C0u;
        // 0x12d2c4: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2c0) {
            ctx->pc = 0x12D128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d128;
        }
    }
    ctx->pc = 0x12D2C8u;
label_12d2c8:
    // 0x12d2c8: 0x126f0003  beq         $s3, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D2C8u;
    {
        const bool branch_taken_0x12d2c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x12D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2C8u;
        // 0x12d2cc: 0x240f0047  addiu       $t7, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2c8) {
            ctx->pc = 0x12D2D8u;
            goto label_12d2d8;
        }
    }
    ctx->pc = 0x12D2D0u;
    // 0x12d2d0: 0x166fff8d  bne         $s3, $t7, . + 4 + (-0x73 << 2)
    ctx->pc = 0x12D2D0u;
    {
        const bool branch_taken_0x12d2d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2D0u;
        // 0x12d2d4: 0x8fad01fc  lw          $t5, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2d0) {
            ctx->pc = 0x12D108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d108;
        }
    }
    ctx->pc = 0x12D2D8u;
label_12d2d8:
    // 0x12d2d8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12d2d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d2dc: 0x1000ff89  b           . + 4 + (-0x77 << 2)
    ctx->pc = 0x12D2DCu;
    {
        const bool branch_taken_0x12d2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2DCu;
        // 0x12d2e0: 0x1f1880a  movz        $s1, $t7, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2dc) {
            ctx->pc = 0x12D104u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d104;
        }
    }
    ctx->pc = 0x12D2E4u;
label_12d2e4:
    // 0x12d2e4: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12d2e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d2e8: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12d2e8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d2ec: 0x1000fb96  b           . + 4 + (-0x46A << 2)
    ctx->pc = 0x12D2ECu;
    {
        const bool branch_taken_0x12d2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2ECu;
        // 0x12d2f0: 0x35ef0040  ori         $t7, $t7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2ec) {
            ctx->pc = 0x12C148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c148;
        }
    }
    ctx->pc = 0x12D2F4u;
label_12d2f4:
    // 0x12d2f4: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12d2f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d2f8: 0x240f006c  addiu       $t7, $zero, 0x6C
    ctx->pc = 0x12d2f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12d2fc: 0x67600  sll         $t6, $a2, 24
    ctx->pc = 0x12d2fcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x12d300: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x12d300u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x12d304: 0x15cf0006  bne         $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D304u;
    {
        const bool branch_taken_0x12d304 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D304u;
        // 0x12d308: 0x8fae01fc  lw          $t6, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d304) {
            ctx->pc = 0x12D320u;
            goto label_12d320;
        }
    }
    ctx->pc = 0x12D30Cu;
    // 0x12d30c: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12d30cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d310: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12d310u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12d314: 0x35ad0010  ori         $t5, $t5, 0x10
    ctx->pc = 0x12d314u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)16);
    // 0x12d318: 0x1000fb84  b           . + 4 + (-0x47C << 2)
    ctx->pc = 0x12D318u;
    {
        const bool branch_taken_0x12d318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D318u;
        // 0x12d31c: 0xafad01fc  sw          $t5, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d318) {
            ctx->pc = 0x12C12Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c12c;
        }
    }
    ctx->pc = 0x12D320u;
label_12d320:
    // 0x12d320: 0x1000fb97  b           . + 4 + (-0x469 << 2)
    ctx->pc = 0x12D320u;
    {
        const bool branch_taken_0x12d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D320u;
        // 0x12d324: 0x35ce0010  ori         $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d320) {
            ctx->pc = 0x12C180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c180;
        }
    }
    ctx->pc = 0x12D328u;
label_12d328:
    // 0x12d328: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12d328u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d32c: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12d32cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12d330: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D330u;
    {
        const bool branch_taken_0x12d330 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D330u;
        // 0x12d334: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d330) {
            ctx->pc = 0x12D350u;
            goto label_12d350;
        }
    }
    ctx->pc = 0x12D338u;
    // 0x12d338: 0x8fad0200  lw          $t5, 0x200($sp)
    ctx->pc = 0x12d338u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12d33c: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12d33cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d340: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12d340u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12d344: 0xfdcd0000  sd          $t5, 0x0($t6)
    ctx->pc = 0x12d344u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 13));
label_12d348:
    // 0x12d348: 0x1000fb3e  b           . + 4 + (-0x4C2 << 2)
    ctx->pc = 0x12D348u;
    {
        const bool branch_taken_0x12d348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D348u;
        // 0x12d34c: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d348) {
            ctx->pc = 0x12C044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c044;
        }
    }
    ctx->pc = 0x12D350u;
label_12d350:
    // 0x12d350: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12d350u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12d354: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D354u;
    {
        const bool branch_taken_0x12d354 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D354u;
        // 0x12d358: 0x8fad0200  lw          $t5, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d354) {
            ctx->pc = 0x12D370u;
            goto label_12d370;
        }
    }
    ctx->pc = 0x12D35Cu;
    // 0x12d35c: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12d35cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12d360: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12d360u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d364: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12d364u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12d368: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12D368u;
    {
        const bool branch_taken_0x12d368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D368u;
        // 0x12d36c: 0xa5cd0000  sh          $t5, 0x0($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d368) {
            ctx->pc = 0x12D348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d348;
        }
    }
    ctx->pc = 0x12D370u;
label_12d370:
    // 0x12d370: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12d370u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12d374: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12d374u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d378: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12d378u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12d37c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x12D37Cu;
    {
        const bool branch_taken_0x12d37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D37Cu;
        // 0x12d380: 0xadcd0000  sw          $t5, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d37c) {
            ctx->pc = 0x12D348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d348;
        }
    }
    ctx->pc = 0x12D384u;
label_12d384:
    // 0x12d384: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12d384u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12d388: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12d388u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x12d38c: 0x25cebbe8  addiu       $t6, $t6, -0x4418
    ctx->pc = 0x12d38cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949864));
    // 0x12d390: 0x24130078  addiu       $s3, $zero, 0x78
    ctx->pc = 0x12d390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x12d394: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x12d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d398: 0x25ed0008  addiu       $t5, $t7, 0x8
    ctx->pc = 0x12d398u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12d39c: 0xafae0220  sw          $t6, 0x220($sp)
    ctx->pc = 0x12d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 14));
    // 0x12d3a0: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12d3a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d3a4: 0xafad01f8  sw          $t5, 0x1F8($sp)
    ctx->pc = 0x12d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
    // 0x12d3a8: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x12d3a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d3ac: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x12d3acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x12d3b0: 0x1000ff0b  b           . + 4 + (-0xF5 << 2)
    ctx->pc = 0x12D3B0u;
    {
        const bool branch_taken_0x12d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3B0u;
        // 0x12d3b4: 0xafaf01fc  sw          $t7, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3b0) {
            ctx->pc = 0x12CFE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cfe0;
        }
    }
    ctx->pc = 0x12D3B8u;
label_12d3b8:
    // 0x12d3b8: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12d3b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12d3bc: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12d3bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d3c0: 0x1000fb61  b           . + 4 + (-0x49F << 2)
    ctx->pc = 0x12D3C0u;
    {
        const bool branch_taken_0x12d3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3C0u;
        // 0x12d3c4: 0x35ef0010  ori         $t7, $t7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3c0) {
            ctx->pc = 0x12C148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c148;
        }
    }
    ctx->pc = 0x12D3C8u;
label_12d3c8:
    // 0x12d3c8: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12d3c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12d3cc: 0x25ed0008  addiu       $t5, $t7, 0x8
    ctx->pc = 0x12d3ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12d3d0: 0x8df60000  lw          $s6, 0x0($t7)
    ctx->pc = 0x12d3d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d3d4: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D3D4u;
    {
        const bool branch_taken_0x12d3d4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3D4u;
        // 0x12d3d8: 0xafad01f8  sw          $t5, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3d4) {
            ctx->pc = 0x12D3E4u;
            goto label_12d3e4;
        }
    }
    ctx->pc = 0x12D3DCu;
    // 0x12d3dc: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12d3e0: 0x25f6bc00  addiu       $s6, $t7, -0x4400
    ctx->pc = 0x12d3e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949888));
label_12d3e4:
    // 0x12d3e4: 0x620000d  bltz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x12D3E4u;
    {
        const bool branch_taken_0x12d3e4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x12D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3E4u;
        // 0x12d3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3e4) {
            ctx->pc = 0x12D41Cu;
            goto label_12d41c;
        }
    }
    ctx->pc = 0x12D3ECu;
    // 0x12d3ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12d3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3f0: 0xc049bea  jal         func_126FA8
    ctx->pc = 0x12D3F0u;
    SET_GPR_U32(ctx, 31, 0x12D3F8u);
    ctx->pc = 0x12D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3F0u;
    // 0x12d3f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126FA8u, 0x12D3F0u, 0x12D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3F8u;
label_12d3f8:
    // 0x12d3f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D3F8u;
    {
        const bool branch_taken_0x12d3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3F8u;
        // 0x12d3fc: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3f8) {
            ctx->pc = 0x12D414u;
            goto label_12d414;
        }
    }
    ctx->pc = 0x12D400u;
    // 0x12d400: 0x56f023  subu        $fp, $v0, $s6
    ctx->pc = 0x12d400u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x12d404: 0x23e782a  slt         $t7, $s1, $fp
    ctx->pc = 0x12d404u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x12d408: 0x51e0fbbb  beql        $t7, $zero, . + 4 + (-0x445 << 2)
    ctx->pc = 0x12D408u;
    {
        const bool branch_taken_0x12d408 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d408) {
            ctx->pc = 0x12D40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D408u;
            // 0x12d40c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c2f8;
        }
    }
    ctx->pc = 0x12D410u;
    // 0x12d410: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x12d410u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d414:
    // 0x12d414: 0x1000fbb8  b           . + 4 + (-0x448 << 2)
    ctx->pc = 0x12D414u;
    {
        const bool branch_taken_0x12d414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D414u;
        // 0x12d418: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d414) {
            ctx->pc = 0x12C2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c2f8;
        }
    }
    ctx->pc = 0x12D41Cu;
label_12d41c:
    // 0x12d41c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x12D41Cu;
    SET_GPR_U32(ctx, 31, 0x12D424u);
    ctx->pc = 0x12D420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D41Cu;
    // 0x12d420: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x12D41Cu, 0x12D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D424u;
label_12d424:
    // 0x12d424: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x12D424u;
    {
        const bool branch_taken_0x12d424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D424u;
        // 0x12d428: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d424) {
            ctx->pc = 0x12D414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d414;
        }
    }
    ctx->pc = 0x12D42Cu;
label_12d42c:
    // 0x12d42c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D42Cu;
    {
        const bool branch_taken_0x12d42c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D42Cu;
        // 0x12d430: 0x27b60070  addiu       $s6, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d42c) {
            ctx->pc = 0x12D444u;
            goto label_12d444;
        }
    }
    ctx->pc = 0x12D434u;
    // 0x12d434: 0xa3b30070  sb          $s3, 0x70($sp)
    ctx->pc = 0x12d434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 19));
    // 0x12d438: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x12d438u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d43c: 0x1000fbae  b           . + 4 + (-0x452 << 2)
    ctx->pc = 0x12D43Cu;
    {
        const bool branch_taken_0x12d43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D43Cu;
        // 0x12d440: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d43c) {
            ctx->pc = 0x12C2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c2f8;
        }
    }
    ctx->pc = 0x12D444u;
label_12d444:
    // 0x12d444: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12d444u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d448: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D448u;
    {
        const bool branch_taken_0x12d448 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D448u;
        // 0x12d44c: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d448) {
            ctx->pc = 0x12D460u;
            goto label_12d460;
        }
    }
    ctx->pc = 0x12D450u;
    // 0x12d450: 0xc04af74  jal         func_12BDD0
    ctx->pc = 0x12D450u;
    SET_GPR_U32(ctx, 31, 0x12D458u);
    ctx->pc = 0x12D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D450u;
    // 0x12d454: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDD0u, 0x12D450u, 0x12D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D458u;
label_12d458:
    // 0x12d458: 0x1440fbf7  bnez        $v0, . + 4 + (-0x409 << 2)
    ctx->pc = 0x12D458u;
    {
        const bool branch_taken_0x12d458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D458u;
        // 0x12d45c: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d458) {
            ctx->pc = 0x12C438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c438;
        }
    }
    ctx->pc = 0x12D460u;
label_12d460:
    // 0x12d460: 0x1000fbf4  b           . + 4 + (-0x40C << 2)
    ctx->pc = 0x12D460u;
    {
        const bool branch_taken_0x12d460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D460u;
        // 0x12d464: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d460) {
            ctx->pc = 0x12C434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c434;
        }
    }
    ctx->pc = 0x12D468u;
label_12d468:
    // 0x12d468: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12d468u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12d46c: 0x1000fefe  b           . + 4 + (-0x102 << 2)
    ctx->pc = 0x12D46Cu;
    {
        const bool branch_taken_0x12d46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D46Cu;
        // 0x12d470: 0x25efbbe8  addiu       $t7, $t7, -0x4418 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d46c) {
            ctx->pc = 0x12D068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d068;
        }
    }
    ctx->pc = 0x12D474u;
    // 0x12d474: 0x0  nop
    ctx->pc = 0x12d474u;
    // NOP
label_12d478:
    // 0x12d478: 0x8faf01e0  lw          $t7, 0x1E0($sp)
    ctx->pc = 0x12d478u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12d47c: 0x15f1faf5  bne         $t7, $s1, . + 4 + (-0x50B << 2)
    ctx->pc = 0x12D47Cu;
    {
        const bool branch_taken_0x12d47c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        ctx->pc = 0x12D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D47Cu;
        // 0x12d480: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d47c) {
            ctx->pc = 0x12C054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c054;
        }
    }
    ctx->pc = 0x12D484u;
    // 0x12d484: 0x1000fafb  b           . + 4 + (-0x505 << 2)
    ctx->pc = 0x12D484u;
    {
        const bool branch_taken_0x12d484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D484u;
        // 0x12d488: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d484) {
            ctx->pc = 0x12C074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c074;
        }
    }
    ctx->pc = 0x12D48Cu;
    // 0x12d48c: 0x0  nop
    ctx->pc = 0x12d48cu;
    // NOP
    if (ctx->pc == 0x12d48cu) { ctx->pc = 0x12d490u; }
}
