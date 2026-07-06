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

// Function: sub_0023F718
// Address: 0x23f718 - 0x23f9d4
void sub_0023F718_0x23f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F718_0x23f718");
#endif

    switch (ctx->pc) {
        case 0x23f718u: goto label_23f718;
        case 0x23f71cu: goto label_23f71c;
        case 0x23f720u: goto label_23f720;
        case 0x23f724u: goto label_23f724;
        case 0x23f728u: goto label_23f728;
        case 0x23f72cu: goto label_23f72c;
        case 0x23f730u: goto label_23f730;
        case 0x23f734u: goto label_23f734;
        case 0x23f738u: goto label_23f738;
        case 0x23f73cu: goto label_23f73c;
        case 0x23f740u: goto label_23f740;
        case 0x23f744u: goto label_23f744;
        case 0x23f748u: goto label_23f748;
        case 0x23f74cu: goto label_23f74c;
        case 0x23f750u: goto label_23f750;
        case 0x23f754u: goto label_23f754;
        case 0x23f758u: goto label_23f758;
        case 0x23f75cu: goto label_23f75c;
        case 0x23f760u: goto label_23f760;
        case 0x23f764u: goto label_23f764;
        case 0x23f768u: goto label_23f768;
        case 0x23f76cu: goto label_23f76c;
        case 0x23f770u: goto label_23f770;
        case 0x23f774u: goto label_23f774;
        case 0x23f778u: goto label_23f778;
        case 0x23f77cu: goto label_23f77c;
        case 0x23f780u: goto label_23f780;
        case 0x23f784u: goto label_23f784;
        case 0x23f788u: goto label_23f788;
        case 0x23f78cu: goto label_23f78c;
        case 0x23f790u: goto label_23f790;
        case 0x23f794u: goto label_23f794;
        case 0x23f798u: goto label_23f798;
        case 0x23f79cu: goto label_23f79c;
        case 0x23f7a0u: goto label_23f7a0;
        case 0x23f7a4u: goto label_23f7a4;
        case 0x23f7a8u: goto label_23f7a8;
        case 0x23f7acu: goto label_23f7ac;
        case 0x23f7b0u: goto label_23f7b0;
        case 0x23f7b4u: goto label_23f7b4;
        case 0x23f7b8u: goto label_23f7b8;
        case 0x23f7bcu: goto label_23f7bc;
        case 0x23f7c0u: goto label_23f7c0;
        case 0x23f7c4u: goto label_23f7c4;
        case 0x23f7c8u: goto label_23f7c8;
        case 0x23f7ccu: goto label_23f7cc;
        case 0x23f7d0u: goto label_23f7d0;
        case 0x23f7d4u: goto label_23f7d4;
        case 0x23f7d8u: goto label_23f7d8;
        case 0x23f7dcu: goto label_23f7dc;
        case 0x23f7e0u: goto label_23f7e0;
        case 0x23f7e4u: goto label_23f7e4;
        case 0x23f7e8u: goto label_23f7e8;
        case 0x23f7ecu: goto label_23f7ec;
        case 0x23f7f0u: goto label_23f7f0;
        case 0x23f7f4u: goto label_23f7f4;
        case 0x23f7f8u: goto label_23f7f8;
        case 0x23f7fcu: goto label_23f7fc;
        case 0x23f800u: goto label_23f800;
        case 0x23f804u: goto label_23f804;
        case 0x23f808u: goto label_23f808;
        case 0x23f80cu: goto label_23f80c;
        case 0x23f810u: goto label_23f810;
        case 0x23f814u: goto label_23f814;
        case 0x23f818u: goto label_23f818;
        case 0x23f81cu: goto label_23f81c;
        case 0x23f820u: goto label_23f820;
        case 0x23f824u: goto label_23f824;
        case 0x23f828u: goto label_23f828;
        case 0x23f82cu: goto label_23f82c;
        case 0x23f830u: goto label_23f830;
        case 0x23f834u: goto label_23f834;
        case 0x23f838u: goto label_23f838;
        case 0x23f83cu: goto label_23f83c;
        case 0x23f840u: goto label_23f840;
        case 0x23f844u: goto label_23f844;
        case 0x23f848u: goto label_23f848;
        case 0x23f84cu: goto label_23f84c;
        case 0x23f850u: goto label_23f850;
        case 0x23f854u: goto label_23f854;
        case 0x23f858u: goto label_23f858;
        case 0x23f85cu: goto label_23f85c;
        case 0x23f860u: goto label_23f860;
        case 0x23f864u: goto label_23f864;
        case 0x23f868u: goto label_23f868;
        case 0x23f86cu: goto label_23f86c;
        case 0x23f870u: goto label_23f870;
        case 0x23f874u: goto label_23f874;
        case 0x23f878u: goto label_23f878;
        case 0x23f87cu: goto label_23f87c;
        case 0x23f880u: goto label_23f880;
        case 0x23f884u: goto label_23f884;
        case 0x23f888u: goto label_23f888;
        case 0x23f88cu: goto label_23f88c;
        case 0x23f890u: goto label_23f890;
        case 0x23f894u: goto label_23f894;
        case 0x23f898u: goto label_23f898;
        case 0x23f89cu: goto label_23f89c;
        case 0x23f8a0u: goto label_23f8a0;
        case 0x23f8a4u: goto label_23f8a4;
        case 0x23f8a8u: goto label_23f8a8;
        case 0x23f8acu: goto label_23f8ac;
        case 0x23f8b0u: goto label_23f8b0;
        case 0x23f8b4u: goto label_23f8b4;
        case 0x23f8b8u: goto label_23f8b8;
        case 0x23f8bcu: goto label_23f8bc;
        case 0x23f8c0u: goto label_23f8c0;
        case 0x23f8c4u: goto label_23f8c4;
        case 0x23f8c8u: goto label_23f8c8;
        case 0x23f8ccu: goto label_23f8cc;
        case 0x23f8d0u: goto label_23f8d0;
        case 0x23f8d4u: goto label_23f8d4;
        case 0x23f8d8u: goto label_23f8d8;
        case 0x23f8dcu: goto label_23f8dc;
        case 0x23f8e0u: goto label_23f8e0;
        case 0x23f8e4u: goto label_23f8e4;
        case 0x23f8e8u: goto label_23f8e8;
        case 0x23f8ecu: goto label_23f8ec;
        case 0x23f8f0u: goto label_23f8f0;
        case 0x23f8f4u: goto label_23f8f4;
        case 0x23f8f8u: goto label_23f8f8;
        case 0x23f8fcu: goto label_23f8fc;
        case 0x23f900u: goto label_23f900;
        case 0x23f904u: goto label_23f904;
        case 0x23f908u: goto label_23f908;
        case 0x23f90cu: goto label_23f90c;
        case 0x23f910u: goto label_23f910;
        case 0x23f914u: goto label_23f914;
        case 0x23f918u: goto label_23f918;
        case 0x23f91cu: goto label_23f91c;
        case 0x23f920u: goto label_23f920;
        case 0x23f924u: goto label_23f924;
        case 0x23f928u: goto label_23f928;
        case 0x23f92cu: goto label_23f92c;
        case 0x23f930u: goto label_23f930;
        case 0x23f934u: goto label_23f934;
        case 0x23f938u: goto label_23f938;
        case 0x23f93cu: goto label_23f93c;
        case 0x23f940u: goto label_23f940;
        case 0x23f944u: goto label_23f944;
        case 0x23f948u: goto label_23f948;
        case 0x23f94cu: goto label_23f94c;
        case 0x23f950u: goto label_23f950;
        case 0x23f954u: goto label_23f954;
        case 0x23f958u: goto label_23f958;
        case 0x23f95cu: goto label_23f95c;
        case 0x23f960u: goto label_23f960;
        case 0x23f964u: goto label_23f964;
        case 0x23f968u: goto label_23f968;
        case 0x23f96cu: goto label_23f96c;
        case 0x23f970u: goto label_23f970;
        case 0x23f974u: goto label_23f974;
        case 0x23f978u: goto label_23f978;
        case 0x23f97cu: goto label_23f97c;
        case 0x23f980u: goto label_23f980;
        case 0x23f984u: goto label_23f984;
        case 0x23f988u: goto label_23f988;
        case 0x23f98cu: goto label_23f98c;
        case 0x23f990u: goto label_23f990;
        case 0x23f994u: goto label_23f994;
        case 0x23f998u: goto label_23f998;
        case 0x23f99cu: goto label_23f99c;
        case 0x23f9a0u: goto label_23f9a0;
        case 0x23f9a4u: goto label_23f9a4;
        case 0x23f9a8u: goto label_23f9a8;
        case 0x23f9acu: goto label_23f9ac;
        case 0x23f9b0u: goto label_23f9b0;
        case 0x23f9b4u: goto label_23f9b4;
        case 0x23f9b8u: goto label_23f9b8;
        case 0x23f9bcu: goto label_23f9bc;
        case 0x23f9c0u: goto label_23f9c0;
        case 0x23f9c4u: goto label_23f9c4;
        case 0x23f9c8u: goto label_23f9c8;
        case 0x23f9ccu: goto label_23f9cc;
        case 0x23f9d0u: goto label_23f9d0;
        default: break;
    }

    ctx->pc = 0x23f718u;

label_23f718:
    // 0x23f718: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23f718u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f71c:
    // 0x23f71c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f720:
    // 0x23f720: 0xac620170  sw          $v0, 0x170($v1)
    ctx->pc = 0x23f720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 368), GPR_U32(ctx, 2));
label_23f724:
    // 0x23f724: 0x2464455c  addiu       $a0, $v1, 0x455C
    ctx->pc = 0x23f724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 17756));
label_23f728:
    // 0x23f728: 0xac6001a4  sw          $zero, 0x1A4($v1)
    ctx->pc = 0x23f728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 420), GPR_U32(ctx, 0));
label_23f72c:
    // 0x23f72c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f730:
    // 0x23f730: 0xac600144  sw          $zero, 0x144($v1)
    ctx->pc = 0x23f730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 0));
label_23f734:
    // 0x23f734: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x23f734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_23f738:
    // 0x23f738: 0x8049cb6  j           func_1272D8
label_23f73c:
    if (ctx->pc == 0x23F73Cu) {
        ctx->pc = 0x23F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F738u;
        // 0x23f73c: 0xac600158  sw          $zero, 0x158($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F740u;
        goto label_23f740;
    }
    ctx->pc = 0x23F738u;
    ctx->pc = 0x23F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F738u;
    // 0x23f73c: 0xac600158  sw          $zero, 0x158($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23F740u;
label_23f740:
    // 0x23f740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23f744:
    // 0x23f744: 0x3403c023  ori         $v1, $zero, 0xC023
    ctx->pc = 0x23f744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
label_23f748:
    // 0x23f748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23f74c:
    // 0x23f74c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23f750:
    // 0x23f750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f754:
    // 0x23f754: 0x9602423c  lhu         $v0, 0x423C($s0)
    ctx->pc = 0x23f754u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16956)));
label_23f758:
    // 0x23f758: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_23f75c:
    if (ctx->pc == 0x23F75Cu) {
        ctx->pc = 0x23F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F758u;
        // 0x23f75c: 0x9603401c  lhu         $v1, 0x401C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F760u;
        goto label_23f760;
    }
    ctx->pc = 0x23F758u;
    {
        const bool branch_taken_0x23f758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f758) {
            ctx->pc = 0x23F75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F758u;
            // 0x23f75c: 0x9603401c  lhu         $v1, 0x401C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F78Cu;
            goto label_23f78c;
        }
    }
    ctx->pc = 0x23F760u;
label_23f760:
    // 0x23f760: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x23f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_23f764:
    // 0x23f764: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23f764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_23f768:
    // 0x23f768: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23f76c:
    if (ctx->pc == 0x23F76Cu) {
        ctx->pc = 0x23F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F768u;
        // 0x23f76c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F770u;
        goto label_23f770;
    }
    ctx->pc = 0x23F768u;
    {
        const bool branch_taken_0x23f768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F768u;
        // 0x23f76c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f768) {
            ctx->pc = 0x23F788u;
            goto label_23f788;
        }
    }
    ctx->pc = 0x23F770u;
label_23f770:
    // 0x23f770: 0x8e024244  lw          $v0, 0x4244($s0)
    ctx->pc = 0x23f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16964)));
label_23f774:
    // 0x23f774: 0x24845138  addiu       $a0, $a0, 0x5138
    ctx->pc = 0x23f774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20792));
label_23f778:
    // 0x23f778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23f778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f77c:
    // 0x23f77c: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x23f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
label_23f780:
    // 0x23f780: 0xc08eef2  jal         func_23BBC8
label_23f784:
    if (ctx->pc == 0x23F784u) {
        ctx->pc = 0x23F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F780u;
        // 0x23f784: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F788u;
        goto label_23f788;
    }
    ctx->pc = 0x23F780u;
    SET_GPR_U32(ctx, 31, 0x23F788u);
    ctx->pc = 0x23F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F780u;
    // 0x23f784: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBC8u, 0x23F780u, 0x23F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F788u;
label_23f788:
    // 0x23f788: 0x9603401c  lhu         $v1, 0x401C($s0)
    ctx->pc = 0x23f788u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16412)));
label_23f78c:
    // 0x23f78c: 0x3402c023  ori         $v0, $zero, 0xC023
    ctx->pc = 0x23f78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
label_23f790:
    // 0x23f790: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_23f794:
    if (ctx->pc == 0x23F794u) {
        ctx->pc = 0x23F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F790u;
        // 0x23f794: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F798u;
        goto label_23f798;
    }
    ctx->pc = 0x23F790u;
    {
        const bool branch_taken_0x23f790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F790u;
        // 0x23f794: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f790) {
            ctx->pc = 0x23F7CCu;
            goto label_23f7cc;
        }
    }
    ctx->pc = 0x23F798u;
label_23f798:
    // 0x23f798: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23f798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_23f79c:
    // 0x23f79c: 0x8c625170  lw          $v0, 0x5170($v1)
    ctx->pc = 0x23f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20848)));
label_23f7a0:
    // 0x23f7a0: 0x40f809  jalr        $v0
label_23f7a4:
    if (ctx->pc == 0x23F7A4u) {
        ctx->pc = 0x23F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7A0u;
        // 0x23f7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F7A8u;
        goto label_23f7a8;
    }
    ctx->pc = 0x23F7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F7A8u);
        ctx->pc = 0x23F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7A0u;
        // 0x23f7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F7A0u, 0x23F7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F7A8u;
label_23f7a8:
    // 0x23f7a8: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x23f7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
label_23f7ac:
    // 0x23f7ac: 0x8e054020  lw          $a1, 0x4020($s0)
    ctx->pc = 0x23f7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16416)));
label_23f7b0:
    // 0x23f7b0: 0x24c6f8e0  addiu       $a2, $a2, -0x720
    ctx->pc = 0x23f7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965472));
label_23f7b4:
    // 0x23f7b4: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x23f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_23f7b8:
    // 0x23f7b8: 0xc08a058  jal         func_228160
label_23f7bc:
    if (ctx->pc == 0x23F7BCu) {
        ctx->pc = 0x23F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7B8u;
        // 0x23f7bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F7C0u;
        goto label_23f7c0;
    }
    ctx->pc = 0x23F7B8u;
    SET_GPR_U32(ctx, 31, 0x23F7C0u);
    ctx->pc = 0x23F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F7B8u;
    // 0x23f7bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228160u, 0x23F7B8u, 0x23F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F7C0u;
label_23f7c0:
    // 0x23f7c0: 0x8e024024  lw          $v0, 0x4024($s0)
    ctx->pc = 0x23f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16420)));
label_23f7c4:
    // 0x23f7c4: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x23f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
label_23f7c8:
    // 0x23f7c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f7cc:
    // 0x23f7cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f7d0:
    // 0x23f7d0: 0x3e00008  jr          $ra
label_23f7d4:
    if (ctx->pc == 0x23F7D4u) {
        ctx->pc = 0x23F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7D0u;
        // 0x23f7d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F7D8u;
        goto label_23f7d8;
    }
    ctx->pc = 0x23F7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7D0u;
        // 0x23f7d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F7D8u;
label_23f7d8:
    // 0x23f7d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23f7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f7dc:
    // 0x23f7dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f7e0:
    // 0x23f7e0: 0x8ca20170  lw          $v0, 0x170($a1)
    ctx->pc = 0x23f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 368)));
label_23f7e4:
    // 0x23f7e4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_23f7e8:
    if (ctx->pc == 0x23F7E8u) {
        ctx->pc = 0x23F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7E4u;
        // 0x23f7e8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F7ECu;
        goto label_23f7ec;
    }
    ctx->pc = 0x23F7E4u;
    {
        const bool branch_taken_0x23f7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7E4u;
        // 0x23f7e8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7e4) {
            ctx->pc = 0x23F7F8u;
            goto label_23f7f8;
        }
    }
    ctx->pc = 0x23F7ECu;
label_23f7ec:
    // 0x23f7ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23f7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f7f0:
    // 0x23f7f0: 0x808eef2  j           func_23BBC8
label_23f7f4:
    if (ctx->pc == 0x23F7F4u) {
        ctx->pc = 0x23F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7F0u;
        // 0x23f7f4: 0x24845138  addiu       $a0, $a0, 0x5138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F7F8u;
        goto label_23f7f8;
    }
    ctx->pc = 0x23F7F0u;
    ctx->pc = 0x23F7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F7F0u;
    // 0x23f7f4: 0x24845138  addiu       $a0, $a0, 0x5138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23F7F8u;
label_23f7f8:
    // 0x23f7f8: 0x3e00008  jr          $ra
label_23f7fc:
    if (ctx->pc == 0x23F7FCu) {
        ctx->pc = 0x23F800u;
        goto label_23f800;
    }
    ctx->pc = 0x23F7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F800u;
label_23f800:
    // 0x23f800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23f800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23f804:
    // 0x23f804: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23f804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23f808:
    // 0x23f808: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23f808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f80c:
    // 0x23f80c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23f80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23f810:
    // 0x23f810: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23f814:
    // 0x23f814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23f818:
    // 0x23f818: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23f81c:
    // 0x23f81c: 0xc08c682  jal         func_231A08
label_23f820:
    if (ctx->pc == 0x23F820u) {
        ctx->pc = 0x23F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F81Cu;
        // 0x23f820: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F824u;
        goto label_23f824;
    }
    ctx->pc = 0x23F81Cu;
    SET_GPR_U32(ctx, 31, 0x23F824u);
    ctx->pc = 0x23F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F81Cu;
    // 0x23f820: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23F81Cu, 0x23F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F824u;
label_23f824:
    // 0x23f824: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23f824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23f828:
    // 0x23f828: 0x8e440170  lw          $a0, 0x170($s2)
    ctx->pc = 0x23f828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_23f82c:
    // 0x23f82c: 0x26106010  addiu       $s0, $s0, 0x6010
    ctx->pc = 0x23f82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24592));
label_23f830:
    // 0x23f830: 0xc09038e  jal         func_240E38
label_23f834:
    if (ctx->pc == 0x23F834u) {
        ctx->pc = 0x23F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F830u;
        // 0x23f834: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F838u;
        goto label_23f838;
    }
    ctx->pc = 0x23F830u;
    SET_GPR_U32(ctx, 31, 0x23F838u);
    ctx->pc = 0x23F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F830u;
    // 0x23f834: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E38u, 0x23F830u, 0x23F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F838u;
label_23f838:
    // 0x23f838: 0x8e48018c  lw          $t0, 0x18C($s2)
    ctx->pc = 0x23f838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
label_23f83c:
    // 0x23f83c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23f83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f840:
    // 0x23f840: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23f840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f844:
    // 0x23f844: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23f844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f848:
    // 0x23f848: 0xc08b5ac  jal         func_22D6B0
label_23f84c:
    if (ctx->pc == 0x23F84Cu) {
        ctx->pc = 0x23F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F848u;
        // 0x23f84c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F850u;
        goto label_23f850;
    }
    ctx->pc = 0x23F848u;
    SET_GPR_U32(ctx, 31, 0x23F850u);
    ctx->pc = 0x23F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F848u;
    // 0x23f84c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F848u, 0x23F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F850u;
label_23f850:
    // 0x23f850: 0x8e42018c  lw          $v0, 0x18C($s2)
    ctx->pc = 0x23f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
label_23f854:
    // 0x23f854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23f858:
    // 0x23f858: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_23f85c:
    if (ctx->pc == 0x23F85Cu) {
        ctx->pc = 0x23F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F858u;
        // 0x23f85c: 0xae42018c  sw          $v0, 0x18C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F860u;
        goto label_23f860;
    }
    ctx->pc = 0x23F858u;
    {
        const bool branch_taken_0x23f858 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F858u;
        // 0x23f85c: 0xae42018c  sw          $v0, 0x18C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f858) {
            ctx->pc = 0x23F89Cu;
            goto label_23f89c;
        }
    }
    ctx->pc = 0x23F860u;
label_23f860:
    // 0x23f860: 0x8e430170  lw          $v1, 0x170($s2)
    ctx->pc = 0x23f860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_23f864:
    // 0x23f864: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23f864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23f868:
    // 0x23f868: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_23f86c:
    if (ctx->pc == 0x23F86Cu) {
        ctx->pc = 0x23F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F868u;
        // 0x23f86c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F870u;
        goto label_23f870;
    }
    ctx->pc = 0x23F868u;
    {
        const bool branch_taken_0x23f868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F868u;
        // 0x23f86c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f868) {
            ctx->pc = 0x23F8C4u;
            goto label_23f8c4;
        }
    }
    ctx->pc = 0x23F870u;
label_23f870:
    // 0x23f870: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23f870u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23f874:
    // 0x23f874: 0x26105138  addiu       $s0, $s0, 0x5138
    ctx->pc = 0x23f874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20792));
label_23f878:
    // 0x23f878: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x23f878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_23f87c:
    // 0x23f87c: 0x40f809  jalr        $v0
label_23f880:
    if (ctx->pc == 0x23F880u) {
        ctx->pc = 0x23F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F87Cu;
        // 0x23f880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F884u;
        goto label_23f884;
    }
    ctx->pc = 0x23F87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F884u);
        ctx->pc = 0x23F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F87Cu;
        // 0x23f880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F87Cu, 0x23F884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F884u;
label_23f884:
    // 0x23f884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f888:
    // 0x23f888: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23f888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f88c:
    // 0x23f88c: 0xc08eef2  jal         func_23BBC8
label_23f890:
    if (ctx->pc == 0x23F890u) {
        ctx->pc = 0x23F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F88Cu;
        // 0x23f890: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F894u;
        goto label_23f894;
    }
    ctx->pc = 0x23F88Cu;
    SET_GPR_U32(ctx, 31, 0x23F894u);
    ctx->pc = 0x23F890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F88Cu;
    // 0x23f890: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBC8u, 0x23F88Cu, 0x23F894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F894u;
label_23f894:
    // 0x23f894: 0x1000000b  b           . + 4 + (0xB << 2)
label_23f898:
    if (ctx->pc == 0x23F898u) {
        ctx->pc = 0x23F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F894u;
        // 0x23f898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F89Cu;
        goto label_23f89c;
    }
    ctx->pc = 0x23F894u;
    {
        const bool branch_taken_0x23f894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F894u;
        // 0x23f898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f894) {
            ctx->pc = 0x23F8C4u;
            goto label_23f8c4;
        }
    }
    ctx->pc = 0x23F89Cu;
label_23f89c:
    // 0x23f89c: 0x8e430170  lw          $v1, 0x170($s2)
    ctx->pc = 0x23f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_23f8a0:
    // 0x23f8a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23f8a4:
    // 0x23f8a4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_23f8a8:
    if (ctx->pc == 0x23F8A8u) {
        ctx->pc = 0x23F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8A4u;
        // 0x23f8a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8ACu;
        goto label_23f8ac;
    }
    ctx->pc = 0x23F8A4u;
    {
        const bool branch_taken_0x23f8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8A4u;
        // 0x23f8a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8a4) {
            ctx->pc = 0x23F8C4u;
            goto label_23f8c4;
        }
    }
    ctx->pc = 0x23F8ACu;
label_23f8ac:
    // 0x23f8ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23f8b0:
    // 0x23f8b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23f8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f8b4:
    // 0x23f8b4: 0x24845138  addiu       $a0, $a0, 0x5138
    ctx->pc = 0x23f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20792));
label_23f8b8:
    // 0x23f8b8: 0xc08eef2  jal         func_23BBC8
label_23f8bc:
    if (ctx->pc == 0x23F8BCu) {
        ctx->pc = 0x23F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8B8u;
        // 0x23f8bc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8C0u;
        goto label_23f8c0;
    }
    ctx->pc = 0x23F8B8u;
    SET_GPR_U32(ctx, 31, 0x23F8C0u);
    ctx->pc = 0x23F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8B8u;
    // 0x23f8bc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBC8u, 0x23F8B8u, 0x23F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8C0u;
label_23f8c0:
    // 0x23f8c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23f8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23f8c4:
    // 0x23f8c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23f8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23f8c8:
    // 0x23f8c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23f8c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23f8cc:
    // 0x23f8cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23f8ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23f8d0:
    // 0x23f8d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23f8d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f8d4:
    // 0x23f8d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f8d8:
    // 0x23f8d8: 0x808c698  j           func_231A60
label_23f8dc:
    if (ctx->pc == 0x23F8DCu) {
        ctx->pc = 0x23F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8D8u;
        // 0x23f8dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8E0u;
        goto label_23f8e0;
    }
    ctx->pc = 0x23F8D8u;
    ctx->pc = 0x23F8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8D8u;
    // 0x23f8dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    ctx->pc = 0x23F8E0u;
label_23f8e0:
    // 0x23f8e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23f8e4:
    // 0x23f8e4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f8e8:
    // 0x23f8e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23f8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23f8ec:
    // 0x23f8ec: 0x24a56038  addiu       $a1, $a1, 0x6038
    ctx->pc = 0x23f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24632));
label_23f8f0:
    // 0x23f8f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23f8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23f8f4:
    // 0x23f8f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23f8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f8f8:
    // 0x23f8f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23f8fc:
    // 0x23f8fc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23f900:
    // 0x23f900: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x23f900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_23f904:
    // 0x23f904: 0xc08b5ac  jal         func_22D6B0
label_23f908:
    if (ctx->pc == 0x23F908u) {
        ctx->pc = 0x23F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F904u;
        // 0x23f908: 0x8e270194  lw          $a3, 0x194($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F90Cu;
        goto label_23f90c;
    }
    ctx->pc = 0x23F904u;
    SET_GPR_U32(ctx, 31, 0x23F90Cu);
    ctx->pc = 0x23F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F904u;
    // 0x23f908: 0x8e270194  lw          $a3, 0x194($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F904u, 0x23F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F90Cu;
label_23f90c:
    // 0x23f90c: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x23f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_23f910:
    // 0x23f910: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23f914:
    // 0x23f914: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
label_23f918:
    if (ctx->pc == 0x23F918u) {
        ctx->pc = 0x23F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F914u;
        // 0x23f918: 0xae220194  sw          $v0, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F91Cu;
        goto label_23f91c;
    }
    ctx->pc = 0x23F914u;
    {
        const bool branch_taken_0x23f914 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F914u;
        // 0x23f918: 0xae220194  sw          $v0, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f914) {
            ctx->pc = 0x23F950u;
            goto label_23f950;
        }
    }
    ctx->pc = 0x23F91Cu;
label_23f91c:
    // 0x23f91c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23f91cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23f920:
    // 0x23f920: 0x26105138  addiu       $s0, $s0, 0x5138
    ctx->pc = 0x23f920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20792));
label_23f924:
    // 0x23f924: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x23f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_23f928:
    // 0x23f928: 0x40f809  jalr        $v0
label_23f92c:
    if (ctx->pc == 0x23F92Cu) {
        ctx->pc = 0x23F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F928u;
        // 0x23f92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F930u;
        goto label_23f930;
    }
    ctx->pc = 0x23F928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F930u);
        ctx->pc = 0x23F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F928u;
        // 0x23f92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F928u, 0x23F930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F930u;
label_23f930:
    // 0x23f930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f934:
    // 0x23f934: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23f934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f938:
    // 0x23f938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23f938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23f93c:
    // 0x23f93c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23f93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f940:
    // 0x23f940: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23f940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f944:
    // 0x23f944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f948:
    // 0x23f948: 0x808eef2  j           func_23BBC8
label_23f94c:
    if (ctx->pc == 0x23F94Cu) {
        ctx->pc = 0x23F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F948u;
        // 0x23f94c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F950u;
        goto label_23f950;
    }
    ctx->pc = 0x23F948u;
    ctx->pc = 0x23F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F948u;
    // 0x23f94c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23F950u;
label_23f950:
    // 0x23f950: 0x8e254020  lw          $a1, 0x4020($s1)
    ctx->pc = 0x23f950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_23f954:
    // 0x23f954: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x23f954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
label_23f958:
    // 0x23f958: 0x26240250  addiu       $a0, $s1, 0x250
    ctx->pc = 0x23f958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
label_23f95c:
    // 0x23f95c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x23f95cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f960:
    // 0x23f960: 0xc08a058  jal         func_228160
label_23f964:
    if (ctx->pc == 0x23F964u) {
        ctx->pc = 0x23F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F960u;
        // 0x23f964: 0x24c6f8e0  addiu       $a2, $a2, -0x720 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F968u;
        goto label_23f968;
    }
    ctx->pc = 0x23F960u;
    SET_GPR_U32(ctx, 31, 0x23F968u);
    ctx->pc = 0x23F964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F960u;
    // 0x23f964: 0x24c6f8e0  addiu       $a2, $a2, -0x720 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228160u, 0x23F960u, 0x23F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F968u;
label_23f968:
    // 0x23f968: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23f968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_23f96c:
    // 0x23f96c: 0x8c625170  lw          $v0, 0x5170($v1)
    ctx->pc = 0x23f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20848)));
label_23f970:
    // 0x23f970: 0x40f809  jalr        $v0
label_23f974:
    if (ctx->pc == 0x23F974u) {
        ctx->pc = 0x23F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F970u;
        // 0x23f974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F978u;
        goto label_23f978;
    }
    ctx->pc = 0x23F970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F978u);
        ctx->pc = 0x23F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F970u;
        // 0x23f974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F970u, 0x23F978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F978u;
label_23f978:
    // 0x23f978: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23f978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23f97c:
    // 0x23f97c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23f97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f980:
    // 0x23f980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f984:
    // 0x23f984: 0x3e00008  jr          $ra
label_23f988:
    if (ctx->pc == 0x23F988u) {
        ctx->pc = 0x23F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F984u;
        // 0x23f988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F98Cu;
        goto label_23f98c;
    }
    ctx->pc = 0x23F984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F984u;
        // 0x23f988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F98Cu;
label_23f98c:
    // 0x23f98c: 0x0  nop
    ctx->pc = 0x23f98cu;
    // NOP
label_23f990:
    // 0x23f990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23f994:
    // 0x23f994: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23f994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23f998:
    // 0x23f998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23f99c:
    // 0x23f99c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23f99cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23f9a0:
    // 0x23f9a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23f9a4:
    // 0x23f9a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f9a8:
    // 0x23f9a8: 0x8c47513c  lw          $a3, 0x513C($v0)
    ctx->pc = 0x23f9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20796)));
label_23f9ac:
    // 0x23f9ac: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x23f9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_23f9b0:
    // 0x23f9b0: 0x8e034244  lw          $v1, 0x4244($s0)
    ctx->pc = 0x23f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16964)));
label_23f9b4:
    // 0x23f9b4: 0x24a55380  addiu       $a1, $a1, 0x5380
    ctx->pc = 0x23f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21376));
label_23f9b8:
    // 0x23f9b8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23f9bc:
    // 0x23f9bc: 0xc08b5ac  jal         func_22D6B0
label_23f9c0:
    if (ctx->pc == 0x23F9C0u) {
        ctx->pc = 0x23F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9BCu;
        // 0x23f9c0: 0xae03018c  sw          $v1, 0x18C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F9C4u;
        goto label_23f9c4;
    }
    ctx->pc = 0x23F9BCu;
    SET_GPR_U32(ctx, 31, 0x23F9C4u);
    ctx->pc = 0x23F9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9BCu;
    // 0x23f9c0: 0xae03018c  sw          $v1, 0x18C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23F9BCu, 0x23F9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9C4u;
label_23f9c4:
    // 0x23f9c4: 0xc08c682  jal         func_231A08
label_23f9c8:
    if (ctx->pc == 0x23F9C8u) {
        ctx->pc = 0x23F9CCu;
        goto label_23f9cc;
    }
    ctx->pc = 0x23F9C4u;
    SET_GPR_U32(ctx, 31, 0x23F9CCu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23F9C4u, 0x23F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9CCu;
label_23f9cc:
    // 0x23f9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23f9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f9d0:
    // 0x23f9d0: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x23f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    if (ctx->pc == 0x23f9d0u) { ctx->pc = 0x23f9d4u; }
}
