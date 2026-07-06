#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030D7D0
// Address: 0x30d7d0 - 0x310510
void sub_0030D7D0_0x30d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D7D0_0x30d7d0");
#endif

    switch (ctx->pc) {
        case 0x30d830u: goto label_30d830;
        case 0x30d844u: goto label_30d844;
        case 0x30d890u: goto label_30d890;
        case 0x30d898u: goto label_30d898;
        case 0x30d8b8u: goto label_30d8b8;
        case 0x30d8ecu: goto label_30d8ec;
        case 0x30d954u: goto label_30d954;
        case 0x30d96cu: goto label_30d96c;
        case 0x30d9b0u: goto label_30d9b0;
        case 0x30d9d0u: goto label_30d9d0;
        case 0x30da3cu: goto label_30da3c;
        case 0x30da54u: goto label_30da54;
        case 0x30da70u: goto label_30da70;
        case 0x30dab0u: goto label_30dab0;
        case 0x30dab8u: goto label_30dab8;
        case 0x30dac4u: goto label_30dac4;
        case 0x30daccu: goto label_30dacc;
        case 0x30ddf8u: goto label_30ddf8;
        case 0x30de00u: goto label_30de00;
        case 0x30de08u: goto label_30de08;
        case 0x30de10u: goto label_30de10;
        case 0x30de18u: goto label_30de18;
        case 0x30de24u: goto label_30de24;
        case 0x30de48u: goto label_30de48;
        case 0x30df30u: goto label_30df30;
        case 0x30dfc8u: goto label_30dfc8;
        case 0x30dfe8u: goto label_30dfe8;
        case 0x30e008u: goto label_30e008;
        case 0x30e02cu: goto label_30e02c;
        case 0x30e1c0u: goto label_30e1c0;
        case 0x30e1e0u: goto label_30e1e0;
        case 0x30e200u: goto label_30e200;
        case 0x30e220u: goto label_30e220;
        case 0x30e240u: goto label_30e240;
        case 0x30e260u: goto label_30e260;
        case 0x30e280u: goto label_30e280;
        case 0x30e2a0u: goto label_30e2a0;
        case 0x30e2c0u: goto label_30e2c0;
        case 0x30e2e0u: goto label_30e2e0;
        case 0x30e300u: goto label_30e300;
        case 0x30e30cu: goto label_30e30c;
        case 0x30e320u: goto label_30e320;
        case 0x30e330u: goto label_30e330;
        case 0x30e3acu: goto label_30e3ac;
        case 0x30e420u: goto label_30e420;
        case 0x30e430u: goto label_30e430;
        case 0x30e450u: goto label_30e450;
        case 0x30e478u: goto label_30e478;
        case 0x30e4b0u: goto label_30e4b0;
        case 0x30e4c8u: goto label_30e4c8;
        case 0x30e540u: goto label_30e540;
        case 0x30e564u: goto label_30e564;
        case 0x30e574u: goto label_30e574;
        case 0x30e5d4u: goto label_30e5d4;
        case 0x30e5f0u: goto label_30e5f0;
        case 0x30e630u: goto label_30e630;
        case 0x30e668u: goto label_30e668;
        case 0x30e710u: goto label_30e710;
        case 0x30e724u: goto label_30e724;
        case 0x30e734u: goto label_30e734;
        case 0x30e758u: goto label_30e758;
        case 0x30e780u: goto label_30e780;
        case 0x30e7a0u: goto label_30e7a0;
        case 0x30e7b4u: goto label_30e7b4;
        case 0x30e7bcu: goto label_30e7bc;
        case 0x30e804u: goto label_30e804;
        case 0x30e848u: goto label_30e848;
        case 0x30e850u: goto label_30e850;
        case 0x30e858u: goto label_30e858;
        case 0x30e880u: goto label_30e880;
        case 0x30e890u: goto label_30e890;
        case 0x30e8c0u: goto label_30e8c0;
        case 0x30e8d0u: goto label_30e8d0;
        case 0x30e910u: goto label_30e910;
        case 0x30e918u: goto label_30e918;
        case 0x30e990u: goto label_30e990;
        case 0x30e9e4u: goto label_30e9e4;
        case 0x30ea20u: goto label_30ea20;
        case 0x30ea28u: goto label_30ea28;
        case 0x30ea30u: goto label_30ea30;
        case 0x30ea38u: goto label_30ea38;
        case 0x30ea58u: goto label_30ea58;
        case 0x30ea60u: goto label_30ea60;
        case 0x30ea68u: goto label_30ea68;
        case 0x30ea78u: goto label_30ea78;
        case 0x30eaa0u: goto label_30eaa0;
        case 0x30eaa8u: goto label_30eaa8;
        case 0x30edc8u: goto label_30edc8;
        case 0x30edd0u: goto label_30edd0;
        case 0x30edd8u: goto label_30edd8;
        case 0x30ede0u: goto label_30ede0;
        case 0x30ede8u: goto label_30ede8;
        case 0x30edf4u: goto label_30edf4;
        case 0x30ee3cu: goto label_30ee3c;
        case 0x30f0a0u: goto label_30f0a0;
        case 0x30f118u: goto label_30f118;
        case 0x30f13cu: goto label_30f13c;
        case 0x30f15cu: goto label_30f15c;
        case 0x30f17cu: goto label_30f17c;
        case 0x30f1a0u: goto label_30f1a0;
        case 0x30f378u: goto label_30f378;
        case 0x30f398u: goto label_30f398;
        case 0x30f3b8u: goto label_30f3b8;
        case 0x30f3d8u: goto label_30f3d8;
        case 0x30f3f8u: goto label_30f3f8;
        case 0x30f418u: goto label_30f418;
        case 0x30f438u: goto label_30f438;
        case 0x30f458u: goto label_30f458;
        case 0x30f478u: goto label_30f478;
        case 0x30f498u: goto label_30f498;
        case 0x30f4b8u: goto label_30f4b8;
        case 0x30f4c4u: goto label_30f4c4;
        case 0x30f4d4u: goto label_30f4d4;
        case 0x30f51cu: goto label_30f51c;
        case 0x30f52cu: goto label_30f52c;
        case 0x30f54cu: goto label_30f54c;
        case 0x30f574u: goto label_30f574;
        case 0x30f5acu: goto label_30f5ac;
        case 0x30f5c8u: goto label_30f5c8;
        case 0x30f640u: goto label_30f640;
        case 0x30f664u: goto label_30f664;
        case 0x30f674u: goto label_30f674;
        case 0x30f6d4u: goto label_30f6d4;
        case 0x30f6e4u: goto label_30f6e4;
        case 0x30f718u: goto label_30f718;
        case 0x30f7c0u: goto label_30f7c0;
        case 0x30f7d4u: goto label_30f7d4;
        case 0x30f7e4u: goto label_30f7e4;
        case 0x30f808u: goto label_30f808;
        case 0x30f830u: goto label_30f830;
        case 0x30f850u: goto label_30f850;
        case 0x30f864u: goto label_30f864;
        case 0x30f86cu: goto label_30f86c;
        case 0x30f8b4u: goto label_30f8b4;
        case 0x30f8f8u: goto label_30f8f8;
        case 0x30f900u: goto label_30f900;
        case 0x30f908u: goto label_30f908;
        case 0x30f930u: goto label_30f930;
        case 0x30f940u: goto label_30f940;
        case 0x30f970u: goto label_30f970;
        case 0x30f984u: goto label_30f984;
        case 0x30fa1cu: goto label_30fa1c;
        case 0x30fa60u: goto label_30fa60;
        case 0x30fab0u: goto label_30fab0;
        case 0x30fb2cu: goto label_30fb2c;
        case 0x30fb7cu: goto label_30fb7c;
        case 0x30fbccu: goto label_30fbcc;
        case 0x30fbf4u: goto label_30fbf4;
        case 0x30fc48u: goto label_30fc48;
        case 0x30fc74u: goto label_30fc74;
        case 0x30fcc8u: goto label_30fcc8;
        case 0x30fd1cu: goto label_30fd1c;
        case 0x30fd44u: goto label_30fd44;
        case 0x30fd70u: goto label_30fd70;
        case 0x30fd80u: goto label_30fd80;
        case 0x30fda0u: goto label_30fda0;
        case 0x30fdd0u: goto label_30fdd0;
        case 0x30fe04u: goto label_30fe04;
        case 0x30fe30u: goto label_30fe30;
        case 0x30fe60u: goto label_30fe60;
        case 0x30fe88u: goto label_30fe88;
        case 0x30fea4u: goto label_30fea4;
        case 0x30feb0u: goto label_30feb0;
        case 0x30fee0u: goto label_30fee0;
        case 0x30ff20u: goto label_30ff20;
        case 0x30ff34u: goto label_30ff34;
        case 0x30ff3cu: goto label_30ff3c;
        case 0x30ff44u: goto label_30ff44;
        case 0x30ff4cu: goto label_30ff4c;
        case 0x30ff54u: goto label_30ff54;
        case 0x30ffa0u: goto label_30ffa0;
        case 0x30ffd4u: goto label_30ffd4;
        case 0x31000cu: goto label_31000c;
        case 0x310048u: goto label_310048;
        case 0x310058u: goto label_310058;
        case 0x310084u: goto label_310084;
        case 0x310094u: goto label_310094;
        case 0x310108u: goto label_310108;
        case 0x310164u: goto label_310164;
        case 0x3101a0u: goto label_3101a0;
        case 0x3101b0u: goto label_3101b0;
        case 0x3101c4u: goto label_3101c4;
        case 0x3101ccu: goto label_3101cc;
        case 0x3101d4u: goto label_3101d4;
        case 0x310210u: goto label_310210;
        case 0x3102d8u: goto label_3102d8;
        case 0x310320u: goto label_310320;
        case 0x3103bcu: goto label_3103bc;
        case 0x3103ccu: goto label_3103cc;
        case 0x3103e0u: goto label_3103e0;
        case 0x3103f4u: goto label_3103f4;
        case 0x3103fcu: goto label_3103fc;
        case 0x310404u: goto label_310404;
        case 0x31043cu: goto label_31043c;
        case 0x310460u: goto label_310460;
        case 0x3104c4u: goto label_3104c4;
        case 0x3104d8u: goto label_3104d8;
        case 0x3104fcu: goto label_3104fc;
        default: break;
    }

    ctx->pc = 0x30d7d0u;

label_30d7d0:
    // 0x30d7d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30d7d4: 0x9443dab0  lhu         $v1, -0x2550($v0)
    ctx->pc = 0x30d7d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x30d7d8: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x30d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x30d7dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D7DCu;
    {
        const bool branch_taken_0x30d7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30d7dc) {
            ctx->pc = 0x30D7ECu;
            goto label_30d7ec;
        }
    }
    ctx->pc = 0x30D7E4u;
    // 0x30d7e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30D7E4u;
    {
        const bool branch_taken_0x30d7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D7E4u;
            // 0x30d7e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d7e4) {
            ctx->pc = 0x30D824u;
            goto label_30d824;
        }
    }
    ctx->pc = 0x30D7ECu;
label_30d7ec:
    // 0x30d7ec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30d7f0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x30d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30d7f4: 0x90449780  lbu         $a0, -0x6880($v0)
    ctx->pc = 0x30d7f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30d7f8: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D7F8u;
    {
        const bool branch_taken_0x30d7f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30d7f8) {
            ctx->pc = 0x30D7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D7F8u;
            // 0x30d7fc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D808u;
            goto label_30d808;
        }
    }
    ctx->pc = 0x30D800u;
    // 0x30d800: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30D800u;
    {
        const bool branch_taken_0x30d800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D800u;
            // 0x30d804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d800) {
            ctx->pc = 0x30D824u;
            goto label_30d824;
        }
    }
    ctx->pc = 0x30D808u;
label_30d808:
    // 0x30d808: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D808u;
    {
        const bool branch_taken_0x30d808 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x30d808) {
            ctx->pc = 0x30D818u;
            goto label_30d818;
        }
    }
    ctx->pc = 0x30D810u;
    // 0x30d810: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30D810u;
    {
        const bool branch_taken_0x30d810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D810u;
            // 0x30d814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d810) {
            ctx->pc = 0x30D824u;
            goto label_30d824;
        }
    }
    ctx->pc = 0x30D818u;
label_30d818:
    // 0x30d818: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x30d818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x30d81c: 0x9042b286  lbu         $v0, -0x4D7A($v0)
    ctx->pc = 0x30d81cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947462)));
    // 0x30d820: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30d820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30d824:
    // 0x30d824: 0x3e00008  jr          $ra
    ctx->pc = 0x30D824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30D82Cu;
    // 0x30d82c: 0x0  nop
    ctx->pc = 0x30d82cu;
    // NOP
label_30d830:
    // 0x30d830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d83c: 0xc0c35f4  jal         func_30D7D0
    ctx->pc = 0x30D83Cu;
    SET_GPR_U32(ctx, 31, 0x30D844u);
    ctx->pc = 0x30D840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D83Cu;
            // 0x30d840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D7D0u;
    goto label_30d7d0;
    ctx->pc = 0x30D844u;
label_30d844:
    // 0x30d844: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x30D844u;
    {
        const bool branch_taken_0x30d844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d844) {
            ctx->pc = 0x30D978u;
            goto label_30d978;
        }
    }
    ctx->pc = 0x30D84Cu;
    // 0x30d84c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30d850: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x30d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d854: 0x8c65da48  lw          $a1, -0x25B8($v1)
    ctx->pc = 0x30d854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957640)));
    // 0x30d858: 0x10a4002c  beq         $a1, $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x30D858u;
    {
        const bool branch_taken_0x30d858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x30d858) {
            ctx->pc = 0x30D90Cu;
            goto label_30d90c;
        }
    }
    ctx->pc = 0x30D860u;
    // 0x30d860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d864: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x30D864u;
    {
        const bool branch_taken_0x30d864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d864) {
            ctx->pc = 0x30D8E4u;
            goto label_30d8e4;
        }
    }
    ctx->pc = 0x30D86Cu;
    // 0x30d86c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d870: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D870u;
    {
        const bool branch_taken_0x30d870 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d870) {
            ctx->pc = 0x30D888u;
            goto label_30d888;
        }
    }
    ctx->pc = 0x30D878u;
    // 0x30d878: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D878u;
    {
        const bool branch_taken_0x30d878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d878) {
            ctx->pc = 0x30D888u;
            goto label_30d888;
        }
    }
    ctx->pc = 0x30D880u;
    // 0x30d880: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x30D880u;
    {
        const bool branch_taken_0x30d880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D880u;
            // 0x30d884: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d880) {
            ctx->pc = 0x30DA60u;
            goto label_30da60;
        }
    }
    ctx->pc = 0x30D888u;
label_30d888:
    // 0x30d888: 0xc0c8234  jal         func_3208D0
    ctx->pc = 0x30D888u;
    SET_GPR_U32(ctx, 31, 0x30D890u);
    ctx->pc = 0x3208D0u;
    if (runtime->hasFunction(0x3208D0u)) {
        auto targetFn = runtime->lookupFunction(0x3208D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D890u; }
        if (ctx->pc != 0x30D890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003208D0_0x3208d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D890u; }
        if (ctx->pc != 0x30D890u) { return; }
    }
    ctx->pc = 0x30D890u;
label_30d890:
    // 0x30d890: 0xc066e00  jal         func_19B800
    ctx->pc = 0x30D890u;
    SET_GPR_U32(ctx, 31, 0x30D898u);
    ctx->pc = 0x30D894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D890u;
            // 0x30d894: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B800u;
    if (runtime->hasFunction(0x19B800u)) {
        auto targetFn = runtime->lookupFunction(0x19B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D898u; }
        if (ctx->pc != 0x30D898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B800_0x19b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D898u; }
        if (ctx->pc != 0x30D898u) { return; }
    }
    ctx->pc = 0x30D898u;
label_30d898:
    // 0x30d898: 0x3c02402f  lui         $v0, 0x402F
    ctx->pc = 0x30d898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16431 << 16));
    // 0x30d89c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x30d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30d8a0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x30d8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x30d8a4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x30d8a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30d8a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30d8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d8ac: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30d8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30d8b0: 0xc066e30  jal         func_19B8C0
    ctx->pc = 0x30D8B0u;
    SET_GPR_U32(ctx, 31, 0x30D8B8u);
    ctx->pc = 0x30D8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D8B0u;
            // 0x30d8b4: 0x25083618  addiu       $t0, $t0, 0x3618 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B8C0u;
    if (runtime->hasFunction(0x19B8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19B8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D8B8u; }
        if (ctx->pc != 0x30D8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B8C0_0x19b8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D8B8u; }
        if (ctx->pc != 0x30D8B8u) { return; }
    }
    ctx->pc = 0x30D8B8u;
label_30d8b8:
    // 0x30d8b8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30d8bc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30d8c0: 0x9066dae0  lbu         $a2, -0x2520($v1)
    ctx->pc = 0x30d8c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x30d8c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30d8c8: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x30d8c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x30d8cc: 0x8c65da48  lw          $a1, -0x25B8($v1)
    ctx->pc = 0x30d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957640)));
    // 0x30d8d0: 0xa086dae0  sb          $a2, -0x2520($a0)
    ctx->pc = 0x30d8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294957792), (uint8_t)GPR_U32(ctx, 6));
    // 0x30d8d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30d8d8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x30d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30d8dc: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x30D8DCu;
    {
        const bool branch_taken_0x30d8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D8DCu;
            // 0x30d8e0: 0xac64da48  sw          $a0, -0x25B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957640), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8dc) {
            ctx->pc = 0x30DA5Cu;
            goto label_30da5c;
        }
    }
    ctx->pc = 0x30D8E4u;
label_30d8e4:
    // 0x30d8e4: 0xc0c8358  jal         func_320D60
    ctx->pc = 0x30D8E4u;
    SET_GPR_U32(ctx, 31, 0x30D8ECu);
    ctx->pc = 0x320D60u;
    if (runtime->hasFunction(0x320D60u)) {
        auto targetFn = runtime->lookupFunction(0x320D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D8ECu; }
        if (ctx->pc != 0x30D8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00320D60_0x320d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D8ECu; }
        if (ctx->pc != 0x30D8ECu) { return; }
    }
    ctx->pc = 0x30D8ECu;
label_30d8ec:
    // 0x30d8ec: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x30D8ECu;
    {
        const bool branch_taken_0x30d8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d8ec) {
            ctx->pc = 0x30DA5Cu;
            goto label_30da5c;
        }
    }
    ctx->pc = 0x30D8F4u;
    // 0x30d8f4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30d8f8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30d8fc: 0x8c84da48  lw          $a0, -0x25B8($a0)
    ctx->pc = 0x30d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957640)));
    // 0x30d900: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30d900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30d904: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x30D904u;
    {
        const bool branch_taken_0x30d904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D904u;
            // 0x30d908: 0xac64da48  sw          $a0, -0x25B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957640), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d904) {
            ctx->pc = 0x30DA5Cu;
            goto label_30da5c;
        }
    }
    ctx->pc = 0x30D90Cu;
label_30d90c:
    // 0x30d90c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30d910: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x30d910u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x30d914: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x30d914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30d918: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30D918u;
    {
        const bool branch_taken_0x30d918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x30d918) {
            ctx->pc = 0x30D934u;
            goto label_30d934;
        }
    }
    ctx->pc = 0x30D920u;
    // 0x30d920: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30d920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30d924: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30d924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30d928: 0x8c63da10  lw          $v1, -0x25F0($v1)
    ctx->pc = 0x30d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957584)));
    // 0x30d92c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30d930: 0xac43da10  sw          $v1, -0x25F0($v0)
    ctx->pc = 0x30d930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957584), GPR_U32(ctx, 3));
label_30d934:
    // 0x30d934: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30d934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30d938: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x30d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30d93c: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x30d93cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30d940: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30D940u;
    {
        const bool branch_taken_0x30d940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30d940) {
            ctx->pc = 0x30D95Cu;
            goto label_30d95c;
        }
    }
    ctx->pc = 0x30D948u;
    // 0x30d948: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30d948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30d94c: 0xc0d4650  jal         func_351940
    ctx->pc = 0x30D94Cu;
    SET_GPR_U32(ctx, 31, 0x30D954u);
    ctx->pc = 0x30D950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D94Cu;
            // 0x30d950: 0x2484da70  addiu       $a0, $a0, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351940u;
    if (runtime->hasFunction(0x351940u)) {
        auto targetFn = runtime->lookupFunction(0x351940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D954u; }
        if (ctx->pc != 0x30D954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351940_0x351940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D954u; }
        if (ctx->pc != 0x30D954u) { return; }
    }
    ctx->pc = 0x30D954u;
label_30d954:
    // 0x30d954: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30D954u;
    {
        const bool branch_taken_0x30d954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d954) {
            ctx->pc = 0x30D96Cu;
            goto label_30d96c;
        }
    }
    ctx->pc = 0x30D95Cu;
label_30d95c:
    // 0x30d95c: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30d960: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d964: 0xc055768  jal         func_155DA0
    ctx->pc = 0x30D964u;
    SET_GPR_U32(ctx, 31, 0x30D96Cu);
    ctx->pc = 0x30D968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D964u;
            // 0x30d968: 0x2484da70  addiu       $a0, $a0, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D96Cu; }
        if (ctx->pc != 0x30D96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D96Cu; }
        if (ctx->pc != 0x30D96Cu) { return; }
    }
    ctx->pc = 0x30D96Cu;
label_30d96c:
    // 0x30d96c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30d970: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x30D970u;
    {
        const bool branch_taken_0x30d970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D970u;
            // 0x30d974: 0xac60da48  sw          $zero, -0x25B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d970) {
            ctx->pc = 0x30DA5Cu;
            goto label_30da5c;
        }
    }
    ctx->pc = 0x30D978u;
label_30d978:
    // 0x30d978: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30d978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30d97c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d980: 0x8c65da48  lw          $a1, -0x25B8($v1)
    ctx->pc = 0x30d980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957640)));
    // 0x30d984: 0x10a4001a  beq         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x30D984u;
    {
        const bool branch_taken_0x30d984 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x30d984) {
            ctx->pc = 0x30D9F0u;
            goto label_30d9f0;
        }
    }
    ctx->pc = 0x30D98Cu;
    // 0x30d98c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d990: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30D990u;
    {
        const bool branch_taken_0x30d990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d990) {
            ctx->pc = 0x30D9C8u;
            goto label_30d9c8;
        }
    }
    ctx->pc = 0x30D998u;
    // 0x30d998: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D998u;
    {
        const bool branch_taken_0x30d998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d998) {
            ctx->pc = 0x30D9A8u;
            goto label_30d9a8;
        }
    }
    ctx->pc = 0x30D9A0u;
    // 0x30d9a0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x30D9A0u;
    {
        const bool branch_taken_0x30d9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d9a0) {
            ctx->pc = 0x30DA5Cu;
            goto label_30da5c;
        }
    }
    ctx->pc = 0x30D9A8u;
label_30d9a8:
    // 0x30d9a8: 0xc0c8234  jal         func_3208D0
    ctx->pc = 0x30D9A8u;
    SET_GPR_U32(ctx, 31, 0x30D9B0u);
    ctx->pc = 0x3208D0u;
    if (runtime->hasFunction(0x3208D0u)) {
        auto targetFn = runtime->lookupFunction(0x3208D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9B0u; }
        if (ctx->pc != 0x30D9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003208D0_0x3208d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9B0u; }
        if (ctx->pc != 0x30D9B0u) { return; }
    }
    ctx->pc = 0x30D9B0u;
label_30d9b0:
    // 0x30d9b0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30d9b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30d9b8: 0x8c84da48  lw          $a0, -0x25B8($a0)
    ctx->pc = 0x30d9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957640)));
    // 0x30d9bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30d9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30d9c0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x30D9C0u;
    {
        const bool branch_taken_0x30d9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9C0u;
            // 0x30d9c4: 0xac64da48  sw          $a0, -0x25B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957640), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9c0) {
            ctx->pc = 0x30DA5Cu;
            goto label_30da5c;
        }
    }
    ctx->pc = 0x30D9C8u;
label_30d9c8:
    // 0x30d9c8: 0xc0c8240  jal         func_320900
    ctx->pc = 0x30D9C8u;
    SET_GPR_U32(ctx, 31, 0x30D9D0u);
    ctx->pc = 0x320900u;
    if (runtime->hasFunction(0x320900u)) {
        auto targetFn = runtime->lookupFunction(0x320900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9D0u; }
        if (ctx->pc != 0x30D9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00320900_0x320900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9D0u; }
        if (ctx->pc != 0x30D9D0u) { return; }
    }
    ctx->pc = 0x30D9D0u;
label_30d9d0:
    // 0x30d9d0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30D9D0u;
    {
        const bool branch_taken_0x30d9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d9d0) {
            ctx->pc = 0x30DA5Cu;
            goto label_30da5c;
        }
    }
    ctx->pc = 0x30D9D8u;
    // 0x30d9d8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30d9dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30d9e0: 0x8c84da48  lw          $a0, -0x25B8($a0)
    ctx->pc = 0x30d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957640)));
    // 0x30d9e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30d9e8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x30D9E8u;
    {
        const bool branch_taken_0x30d9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9E8u;
            // 0x30d9ec: 0xac64da48  sw          $a0, -0x25B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957640), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9e8) {
            ctx->pc = 0x30DA5Cu;
            goto label_30da5c;
        }
    }
    ctx->pc = 0x30D9F0u;
label_30d9f0:
    // 0x30d9f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30d9f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d9f8: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x30d9f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x30d9fc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x30d9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30da00: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DA00u;
    {
        const bool branch_taken_0x30da00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30da00) {
            ctx->pc = 0x30DA1Cu;
            goto label_30da1c;
        }
    }
    ctx->pc = 0x30DA08u;
    // 0x30da08: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30da08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30da0c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30da10: 0x8c63da10  lw          $v1, -0x25F0($v1)
    ctx->pc = 0x30da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957584)));
    // 0x30da14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30da14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30da18: 0xac43da10  sw          $v1, -0x25F0($v0)
    ctx->pc = 0x30da18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957584), GPR_U32(ctx, 3));
label_30da1c:
    // 0x30da1c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30da20: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x30da20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30da24: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x30da24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30da28: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DA28u;
    {
        const bool branch_taken_0x30da28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30da28) {
            ctx->pc = 0x30DA44u;
            goto label_30da44;
        }
    }
    ctx->pc = 0x30DA30u;
    // 0x30da30: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30da30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30da34: 0xc0d4650  jal         func_351940
    ctx->pc = 0x30DA34u;
    SET_GPR_U32(ctx, 31, 0x30DA3Cu);
    ctx->pc = 0x30DA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA34u;
            // 0x30da38: 0x2484da70  addiu       $a0, $a0, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351940u;
    if (runtime->hasFunction(0x351940u)) {
        auto targetFn = runtime->lookupFunction(0x351940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA3Cu; }
        if (ctx->pc != 0x30DA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351940_0x351940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA3Cu; }
        if (ctx->pc != 0x30DA3Cu) { return; }
    }
    ctx->pc = 0x30DA3Cu;
label_30da3c:
    // 0x30da3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30DA3Cu;
    {
        const bool branch_taken_0x30da3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30da3c) {
            ctx->pc = 0x30DA54u;
            goto label_30da54;
        }
    }
    ctx->pc = 0x30DA44u;
label_30da44:
    // 0x30da44: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30da44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30da48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30da48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da4c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x30DA4Cu;
    SET_GPR_U32(ctx, 31, 0x30DA54u);
    ctx->pc = 0x30DA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA4Cu;
            // 0x30da50: 0x2484da70  addiu       $a0, $a0, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA54u; }
        if (ctx->pc != 0x30DA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA54u; }
        if (ctx->pc != 0x30DA54u) { return; }
    }
    ctx->pc = 0x30DA54u;
label_30da54:
    // 0x30da54: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30da54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30da58: 0xac60da48  sw          $zero, -0x25B8($v1)
    ctx->pc = 0x30da58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957640), GPR_U32(ctx, 0));
label_30da5c:
    // 0x30da5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30da5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30da60:
    // 0x30da60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30da60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30da64: 0x3e00008  jr          $ra
    ctx->pc = 0x30DA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA64u;
            // 0x30da68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30DA6Cu;
    // 0x30da6c: 0x0  nop
    ctx->pc = 0x30da6cu;
    // NOP
label_30da70:
    // 0x30da70: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x30da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x30da74: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x30da74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x30da78: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x30da78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x30da7c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x30da7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x30da80: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x30da80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x30da84: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30da84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30da88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30da88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30da8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30da8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30da90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30da90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30da94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30da94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30da98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30da98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30da9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30da9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30daa0: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x30daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
    // 0x30daa4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30daa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30daa8: 0xc055684  jal         func_155A10
    ctx->pc = 0x30DAA8u;
    SET_GPR_U32(ctx, 31, 0x30DAB0u);
    ctx->pc = 0x30DAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DAA8u;
            // 0x30daac: 0xac400398  sw          $zero, 0x398($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DAB0u; }
        if (ctx->pc != 0x30DAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DAB0u; }
        if (ctx->pc != 0x30DAB0u) { return; }
    }
    ctx->pc = 0x30DAB0u;
label_30dab0:
    // 0x30dab0: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x30DAB0u;
    SET_GPR_U32(ctx, 31, 0x30DAB8u);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DAB8u; }
        if (ctx->pc != 0x30DAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DAB8u; }
        if (ctx->pc != 0x30DAB8u) { return; }
    }
    ctx->pc = 0x30DAB8u;
label_30dab8:
    // 0x30dab8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dabc: 0xc054330  jal         func_150CC0
    ctx->pc = 0x30DABCu;
    SET_GPR_U32(ctx, 31, 0x30DAC4u);
    ctx->pc = 0x30DAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DABCu;
            // 0x30dac0: 0xa040da00  sb          $zero, -0x2600($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957568), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150CC0u;
    if (runtime->hasFunction(0x150CC0u)) {
        auto targetFn = runtime->lookupFunction(0x150CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DAC4u; }
        if (ctx->pc != 0x30DAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150CC0_0x150cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DAC4u; }
        if (ctx->pc != 0x30DAC4u) { return; }
    }
    ctx->pc = 0x30DAC4u;
label_30dac4:
    // 0x30dac4: 0xc0c7d84  jal         func_31F610
    ctx->pc = 0x30DAC4u;
    SET_GPR_U32(ctx, 31, 0x30DACCu);
    ctx->pc = 0x31F610u;
    if (runtime->hasFunction(0x31F610u)) {
        auto targetFn = runtime->lookupFunction(0x31F610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DACCu; }
        if (ctx->pc != 0x30DACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031F610_0x31f610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DACCu; }
        if (ctx->pc != 0x30DACCu) { return; }
    }
    ctx->pc = 0x30DACCu;
label_30dacc:
    // 0x30dacc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30daccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30dad0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dad4: 0xa043da50  sb          $v1, -0x25B0($v0)
    ctx->pc = 0x30dad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 3));
    // 0x30dad8: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x30dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x30dadc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30dae0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dae4: 0xa464da60  sh          $a0, -0x25A0($v1)
    ctx->pc = 0x30dae4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957664), (uint16_t)GPR_U32(ctx, 4));
    // 0x30dae8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30daec: 0xa440da66  sh          $zero, -0x259A($v0)
    ctx->pc = 0x30daecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957670), (uint16_t)GPR_U32(ctx, 0));
    // 0x30daf0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30daf4: 0xa460da68  sh          $zero, -0x2598($v1)
    ctx->pc = 0x30daf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957672), (uint16_t)GPR_U32(ctx, 0));
    // 0x30daf8: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x30daf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30dafc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x30dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30db00: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DB00u;
    {
        const bool branch_taken_0x30db00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x30db00) {
            ctx->pc = 0x30DB10u;
            goto label_30db10;
        }
    }
    ctx->pc = 0x30DB08u;
    // 0x30db08: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x30db08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x30db0c: 0xac40e8d0  sw          $zero, -0x1730($v0)
    ctx->pc = 0x30db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 0));
label_30db10:
    // 0x30db10: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x30db10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x30db14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30db14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30db18: 0x9042f35b  lbu         $v0, -0xCA5($v0)
    ctx->pc = 0x30db18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x30db1c: 0x14440031  bne         $v0, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x30DB1Cu;
    {
        const bool branch_taken_0x30db1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x30db1c) {
            ctx->pc = 0x30DBE4u;
            goto label_30dbe4;
        }
    }
    ctx->pc = 0x30DB24u;
    // 0x30db24: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x30db24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x30db28: 0x9084b272  lbu         $a0, -0x4D8E($a0)
    ctx->pc = 0x30db28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947442)));
    // 0x30db2c: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x30db2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x30db30: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x30DB30u;
    {
        const bool branch_taken_0x30db30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30db30) {
            ctx->pc = 0x30DB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB30u;
            // 0x30db34: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30DB88u;
            goto label_30db88;
        }
    }
    ctx->pc = 0x30DB38u;
    // 0x30db38: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30db38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30db3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30db40: 0x24a53660  addiu       $a1, $a1, 0x3660
    ctx->pc = 0x30db40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13920));
    // 0x30db44: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30db44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30db48: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x30db48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30db4c: 0x800008  jr          $a0
    ctx->pc = 0x30DB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30DB54u: goto label_30db54;
            case 0x30DB6Cu: goto label_30db6c;
            case 0x30DB84u: goto label_30db84;
            case 0x30DB9Cu: goto label_30db9c;
            case 0x30DBB4u: goto label_30dbb4;
            case 0x30DBCCu: goto label_30dbcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30DB54u;
label_30db54:
    // 0x30db54: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x30db54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x30db58: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30db58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30db5c: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30db5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30db60: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30db60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30db64: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x30DB64u;
    {
        const bool branch_taken_0x30db64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB64u;
            // 0x30db68: 0xa485da62  sh          $a1, -0x259E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db64) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DB6Cu;
label_30db6c:
    // 0x30db6c: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x30db6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x30db70: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30db70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30db74: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30db74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30db78: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30db78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30db7c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x30DB7Cu;
    {
        const bool branch_taken_0x30db7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB7Cu;
            // 0x30db80: 0xa485da62  sh          $a1, -0x259E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db7c) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DB84u;
label_30db84:
    // 0x30db84: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x30db84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_30db88:
    // 0x30db88: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30db88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30db8c: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30db8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30db90: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30db90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30db94: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x30DB94u;
    {
        const bool branch_taken_0x30db94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB94u;
            // 0x30db98: 0xa485da62  sh          $a1, -0x259E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db94) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DB9Cu;
label_30db9c:
    // 0x30db9c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x30db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30dba0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dba4: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30dba4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30dba8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dbac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x30DBACu;
    {
        const bool branch_taken_0x30dbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBACu;
            // 0x30dbb0: 0xa485da62  sh          $a1, -0x259E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbac) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DBB4u;
label_30dbb4:
    // 0x30dbb4: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x30dbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x30dbb8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dbbc: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30dbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30dbc0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dbc4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x30DBC4u;
    {
        const bool branch_taken_0x30dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBC4u;
            // 0x30dbc8: 0xa485da62  sh          $a1, -0x259E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbc4) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DBCCu;
label_30dbcc:
    // 0x30dbcc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30dbd0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dbd4: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30dbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30dbd8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dbdc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x30DBDCu;
    {
        const bool branch_taken_0x30dbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBDCu;
            // 0x30dbe0: 0xa485da62  sh          $a1, -0x259E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbdc) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DBE4u;
label_30dbe4:
    // 0x30dbe4: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x30dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x30dbe8: 0x9084b272  lbu         $a0, -0x4D8E($a0)
    ctx->pc = 0x30dbe8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947442)));
    // 0x30dbec: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x30dbecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x30dbf0: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x30DBF0u;
    {
        const bool branch_taken_0x30dbf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dbf0) {
            ctx->pc = 0x30DBF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBF0u;
            // 0x30dbf4: 0x2405006c  addiu       $a1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30DC48u;
            goto label_30dc48;
        }
    }
    ctx->pc = 0x30DBF8u;
    // 0x30dbf8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30dbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30dbfc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30dc00: 0x24a53640  addiu       $a1, $a1, 0x3640
    ctx->pc = 0x30dc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13888));
    // 0x30dc04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30dc08: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x30dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30dc0c: 0x800008  jr          $a0
    ctx->pc = 0x30DC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30DC14u: goto label_30dc14;
            case 0x30DC2Cu: goto label_30dc2c;
            case 0x30DC44u: goto label_30dc44;
            case 0x30DC5Cu: goto label_30dc5c;
            case 0x30DC74u: goto label_30dc74;
            case 0x30DC8Cu: goto label_30dc8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30DC14u;
label_30dc14:
    // 0x30dc14: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x30dc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x30dc18: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc1c: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30dc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30dc20: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x30DC24u;
    {
        const bool branch_taken_0x30dc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC24u;
            // 0x30dc28: 0xa485da62  sh          $a1, -0x259E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc24) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DC2Cu;
label_30dc2c:
    // 0x30dc2c: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x30dc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x30dc30: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc34: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30dc34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30dc38: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc3c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30DC3Cu;
    {
        const bool branch_taken_0x30dc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC3Cu;
            // 0x30dc40: 0xa485da62  sh          $a1, -0x259E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc3c) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DC44u;
label_30dc44:
    // 0x30dc44: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x30dc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_30dc48:
    // 0x30dc48: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc4c: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30dc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30dc50: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc54: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30DC54u;
    {
        const bool branch_taken_0x30dc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC54u;
            // 0x30dc58: 0xa485da62  sh          $a1, -0x259E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc54) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DC5Cu;
label_30dc5c:
    // 0x30dc5c: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x30dc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x30dc60: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc64: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30dc64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30dc68: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30DC6Cu;
    {
        const bool branch_taken_0x30dc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC6Cu;
            // 0x30dc70: 0xa485da62  sh          $a1, -0x259E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc6c) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DC74u;
label_30dc74:
    // 0x30dc74: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x30dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30dc78: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc7c: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30dc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30dc80: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30DC84u;
    {
        const bool branch_taken_0x30dc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC84u;
            // 0x30dc88: 0xa485da62  sh          $a1, -0x259E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc84) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DC8Cu;
label_30dc8c:
    // 0x30dc8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30dc90: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc94: 0xa485da64  sh          $a1, -0x259C($a0)
    ctx->pc = 0x30dc94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30dc98: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30dc9c: 0xa485da62  sh          $a1, -0x259E($a0)
    ctx->pc = 0x30dc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957666), (uint16_t)GPR_U32(ctx, 5));
label_30dca0:
    // 0x30dca0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x30dca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30dca4: 0x5064002a  beql        $v1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x30DCA4u;
    {
        const bool branch_taken_0x30dca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x30dca4) {
            ctx->pc = 0x30DCA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCA4u;
            // 0x30dca8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30DD50u;
            goto label_30dd50;
        }
    }
    ctx->pc = 0x30DCACu;
    // 0x30dcac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x30dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30dcb0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30DCB0u;
    {
        const bool branch_taken_0x30dcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dcb0) {
            ctx->pc = 0x30DCFCu;
            goto label_30dcfc;
        }
    }
    ctx->pc = 0x30DCB8u;
    // 0x30dcb8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x30dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30dcbc: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30DCBCu;
    {
        const bool branch_taken_0x30dcbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dcbc) {
            ctx->pc = 0x30DCC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCBCu;
            // 0x30dcc0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30DCE8u;
            goto label_30dce8;
        }
    }
    ctx->pc = 0x30DCC4u;
    // 0x30dcc4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x30dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30dcc8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DCC8u;
    {
        const bool branch_taken_0x30dcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dcc8) {
            ctx->pc = 0x30DCE4u;
            goto label_30dce4;
        }
    }
    ctx->pc = 0x30DCD0u;
    // 0x30dcd0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x30dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30dcd4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DCD4u;
    {
        const bool branch_taken_0x30dcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dcd4) {
            ctx->pc = 0x30DCE4u;
            goto label_30dce4;
        }
    }
    ctx->pc = 0x30DCDCu;
    // 0x30dcdc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x30DCDCu;
    {
        const bool branch_taken_0x30dcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dcdc) {
            ctx->pc = 0x30DD80u;
            goto label_30dd80;
        }
    }
    ctx->pc = 0x30DCE4u;
label_30dce4:
    // 0x30dce4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30dce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30dce8:
    // 0x30dce8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dcec: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30dcecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30dcf0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dcf4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30DCF4u;
    {
        const bool branch_taken_0x30dcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCF4u;
            // 0x30dcf8: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dcf4) {
            ctx->pc = 0x30DD80u;
            goto label_30dd80;
        }
    }
    ctx->pc = 0x30DCFCu;
label_30dcfc:
    // 0x30dcfc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x30dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x30dd00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30dd04: 0x8446bf0a  lh          $a2, -0x40F6($v0)
    ctx->pc = 0x30dd04u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950666)));
    // 0x30dd08: 0x14c50009  bne         $a2, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30DD08u;
    {
        const bool branch_taken_0x30dd08 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x30dd08) {
            ctx->pc = 0x30DD30u;
            goto label_30dd30;
        }
    }
    ctx->pc = 0x30DD10u;
    // 0x30dd10: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x30dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x30dd14: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dd18: 0xa444da60  sh          $a0, -0x25A0($v0)
    ctx->pc = 0x30dd18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957664), (uint16_t)GPR_U32(ctx, 4));
    // 0x30dd1c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dd20: 0xa445da64  sh          $a1, -0x259C($v0)
    ctx->pc = 0x30dd20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30dd24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dd28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x30DD28u;
    {
        const bool branch_taken_0x30dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD28u;
            // 0x30dd2c: 0xa445da62  sh          $a1, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd28) {
            ctx->pc = 0x30DD80u;
            goto label_30dd80;
        }
    }
    ctx->pc = 0x30DD30u;
label_30dd30:
    // 0x30dd30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dd34: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x30dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x30dd38: 0xa446da60  sh          $a2, -0x25A0($v0)
    ctx->pc = 0x30dd38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957664), (uint16_t)GPR_U32(ctx, 6));
    // 0x30dd3c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dd40: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30dd40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30dd44: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dd48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30DD48u;
    {
        const bool branch_taken_0x30dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD48u;
            // 0x30dd4c: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd48) {
            ctx->pc = 0x30DD80u;
            goto label_30dd80;
        }
    }
    ctx->pc = 0x30DD50u;
label_30dd50:
    // 0x30dd50: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DD50u;
    {
        const bool branch_taken_0x30dd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x30dd50) {
            ctx->pc = 0x30DD54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD50u;
            // 0x30dd54: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30DD70u;
            goto label_30dd70;
        }
    }
    ctx->pc = 0x30DD58u;
    // 0x30dd58: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x30dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x30dd5c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dd60: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30dd60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30dd64: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dd68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30DD68u;
    {
        const bool branch_taken_0x30dd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD68u;
            // 0x30dd6c: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd68) {
            ctx->pc = 0x30DD80u;
            goto label_30dd80;
        }
    }
    ctx->pc = 0x30DD70u;
label_30dd70:
    // 0x30dd70: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dd74: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30dd74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30dd78: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dd7c: 0xa444da62  sh          $a0, -0x259E($v0)
    ctx->pc = 0x30dd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
label_30dd80:
    // 0x30dd80: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x30dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x30dd84: 0x9042f35c  lbu         $v0, -0xCA4($v0)
    ctx->pc = 0x30dd84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964060)));
    // 0x30dd88: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30DD88u;
    {
        const bool branch_taken_0x30dd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dd88) {
            ctx->pc = 0x30DDC8u;
            goto label_30ddc8;
        }
    }
    ctx->pc = 0x30DD90u;
    // 0x30dd90: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x30dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30dd94: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30DD94u;
    {
        const bool branch_taken_0x30dd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dd94) {
            ctx->pc = 0x30DDC8u;
            goto label_30ddc8;
        }
    }
    ctx->pc = 0x30DD9Cu;
    // 0x30dd9c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30dda0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dda4: 0x9063db55  lbu         $v1, -0x24AB($v1)
    ctx->pc = 0x30dda4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957909)));
    // 0x30dda8: 0x9042dd9d  lbu         $v0, -0x2263($v0)
    ctx->pc = 0x30dda8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958493)));
    // 0x30ddac: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DDACu;
    {
        const bool branch_taken_0x30ddac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30ddac) {
            ctx->pc = 0x30DDC8u;
            goto label_30ddc8;
        }
    }
    ctx->pc = 0x30DDB4u;
    // 0x30ddb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ddb8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ddbc: 0xa443da64  sh          $v1, -0x259C($v0)
    ctx->pc = 0x30ddbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 3));
    // 0x30ddc0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ddc4: 0xa443da62  sh          $v1, -0x259E($v0)
    ctx->pc = 0x30ddc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 3));
label_30ddc8:
    // 0x30ddc8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ddcc: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x30ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x30ddd0: 0x9442dab0  lhu         $v0, -0x2550($v0)
    ctx->pc = 0x30ddd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x30ddd4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DDD4u;
    {
        const bool branch_taken_0x30ddd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30ddd4) {
            ctx->pc = 0x30DDF0u;
            goto label_30ddf0;
        }
    }
    ctx->pc = 0x30DDDCu;
    // 0x30dddc: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x30dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x30dde0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dde4: 0xa443da64  sh          $v1, -0x259C($v0)
    ctx->pc = 0x30dde4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 3));
    // 0x30dde8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ddec: 0xa443da62  sh          $v1, -0x259E($v0)
    ctx->pc = 0x30ddecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 3));
label_30ddf0:
    // 0x30ddf0: 0xc05ce28  jal         func_1738A0
    ctx->pc = 0x30DDF0u;
    SET_GPR_U32(ctx, 31, 0x30DDF8u);
    ctx->pc = 0x1738A0u;
    if (runtime->hasFunction(0x1738A0u)) {
        auto targetFn = runtime->lookupFunction(0x1738A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DDF8u; }
        if (ctx->pc != 0x30DDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001738A0_0x1738a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DDF8u; }
        if (ctx->pc != 0x30DDF8u) { return; }
    }
    ctx->pc = 0x30DDF8u;
label_30ddf8:
    // 0x30ddf8: 0xc0548a4  jal         func_152290
    ctx->pc = 0x30DDF8u;
    SET_GPR_U32(ctx, 31, 0x30DE00u);
    ctx->pc = 0x152290u;
    if (runtime->hasFunction(0x152290u)) {
        auto targetFn = runtime->lookupFunction(0x152290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DE00u; }
        if (ctx->pc != 0x30DE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152290_0x152290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DE00u; }
        if (ctx->pc != 0x30DE00u) { return; }
    }
    ctx->pc = 0x30DE00u;
label_30de00:
    // 0x30de00: 0xc05fa14  jal         func_17E850
    ctx->pc = 0x30DE00u;
    SET_GPR_U32(ctx, 31, 0x30DE08u);
    ctx->pc = 0x17E850u;
    if (runtime->hasFunction(0x17E850u)) {
        auto targetFn = runtime->lookupFunction(0x17E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DE08u; }
        if (ctx->pc != 0x30DE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E850_0x17e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DE08u; }
        if (ctx->pc != 0x30DE08u) { return; }
    }
    ctx->pc = 0x30DE08u;
label_30de08:
    // 0x30de08: 0xc05f6e8  jal         func_17DBA0
    ctx->pc = 0x30DE08u;
    SET_GPR_U32(ctx, 31, 0x30DE10u);
    ctx->pc = 0x17DBA0u;
    if (runtime->hasFunction(0x17DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x17DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DE10u; }
        if (ctx->pc != 0x30DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DBA0_0x17dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DE10u; }
        if (ctx->pc != 0x30DE10u) { return; }
    }
    ctx->pc = 0x30DE10u;
label_30de10:
    // 0x30de10: 0xc0570bc  jal         func_15C2F0
    ctx->pc = 0x30DE10u;
    SET_GPR_U32(ctx, 31, 0x30DE18u);
    ctx->pc = 0x15C2F0u;
    if (runtime->hasFunction(0x15C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x15C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DE18u; }
        if (ctx->pc != 0x30DE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C2F0_0x15c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DE18u; }
        if (ctx->pc != 0x30DE18u) { return; }
    }
    ctx->pc = 0x30DE18u;
label_30de18:
    // 0x30de18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30de18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30de1c: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x30DE1Cu;
    SET_GPR_U32(ctx, 31, 0x30DE24u);
    ctx->pc = 0x30DE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DE1Cu;
            // 0x30de20: 0xac40a1f8  sw          $zero, -0x5E08($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (runtime->hasFunction(0x12E930u)) {
        auto targetFn = runtime->lookupFunction(0x12E930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DE24u; }
        if (ctx->pc != 0x30DE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E930_0x12e930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DE24u; }
        if (ctx->pc != 0x30DE24u) { return; }
    }
    ctx->pc = 0x30DE24u;
label_30de24:
    // 0x30de24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30de24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30de28: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x30de28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x30de2c: 0x9045db00  lbu         $a1, -0x2500($v0)
    ctx->pc = 0x30de2cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957824)));
    // 0x30de30: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x30de30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x30de34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30de34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30de38: 0x2508db50  addiu       $t0, $t0, -0x24B0
    ctx->pc = 0x30de38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957904));
    // 0x30de3c: 0x24e7da90  addiu       $a3, $a3, -0x2570
    ctx->pc = 0x30de3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957712));
    // 0x30de40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30de40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30de44: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x30de44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_30de48:
    // 0x30de48: 0x91030050  lbu         $v1, 0x50($t0)
    ctx->pc = 0x30de48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x30de4c: 0x1441004  sllv        $v0, $a0, $t2
    ctx->pc = 0x30de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 10) & 0x1F));
    // 0x30de50: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x30de50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x30de54: 0x306300f7  andi        $v1, $v1, 0xF7
    ctx->pc = 0x30de54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)247);
    // 0x30de58: 0xa1030050  sb          $v1, 0x50($t0)
    ctx->pc = 0x30de58u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x30de5c: 0xa1060006  sb          $a2, 0x6($t0)
    ctx->pc = 0x30de5cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x30de60: 0xa100002c  sb          $zero, 0x2C($t0)
    ctx->pc = 0x30de60u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x30de64: 0xa1000007  sb          $zero, 0x7($t0)
    ctx->pc = 0x30de64u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x30de68: 0xa1000008  sb          $zero, 0x8($t0)
    ctx->pc = 0x30de68u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x30de6c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x30de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x30de70: 0xa5000012  sh          $zero, 0x12($t0)
    ctx->pc = 0x30de70u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x30de74: 0x91030028  lbu         $v1, 0x28($t0)
    ctx->pc = 0x30de74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x30de78: 0xa1030003  sb          $v1, 0x3($t0)
    ctx->pc = 0x30de78u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x30de7c: 0xad000064  sw          $zero, 0x64($t0)
    ctx->pc = 0x30de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 100), GPR_U32(ctx, 0));
    // 0x30de80: 0xad000068  sw          $zero, 0x68($t0)
    ctx->pc = 0x30de80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 104), GPR_U32(ctx, 0));
    // 0x30de84: 0xad000048  sw          $zero, 0x48($t0)
    ctx->pc = 0x30de84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 0));
    // 0x30de88: 0xad000054  sw          $zero, 0x54($t0)
    ctx->pc = 0x30de88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 0));
    // 0x30de8c: 0xad000058  sw          $zero, 0x58($t0)
    ctx->pc = 0x30de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 0));
    // 0x30de90: 0xad00005c  sw          $zero, 0x5C($t0)
    ctx->pc = 0x30de90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 0));
    // 0x30de94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DE94u;
    {
        const bool branch_taken_0x30de94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DE94u;
            // 0x30de98: 0xad000060  sw          $zero, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de94) {
            ctx->pc = 0x30DEB0u;
            goto label_30deb0;
        }
    }
    ctx->pc = 0x30DE9Cu;
    // 0x30de9c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x30de9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30dea0: 0x8d02004c  lw          $v0, 0x4C($t0)
    ctx->pc = 0x30dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x30dea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30dea8: 0xad02004c  sw          $v0, 0x4C($t0)
    ctx->pc = 0x30dea8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 2));
    // 0x30deac: 0x0  nop
    ctx->pc = 0x30deacu;
    // NOP
label_30deb0:
    // 0x30deb0: 0x8d02004c  lw          $v0, 0x4C($t0)
    ctx->pc = 0x30deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x30deb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30deb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30deb8: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x30deb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30debc: 0xad020044  sw          $v0, 0x44($t0)
    ctx->pc = 0x30debcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 2));
    // 0x30dec0: 0xad00006c  sw          $zero, 0x6C($t0)
    ctx->pc = 0x30dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 108), GPR_U32(ctx, 0));
    // 0x30dec4: 0xad000078  sw          $zero, 0x78($t0)
    ctx->pc = 0x30dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 0));
    // 0x30dec8: 0xad000140  sw          $zero, 0x140($t0)
    ctx->pc = 0x30dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 320), GPR_U32(ctx, 0));
    // 0x30decc: 0xa1000164  sb          $zero, 0x164($t0)
    ctx->pc = 0x30deccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 356), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ded0: 0xa1000165  sb          $zero, 0x165($t0)
    ctx->pc = 0x30ded0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 357), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ded4: 0xad000070  sw          $zero, 0x70($t0)
    ctx->pc = 0x30ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 0));
    // 0x30ded8: 0xad00007c  sw          $zero, 0x7C($t0)
    ctx->pc = 0x30ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 124), GPR_U32(ctx, 0));
    // 0x30dedc: 0xad000144  sw          $zero, 0x144($t0)
    ctx->pc = 0x30dedcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 324), GPR_U32(ctx, 0));
    // 0x30dee0: 0xa1000184  sb          $zero, 0x184($t0)
    ctx->pc = 0x30dee0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 388), (uint8_t)GPR_U32(ctx, 0));
    // 0x30dee4: 0xa1000185  sb          $zero, 0x185($t0)
    ctx->pc = 0x30dee4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 389), (uint8_t)GPR_U32(ctx, 0));
    // 0x30dee8: 0xad000074  sw          $zero, 0x74($t0)
    ctx->pc = 0x30dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 116), GPR_U32(ctx, 0));
    // 0x30deec: 0xad000080  sw          $zero, 0x80($t0)
    ctx->pc = 0x30deecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 0));
    // 0x30def0: 0xad000148  sw          $zero, 0x148($t0)
    ctx->pc = 0x30def0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 328), GPR_U32(ctx, 0));
    // 0x30def4: 0xa10001a4  sb          $zero, 0x1A4($t0)
    ctx->pc = 0x30def4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 420), (uint8_t)GPR_U32(ctx, 0));
    // 0x30def8: 0xa10001a5  sb          $zero, 0x1A5($t0)
    ctx->pc = 0x30def8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 421), (uint8_t)GPR_U32(ctx, 0));
    // 0x30defc: 0xad000090  sw          $zero, 0x90($t0)
    ctx->pc = 0x30defcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 0));
    // 0x30df00: 0xad0000a8  sw          $zero, 0xA8($t0)
    ctx->pc = 0x30df00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 168), GPR_U32(ctx, 0));
    // 0x30df04: 0xad000094  sw          $zero, 0x94($t0)
    ctx->pc = 0x30df04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 148), GPR_U32(ctx, 0));
    // 0x30df08: 0xad0000ac  sw          $zero, 0xAC($t0)
    ctx->pc = 0x30df08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 172), GPR_U32(ctx, 0));
    // 0x30df0c: 0xad000098  sw          $zero, 0x98($t0)
    ctx->pc = 0x30df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 152), GPR_U32(ctx, 0));
    // 0x30df10: 0xad0000b0  sw          $zero, 0xB0($t0)
    ctx->pc = 0x30df10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 176), GPR_U32(ctx, 0));
    // 0x30df14: 0xad00009c  sw          $zero, 0x9C($t0)
    ctx->pc = 0x30df14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 156), GPR_U32(ctx, 0));
    // 0x30df18: 0xad0000b4  sw          $zero, 0xB4($t0)
    ctx->pc = 0x30df18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 180), GPR_U32(ctx, 0));
    // 0x30df1c: 0xad0000a0  sw          $zero, 0xA0($t0)
    ctx->pc = 0x30df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 160), GPR_U32(ctx, 0));
    // 0x30df20: 0xad0000b8  sw          $zero, 0xB8($t0)
    ctx->pc = 0x30df20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 184), GPR_U32(ctx, 0));
    // 0x30df24: 0xad0000a4  sw          $zero, 0xA4($t0)
    ctx->pc = 0x30df24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 164), GPR_U32(ctx, 0));
    // 0x30df28: 0xad0000bc  sw          $zero, 0xBC($t0)
    ctx->pc = 0x30df28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 188), GPR_U32(ctx, 0));
    // 0x30df2c: 0x0  nop
    ctx->pc = 0x30df2cu;
    // NOP
label_30df30:
    // 0x30df30: 0xac6000c0  sw          $zero, 0xC0($v1)
    ctx->pc = 0x30df30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
    // 0x30df34: 0xac600100  sw          $zero, 0x100($v1)
    ctx->pc = 0x30df34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 0));
    // 0x30df38: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x30df38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x30df3c: 0xac6000c4  sw          $zero, 0xC4($v1)
    ctx->pc = 0x30df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 0));
    // 0x30df40: 0x29220010  slti        $v0, $t1, 0x10
    ctx->pc = 0x30df40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x30df44: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x30df44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
    // 0x30df48: 0xac6000c8  sw          $zero, 0xC8($v1)
    ctx->pc = 0x30df48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 0));
    // 0x30df4c: 0xac600108  sw          $zero, 0x108($v1)
    ctx->pc = 0x30df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 0));
    // 0x30df50: 0xac6000cc  sw          $zero, 0xCC($v1)
    ctx->pc = 0x30df50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 0));
    // 0x30df54: 0xac60010c  sw          $zero, 0x10C($v1)
    ctx->pc = 0x30df54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 0));
    // 0x30df58: 0xac6000d0  sw          $zero, 0xD0($v1)
    ctx->pc = 0x30df58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 0));
    // 0x30df5c: 0xac600110  sw          $zero, 0x110($v1)
    ctx->pc = 0x30df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 0));
    // 0x30df60: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x30df60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x30df64: 0xac600114  sw          $zero, 0x114($v1)
    ctx->pc = 0x30df64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 0));
    // 0x30df68: 0xac6000d8  sw          $zero, 0xD8($v1)
    ctx->pc = 0x30df68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 0));
    // 0x30df6c: 0xac600118  sw          $zero, 0x118($v1)
    ctx->pc = 0x30df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 0));
    // 0x30df70: 0xac6000dc  sw          $zero, 0xDC($v1)
    ctx->pc = 0x30df70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 0));
    // 0x30df74: 0xac60011c  sw          $zero, 0x11C($v1)
    ctx->pc = 0x30df74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 0));
    // 0x30df78: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x30DF78u;
    {
        const bool branch_taken_0x30df78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DF78u;
            // 0x30df7c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df78) {
            ctx->pc = 0x30DF30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30df30;
        }
    }
    ctx->pc = 0x30DF80u;
    // 0x30df80: 0x9102000a  lbu         $v0, 0xA($t0)
    ctx->pc = 0x30df80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x30df84: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30DF84u;
    {
        const bool branch_taken_0x30df84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x30df84) {
            ctx->pc = 0x30DF90u;
            goto label_30df90;
        }
    }
    ctx->pc = 0x30DF8Cu;
    // 0x30df8c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x30df8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_30df90:
    // 0x30df90: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x30df90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x30df94: 0x29420004  slti        $v0, $t2, 0x4
    ctx->pc = 0x30df94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x30df98: 0x25080248  addiu       $t0, $t0, 0x248
    ctx->pc = 0x30df98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 584));
    // 0x30df9c: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x30DF9Cu;
    {
        const bool branch_taken_0x30df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DF9Cu;
            // 0x30dfa0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df9c) {
            ctx->pc = 0x30DE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30de48;
        }
    }
    ctx->pc = 0x30DFA4u;
    // 0x30dfa4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30dfa8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x30dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x30dfac: 0xa060db00  sb          $zero, -0x2500($v1)
    ctx->pc = 0x30dfacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957824), (uint8_t)GPR_U32(ctx, 0));
    // 0x30dfb0: 0xac40d918  sw          $zero, -0x26E8($v0)
    ctx->pc = 0x30dfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957336), GPR_U32(ctx, 0));
    // 0x30dfb4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30dfb8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30dfbc: 0xa060b830  sb          $zero, -0x47D0($v1)
    ctx->pc = 0x30dfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948912), (uint8_t)GPR_U32(ctx, 0));
    // 0x30dfc0: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x30DFC0u;
    SET_GPR_U32(ctx, 31, 0x30DFC8u);
    ctx->pc = 0x30DFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DFC0u;
            // 0x30dfc4: 0xa040b831  sb          $zero, -0x47CF($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294948913), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322B60u;
    if (runtime->hasFunction(0x322B60u)) {
        auto targetFn = runtime->lookupFunction(0x322B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DFC8u; }
        if (ctx->pc != 0x30DFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322B60_0x322b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DFC8u; }
        if (ctx->pc != 0x30DFC8u) { return; }
    }
    ctx->pc = 0x30DFC8u;
label_30dfc8:
    // 0x30dfc8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x30dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x30dfcc: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x30dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x30dfd0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x30dfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x30dfd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dfd8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30dfd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30dfdc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30dfdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30dfe0: 0xc0c8b00  jal         func_322C00
    ctx->pc = 0x30DFE0u;
    SET_GPR_U32(ctx, 31, 0x30DFE8u);
    ctx->pc = 0x30DFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DFE0u;
            // 0x30dfe4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322C00u;
    if (runtime->hasFunction(0x322C00u)) {
        auto targetFn = runtime->lookupFunction(0x322C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DFE8u; }
        if (ctx->pc != 0x30DFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322C00_0x322c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DFE8u; }
        if (ctx->pc != 0x30DFE8u) { return; }
    }
    ctx->pc = 0x30DFE8u;
label_30dfe8:
    // 0x30dfe8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x30dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x30dfec: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x30dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x30dff0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x30dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x30dff4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x30dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30dff8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30dff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30dffc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30dffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e000: 0xc0c8c68  jal         func_3231A0
    ctx->pc = 0x30E000u;
    SET_GPR_U32(ctx, 31, 0x30E008u);
    ctx->pc = 0x30E004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E000u;
            // 0x30e004: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3231A0u;
    if (runtime->hasFunction(0x3231A0u)) {
        auto targetFn = runtime->lookupFunction(0x3231A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E008u; }
        if (ctx->pc != 0x30E008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003231A0_0x3231a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E008u; }
        if (ctx->pc != 0x30E008u) { return; }
    }
    ctx->pc = 0x30E008u;
label_30e008:
    // 0x30e008: 0x3c034026  lui         $v1, 0x4026
    ctx->pc = 0x30e008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16422 << 16));
    // 0x30e00c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x30e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x30e010: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x30e010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x30e014: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x30e014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x30e018: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30e018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e01c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x30e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e020: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30e020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e024: 0xc0c8b00  jal         func_322C00
    ctx->pc = 0x30E024u;
    SET_GPR_U32(ctx, 31, 0x30E02Cu);
    ctx->pc = 0x30E028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E024u;
            // 0x30e028: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322C00u;
    if (runtime->hasFunction(0x322C00u)) {
        auto targetFn = runtime->lookupFunction(0x322C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E02Cu; }
        if (ctx->pc != 0x30E02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322C00_0x322c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E02Cu; }
        if (ctx->pc != 0x30E02Cu) { return; }
    }
    ctx->pc = 0x30E02Cu;
label_30e02c:
    // 0x30e02c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30e030: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30e030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30e034: 0x90449780  lbu         $a0, -0x6880($v0)
    ctx->pc = 0x30e034u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30e038: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E038u;
    {
        const bool branch_taken_0x30e038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30e038) {
            ctx->pc = 0x30E04Cu;
            goto label_30e04c;
        }
    }
    ctx->pc = 0x30E040u;
    // 0x30e040: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x30e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30e044: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30E044u;
    {
        const bool branch_taken_0x30e044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x30e044) {
            ctx->pc = 0x30E048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30E044u;
            // 0x30e048: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30E068u;
            goto label_30e068;
        }
    }
    ctx->pc = 0x30E04Cu;
label_30e04c:
    // 0x30e04c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30e050: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x30e050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x30e054: 0xa4405c60  sh          $zero, 0x5C60($v0)
    ctx->pc = 0x30e054u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 23648), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e058: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30e05c: 0xa0605c58  sb          $zero, 0x5C58($v1)
    ctx->pc = 0x30e05cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23640), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e060: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x30E060u;
    {
        const bool branch_taken_0x30e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E060u;
            // 0x30e064: 0xa0405c50  sb          $zero, 0x5C50($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 23632), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e060) {
            ctx->pc = 0x30E180u;
            goto label_30e180;
        }
    }
    ctx->pc = 0x30E068u;
label_30e068:
    // 0x30e068: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30E068u;
    {
        const bool branch_taken_0x30e068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x30e068) {
            ctx->pc = 0x30E09Cu;
            goto label_30e09c;
        }
    }
    ctx->pc = 0x30E070u;
    // 0x30e070: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x30e070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x30e074: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x30e074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x30e078: 0x9044bf15  lbu         $a0, -0x40EB($v0)
    ctx->pc = 0x30e078u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950677)));
    // 0x30e07c: 0xa4605c60  sh          $zero, 0x5C60($v1)
    ctx->pc = 0x30e07cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23648), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e080: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x30e080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x30e084: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x30e084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x30e088: 0xa0645c58  sb          $a0, 0x5C58($v1)
    ctx->pc = 0x30e088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23640), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e08c: 0x9045bf16  lbu         $a1, -0x40EA($v0)
    ctx->pc = 0x30e08cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950678)));
    // 0x30e090: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30e090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30e094: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x30E094u;
    {
        const bool branch_taken_0x30e094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E094u;
            // 0x30e098: 0xa0455c50  sb          $a1, 0x5C50($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 23632), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e094) {
            ctx->pc = 0x30E180u;
            goto label_30e180;
        }
    }
    ctx->pc = 0x30E09Cu;
label_30e09c:
    // 0x30e09c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x30e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x30e0a0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x30e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x30e0a4: 0x9044b271  lbu         $a0, -0x4D8F($v0)
    ctx->pc = 0x30e0a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947441)));
    // 0x30e0a8: 0xa4605c60  sh          $zero, 0x5C60($v1)
    ctx->pc = 0x30e0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23648), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e0ac: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x30e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x30e0b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e0b4: 0x9445dab0  lhu         $a1, -0x2550($v0)
    ctx->pc = 0x30e0b4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x30e0b8: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x30e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x30e0bc: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E0BCu;
    {
        const bool branch_taken_0x30e0bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E0BCu;
            // 0x30e0c0: 0xa0645c58  sb          $a0, 0x5C58($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23640), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0bc) {
            ctx->pc = 0x30E0DCu;
            goto label_30e0dc;
        }
    }
    ctx->pc = 0x30E0C4u;
    // 0x30e0c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30e0c8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30e0cc: 0xa0435c58  sb          $v1, 0x5C58($v0)
    ctx->pc = 0x30e0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23640), (uint8_t)GPR_U32(ctx, 3));
    // 0x30e0d0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30e0d4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x30E0D4u;
    {
        const bool branch_taken_0x30e0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E0D4u;
            // 0x30e0d8: 0xa0435c50  sb          $v1, 0x5C50($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 23632), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0d4) {
            ctx->pc = 0x30E180u;
            goto label_30e180;
        }
    }
    ctx->pc = 0x30E0DCu;
label_30e0dc:
    // 0x30e0dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30e0e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e0e4: 0x2463da90  addiu       $v1, $v1, -0x2570
    ctx->pc = 0x30e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957712));
    // 0x30e0e8: 0x8046da08  lb          $a2, -0x25F8($v0)
    ctx->pc = 0x30e0e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x30e0ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x30e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x30e0f0: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x30e0f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e0f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30e0f8: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x30e0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x30e0fc: 0x24420771  addiu       $v0, $v0, 0x771
    ctx->pc = 0x30e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1905));
    // 0x30e100: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30e100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30e104: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x30e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30e108: 0x24630770  addiu       $v1, $v1, 0x770
    ctx->pc = 0x30e108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1904));
    // 0x30e10c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x30e10cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e110: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30e110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30e114: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30e114u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e118: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x30e118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x30e11c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x30e11cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30e120: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30E120u;
    {
        const bool branch_taken_0x30e120 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e120) {
            ctx->pc = 0x30E12Cu;
            goto label_30e12c;
        }
    }
    ctx->pc = 0x30E128u;
    // 0x30e128: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30e128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30e12c:
    // 0x30e12c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30e130: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x30e130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30e134: 0xa0455c68  sb          $a1, 0x5C68($v0)
    ctx->pc = 0x30e134u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23656), (uint8_t)GPR_U32(ctx, 5));
    // 0x30e138: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x30e138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30e13c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e140: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30e140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30e144: 0x8042d9f8  lb          $v0, -0x2608($v0)
    ctx->pc = 0x30e144u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x30e148: 0x24630730  addiu       $v1, $v1, 0x730
    ctx->pc = 0x30e148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1840));
    // 0x30e14c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30e154: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x30e154u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e158: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x30e158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30e15c: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E15Cu;
    {
        const bool branch_taken_0x30e15c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x30e15c) {
            ctx->pc = 0x30E160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30E15Cu;
            // 0x30e160: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30E16Cu;
            goto label_30e16c;
        }
    }
    ctx->pc = 0x30E164u;
    // 0x30e164: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30e164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e168: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x30e168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_30e16c:
    // 0x30e16c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30E16Cu;
    {
        const bool branch_taken_0x30e16c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e16c) {
            ctx->pc = 0x30E178u;
            goto label_30e178;
        }
    }
    ctx->pc = 0x30E174u;
    // 0x30e174: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x30e174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_30e178:
    // 0x30e178: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30e17c: 0xa0435c50  sb          $v1, 0x5C50($v0)
    ctx->pc = 0x30e17cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23632), (uint8_t)GPR_U32(ctx, 3));
label_30e180:
    // 0x30e180: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30e180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30e184: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e188: 0xa460d9b8  sh          $zero, -0x2648($v1)
    ctx->pc = 0x30e188u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957496), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e18c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30e190: 0xa040cec0  sb          $zero, -0x3140($v0)
    ctx->pc = 0x30e190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954688), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e194: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x30e194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x30e198: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x30e198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x30e19c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e1a0: 0xa4604510  sh          $zero, 0x4510($v1)
    ctx->pc = 0x30e1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17680), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e1a4: 0x2484ec90  addiu       $a0, $a0, -0x1370
    ctx->pc = 0x30e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962320));
    // 0x30e1a8: 0xa4404508  sh          $zero, 0x4508($v0)
    ctx->pc = 0x30e1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 17672), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e1ac: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e1b0: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30e1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30e1b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e1b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e1b8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E1B8u;
    SET_GPR_U32(ctx, 31, 0x30E1C0u);
    ctx->pc = 0x30E1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1B8u;
            // 0x30e1bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1C0u; }
        if (ctx->pc != 0x30E1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1C0u; }
        if (ctx->pc != 0x30E1C0u) { return; }
    }
    ctx->pc = 0x30E1C0u;
label_30e1c0:
    // 0x30e1c0: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x30e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x30e1c4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e1c8: 0x24841570  addiu       $a0, $a0, 0x1570
    ctx->pc = 0x30e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5488));
    // 0x30e1cc: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e1d0: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30e1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30e1d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e1d8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E1D8u;
    SET_GPR_U32(ctx, 31, 0x30E1E0u);
    ctx->pc = 0x30E1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1D8u;
            // 0x30e1dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1E0u; }
        if (ctx->pc != 0x30E1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1E0u; }
        if (ctx->pc != 0x30E1E0u) { return; }
    }
    ctx->pc = 0x30E1E0u;
label_30e1e0:
    // 0x30e1e0: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x30e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x30e1e4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e1e8: 0x24841ab0  addiu       $a0, $a0, 0x1AB0
    ctx->pc = 0x30e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6832));
    // 0x30e1ec: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e1f0: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30e1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30e1f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e1f8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E1F8u;
    SET_GPR_U32(ctx, 31, 0x30E200u);
    ctx->pc = 0x30E1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1F8u;
            // 0x30e1fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E200u; }
        if (ctx->pc != 0x30E200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E200u; }
        if (ctx->pc != 0x30E200u) { return; }
    }
    ctx->pc = 0x30E200u;
label_30e200:
    // 0x30e200: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x30e200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x30e204: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e208: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x30e208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
    // 0x30e20c: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e210: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30e210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30e214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e218: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E218u;
    SET_GPR_U32(ctx, 31, 0x30E220u);
    ctx->pc = 0x30E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E218u;
            // 0x30e21c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E220u; }
        if (ctx->pc != 0x30E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E220u; }
        if (ctx->pc != 0x30E220u) { return; }
    }
    ctx->pc = 0x30E220u;
label_30e220:
    // 0x30e220: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x30e220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x30e224: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e228: 0x24841680  addiu       $a0, $a0, 0x1680
    ctx->pc = 0x30e228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5760));
    // 0x30e22c: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e230: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30e230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30e234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e238: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E238u;
    SET_GPR_U32(ctx, 31, 0x30E240u);
    ctx->pc = 0x30E23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E238u;
            // 0x30e23c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E240u; }
        if (ctx->pc != 0x30E240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E240u; }
        if (ctx->pc != 0x30E240u) { return; }
    }
    ctx->pc = 0x30E240u;
label_30e240:
    // 0x30e240: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x30e240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x30e244: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e248: 0x248418e0  addiu       $a0, $a0, 0x18E0
    ctx->pc = 0x30e248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6368));
    // 0x30e24c: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e250: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30e250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30e254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e258: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E258u;
    SET_GPR_U32(ctx, 31, 0x30E260u);
    ctx->pc = 0x30E25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E258u;
            // 0x30e25c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E260u; }
        if (ctx->pc != 0x30E260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E260u; }
        if (ctx->pc != 0x30E260u) { return; }
    }
    ctx->pc = 0x30E260u;
label_30e260:
    // 0x30e260: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30e260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30e264: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e268: 0x2484f2d0  addiu       $a0, $a0, -0xD30
    ctx->pc = 0x30e268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963920));
    // 0x30e26c: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e270: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30e270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30e274: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e278: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E278u;
    SET_GPR_U32(ctx, 31, 0x30E280u);
    ctx->pc = 0x30E27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E278u;
            // 0x30e27c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E280u; }
        if (ctx->pc != 0x30E280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E280u; }
        if (ctx->pc != 0x30E280u) { return; }
    }
    ctx->pc = 0x30E280u;
label_30e280:
    // 0x30e280: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x30e280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x30e284: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e288: 0x2484a930  addiu       $a0, $a0, -0x56D0
    ctx->pc = 0x30e288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945072));
    // 0x30e28c: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e290: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x30e290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x30e294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e298: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E298u;
    SET_GPR_U32(ctx, 31, 0x30E2A0u);
    ctx->pc = 0x30E29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E298u;
            // 0x30e29c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2A0u; }
        if (ctx->pc != 0x30E2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2A0u; }
        if (ctx->pc != 0x30E2A0u) { return; }
    }
    ctx->pc = 0x30E2A0u;
label_30e2a0:
    // 0x30e2a0: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x30e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x30e2a4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e2a8: 0x24841bb0  addiu       $a0, $a0, 0x1BB0
    ctx->pc = 0x30e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7088));
    // 0x30e2ac: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e2b0: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x30e2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x30e2b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e2b8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E2B8u;
    SET_GPR_U32(ctx, 31, 0x30E2C0u);
    ctx->pc = 0x30E2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E2B8u;
            // 0x30e2bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2C0u; }
        if (ctx->pc != 0x30E2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2C0u; }
        if (ctx->pc != 0x30E2C0u) { return; }
    }
    ctx->pc = 0x30E2C0u;
label_30e2c0:
    // 0x30e2c0: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30e2c4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e2c8: 0x248440f0  addiu       $a0, $a0, 0x40F0
    ctx->pc = 0x30e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16624));
    // 0x30e2cc: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e2d0: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x30e2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x30e2d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e2d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e2d8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E2D8u;
    SET_GPR_U32(ctx, 31, 0x30E2E0u);
    ctx->pc = 0x30E2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E2D8u;
            // 0x30e2dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2E0u; }
        if (ctx->pc != 0x30E2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2E0u; }
        if (ctx->pc != 0x30E2E0u) { return; }
    }
    ctx->pc = 0x30E2E0u;
label_30e2e0:
    // 0x30e2e0: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30e2e4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e2e8: 0x24843c40  addiu       $a0, $a0, 0x3C40
    ctx->pc = 0x30e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15424));
    // 0x30e2ec: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e2f0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x30e2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x30e2f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e2f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e2f8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E2F8u;
    SET_GPR_U32(ctx, 31, 0x30E300u);
    ctx->pc = 0x30E2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E2F8u;
            // 0x30e2fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E300u; }
        if (ctx->pc != 0x30E300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E300u; }
        if (ctx->pc != 0x30E300u) { return; }
    }
    ctx->pc = 0x30E300u;
label_30e300:
    // 0x30e300: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x30e300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x30e304: 0xc05aa2c  jal         func_16A8B0
    ctx->pc = 0x30E304u;
    SET_GPR_U32(ctx, 31, 0x30E30Cu);
    ctx->pc = 0x30E308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E304u;
            // 0x30e308: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A8B0u;
    if (runtime->hasFunction(0x16A8B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E30Cu; }
        if (ctx->pc != 0x30E30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A8B0_0x16a8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E30Cu; }
        if (ctx->pc != 0x30E30Cu) { return; }
    }
    ctx->pc = 0x30E30Cu;
label_30e30c:
    // 0x30e30c: 0x3c14009c  lui         $s4, 0x9C
    ctx->pc = 0x30e30cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)156 << 16));
    // 0x30e310: 0x3c1301e0  lui         $s3, 0x1E0
    ctx->pc = 0x30e310u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)480 << 16));
    // 0x30e314: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30e314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e318: 0x2694db50  addiu       $s4, $s4, -0x24B0
    ctx->pc = 0x30e318u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957904));
    // 0x30e31c: 0x2673bed0  addiu       $s3, $s3, -0x4130
    ctx->pc = 0x30e31cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950608));
label_30e320:
    // 0x30e320: 0xae800038  sw          $zero, 0x38($s4)
    ctx->pc = 0x30e320u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 0));
    // 0x30e324: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30e324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e328: 0xae80003c  sw          $zero, 0x3C($s4)
    ctx->pc = 0x30e328u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
    // 0x30e32c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x30e32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30e330:
    // 0x30e330: 0x9283000a  lbu         $v1, 0xA($s4)
    ctx->pc = 0x30e330u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x30e334: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30e334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e338: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E338u;
    {
        const bool branch_taken_0x30e338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30e338) {
            ctx->pc = 0x30E388u;
            goto label_30e388;
        }
    }
    ctx->pc = 0x30E340u;
    // 0x30e340: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e344: 0x9042d9d8  lbu         $v0, -0x2628($v0)
    ctx->pc = 0x30e344u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957528)));
    // 0x30e348: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30e34c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30E34Cu;
    {
        const bool branch_taken_0x30e34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e34c) {
            ctx->pc = 0x30E378u;
            goto label_30e378;
        }
    }
    ctx->pc = 0x30E354u;
    // 0x30e354: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e358: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30e358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30e35c: 0x8042d9f8  lb          $v0, -0x2608($v0)
    ctx->pc = 0x30e35cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x30e360: 0x24630790  addiu       $v1, $v1, 0x790
    ctx->pc = 0x30e360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
    // 0x30e364: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30e364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30e368: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30e36c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x30e36cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e370: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30E370u;
    {
        const bool branch_taken_0x30e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E370u;
            // 0x30e374: 0xa6420154  sh          $v0, 0x154($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 340), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e370) {
            ctx->pc = 0x30E390u;
            goto label_30e390;
        }
    }
    ctx->pc = 0x30E378u;
label_30e378:
    // 0x30e378: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x30e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x30e37c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30E37Cu;
    {
        const bool branch_taken_0x30e37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E37Cu;
            // 0x30e380: 0xa6420154  sh          $v0, 0x154($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 340), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e37c) {
            ctx->pc = 0x30E390u;
            goto label_30e390;
        }
    }
    ctx->pc = 0x30E384u;
    // 0x30e384: 0x0  nop
    ctx->pc = 0x30e384u;
    // NOP
label_30e388:
    // 0x30e388: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x30e388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x30e38c: 0xa6420154  sh          $v0, 0x154($s2)
    ctx->pc = 0x30e38cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 340), (uint16_t)GPR_U32(ctx, 2));
label_30e390:
    // 0x30e390: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30e394: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x30e394u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30e398: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30e398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30e39c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30E39Cu;
    {
        const bool branch_taken_0x30e39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30e39c) {
            ctx->pc = 0x30E3C0u;
            goto label_30e3c0;
        }
    }
    ctx->pc = 0x30E3A4u;
    // 0x30e3a4: 0xc0d0bb8  jal         func_342EE0
    ctx->pc = 0x30E3A4u;
    SET_GPR_U32(ctx, 31, 0x30E3ACu);
    ctx->pc = 0x30E3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E3A4u;
            // 0x30e3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342EE0u;
    if (runtime->hasFunction(0x342EE0u)) {
        auto targetFn = runtime->lookupFunction(0x342EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3ACu; }
        if (ctx->pc != 0x30E3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342EE0_0x342ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3ACu; }
        if (ctx->pc != 0x30E3ACu) { return; }
    }
    ctx->pc = 0x30E3ACu;
label_30e3ac:
    // 0x30e3ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E3ACu;
    {
        const bool branch_taken_0x30e3ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30e3ac) {
            ctx->pc = 0x30E3C0u;
            goto label_30e3c0;
        }
    }
    ctx->pc = 0x30E3B4u;
    // 0x30e3b4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x30e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x30e3b8: 0xa6420154  sh          $v0, 0x154($s2)
    ctx->pc = 0x30e3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 340), (uint16_t)GPR_U32(ctx, 2));
    // 0x30e3bc: 0x0  nop
    ctx->pc = 0x30e3bcu;
    // NOP
label_30e3c0:
    // 0x30e3c0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30e3c4: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x30e3c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30e3c8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x30e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30e3cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E3CCu;
    {
        const bool branch_taken_0x30e3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30e3cc) {
            ctx->pc = 0x30E3E0u;
            goto label_30e3e0;
        }
    }
    ctx->pc = 0x30E3D4u;
    // 0x30e3d4: 0x8662003c  lh          $v0, 0x3C($s3)
    ctx->pc = 0x30e3d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x30e3d8: 0xa6420154  sh          $v0, 0x154($s2)
    ctx->pc = 0x30e3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 340), (uint16_t)GPR_U32(ctx, 2));
    // 0x30e3dc: 0x0  nop
    ctx->pc = 0x30e3dcu;
    // NOP
label_30e3e0:
    // 0x30e3e0: 0x86440154  lh          $a0, 0x154($s2)
    ctx->pc = 0x30e3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x30e3e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30e3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30e3e8: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x30e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x30e3ec: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x30e3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30e3f0: 0xa6440156  sh          $a0, 0x156($s2)
    ctx->pc = 0x30e3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 342), (uint16_t)GPR_U32(ctx, 4));
    // 0x30e3f4: 0xa6430158  sh          $v1, 0x158($s2)
    ctx->pc = 0x30e3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x30e3f8: 0xa643015a  sh          $v1, 0x15A($s2)
    ctx->pc = 0x30e3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x30e3fc: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x30E3FCu;
    {
        const bool branch_taken_0x30e3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E3FCu;
            // 0x30e400: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e3fc) {
            ctx->pc = 0x30E330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e330;
        }
    }
    ctx->pc = 0x30E404u;
    // 0x30e404: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30e404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30e408: 0x26940248  addiu       $s4, $s4, 0x248
    ctx->pc = 0x30e408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 584));
    // 0x30e40c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x30e40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x30e410: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x30E410u;
    {
        const bool branch_taken_0x30e410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E410u;
            // 0x30e414: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e410) {
            ctx->pc = 0x30E320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e320;
        }
    }
    ctx->pc = 0x30E418u;
    // 0x30e418: 0xc04bdfc  jal         func_12F7F0
    ctx->pc = 0x30E418u;
    SET_GPR_U32(ctx, 31, 0x30E420u);
    ctx->pc = 0x12F7F0u;
    if (runtime->hasFunction(0x12F7F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E420u; }
        if (ctx->pc != 0x30E420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F7F0_0x12f7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E420u; }
        if (ctx->pc != 0x30E420u) { return; }
    }
    ctx->pc = 0x30E420u;
label_30e420:
    // 0x30e420: 0x3c15009c  lui         $s5, 0x9C
    ctx->pc = 0x30e420u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)156 << 16));
    // 0x30e424: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30e424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e428: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30e428u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e42c: 0x26b5db50  addiu       $s5, $s5, -0x24B0
    ctx->pc = 0x30e42cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957904));
label_30e430:
    // 0x30e430: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30e430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30e434: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e438: 0x26460002  addiu       $a2, $s2, 0x2
    ctx->pc = 0x30e438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x30e43c: 0x24844cc0  addiu       $a0, $a0, 0x4CC0
    ctx->pc = 0x30e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19648));
    // 0x30e440: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e444: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x30e444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e448: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E448u;
    SET_GPR_U32(ctx, 31, 0x30E450u);
    ctx->pc = 0x30E44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E448u;
            // 0x30e44c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E450u; }
        if (ctx->pc != 0x30E450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E450u; }
        if (ctx->pc != 0x30E450u) { return; }
    }
    ctx->pc = 0x30E450u;
label_30e450:
    // 0x30e450: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30e454: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30e454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30e458: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e45c: 0x26460006  addiu       $a2, $s2, 0x6
    ctx->pc = 0x30e45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x30e460: 0x24844da0  addiu       $a0, $a0, 0x4DA0
    ctx->pc = 0x30e460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19872));
    // 0x30e464: 0x24a53630  addiu       $a1, $a1, 0x3630
    ctx->pc = 0x30e464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13872));
    // 0x30e468: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e46c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30e46cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e470: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E470u;
    SET_GPR_U32(ctx, 31, 0x30E478u);
    ctx->pc = 0x30E474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E470u;
            // 0x30e474: 0xa4520000  sh          $s2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E478u; }
        if (ctx->pc != 0x30E478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E478u; }
        if (ctx->pc != 0x30E478u) { return; }
    }
    ctx->pc = 0x30E478u;
label_30e478:
    // 0x30e478: 0x32e4000c  andi        $a0, $s7, 0xC
    ctx->pc = 0x30e478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)12);
    // 0x30e47c: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x30e47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x30e480: 0x648025  or          $s0, $v1, $a0
    ctx->pc = 0x30e480u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30e484: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e488: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x30e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30e48c: 0x36040100  ori         $a0, $s0, 0x100
    ctx->pc = 0x30e48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
    // 0x30e490: 0x2646000a  addiu       $a2, $s2, 0xA
    ctx->pc = 0x30e490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x30e494: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e498: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x30e498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30e49c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30e4a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30e4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e4a4: 0x8c443c40  lw          $a0, 0x3C40($v0)
    ctx->pc = 0x30e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15424)));
    // 0x30e4a8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E4A8u;
    SET_GPR_U32(ctx, 31, 0x30E4B0u);
    ctx->pc = 0x30E4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E4A8u;
            // 0x30e4ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E4B0u; }
        if (ctx->pc != 0x30E4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E4B0u; }
        if (ctx->pc != 0x30E4B0u) { return; }
    }
    ctx->pc = 0x30E4B0u;
label_30e4b0:
    // 0x30e4b0: 0xaea20068  sw          $v0, 0x68($s5)
    ctx->pc = 0x30e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 2));
    // 0x30e4b4: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x30e4b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x30e4b8: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x30E4B8u;
    {
        const bool branch_taken_0x30e4b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30E4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E4B8u;
            // 0x30e4bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4b8) {
            ctx->pc = 0x30E590u;
            goto label_30e590;
        }
    }
    ctx->pc = 0x30E4C0u;
    // 0x30e4c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30e4c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e4c4: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x30e4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30e4c8:
    // 0x30e4c8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30e4cc: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x30e4ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30e4d0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30e4d4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E4D4u;
    {
        const bool branch_taken_0x30e4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30e4d4) {
            ctx->pc = 0x30E4F0u;
            goto label_30e4f0;
        }
    }
    ctx->pc = 0x30E4DCu;
    // 0x30e4dc: 0x32820030  andi        $v0, $s4, 0x30
    ctx->pc = 0x30e4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)48);
    // 0x30e4e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x30e4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x30e4e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30E4E4u;
    {
        const bool branch_taken_0x30e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E4E4u;
            // 0x30e4e8: 0x34560100  ori         $s6, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4e4) {
            ctx->pc = 0x30E520u;
            goto label_30e520;
        }
    }
    ctx->pc = 0x30E4ECu;
    // 0x30e4ec: 0x0  nop
    ctx->pc = 0x30e4ecu;
    // NOP
label_30e4f0:
    // 0x30e4f0: 0x92a3000a  lbu         $v1, 0xA($s5)
    ctx->pc = 0x30e4f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x30e4f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e4f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30E4F8u;
    {
        const bool branch_taken_0x30e4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30e4f8) {
            ctx->pc = 0x30E510u;
            goto label_30e510;
        }
    }
    ctx->pc = 0x30E500u;
    // 0x30e500: 0x32820030  andi        $v0, $s4, 0x30
    ctx->pc = 0x30e500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)48);
    // 0x30e504: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x30e504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x30e508: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30E508u;
    {
        const bool branch_taken_0x30e508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E508u;
            // 0x30e50c: 0x34560100  ori         $s6, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e508) {
            ctx->pc = 0x30E520u;
            goto label_30e520;
        }
    }
    ctx->pc = 0x30E510u;
label_30e510:
    // 0x30e510: 0x32820030  andi        $v0, $s4, 0x30
    ctx->pc = 0x30e510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)48);
    // 0x30e514: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x30e514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x30e518: 0x34560200  ori         $s6, $v0, 0x200
    ctx->pc = 0x30e518u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x30e51c: 0x0  nop
    ctx->pc = 0x30e51cu;
    // NOP
label_30e520:
    // 0x30e520: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30e520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30e524: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e528: 0x2646000e  addiu       $a2, $s2, 0xE
    ctx->pc = 0x30e528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 14));
    // 0x30e52c: 0x248460f0  addiu       $a0, $a0, 0x60F0
    ctx->pc = 0x30e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24816));
    // 0x30e530: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e534: 0x2407060c  addiu       $a3, $zero, 0x60C
    ctx->pc = 0x30e534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
    // 0x30e538: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E538u;
    SET_GPR_U32(ctx, 31, 0x30E540u);
    ctx->pc = 0x30E53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E538u;
            // 0x30e53c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E540u; }
        if (ctx->pc != 0x30E540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E540u; }
        if (ctx->pc != 0x30E540u) { return; }
    }
    ctx->pc = 0x30E540u;
label_30e540:
    // 0x30e540: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x30e540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x30e544: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30e544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30e548: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x30e548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
    // 0x30e54c: 0x26460013  addiu       $a2, $s2, 0x13
    ctx->pc = 0x30e54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 19));
    // 0x30e550: 0x24841cf0  addiu       $a0, $a0, 0x1CF0
    ctx->pc = 0x30e550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7408));
    // 0x30e554: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30e554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30e558: 0x2407060c  addiu       $a3, $zero, 0x60C
    ctx->pc = 0x30e558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
    // 0x30e55c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30E55Cu;
    SET_GPR_U32(ctx, 31, 0x30E564u);
    ctx->pc = 0x30E560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E55Cu;
            // 0x30e560: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E564u; }
        if (ctx->pc != 0x30E564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E564u; }
        if (ctx->pc != 0x30E564u) { return; }
    }
    ctx->pc = 0x30E564u;
label_30e564:
    // 0x30e564: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30e564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e568: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x30e568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
    // 0x30e56c: 0xc0587b4  jal         func_161ED0
    ctx->pc = 0x30E56Cu;
    SET_GPR_U32(ctx, 31, 0x30E574u);
    ctx->pc = 0x30E570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E56Cu;
            // 0x30e570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161ED0u;
    if (runtime->hasFunction(0x161ED0u)) {
        auto targetFn = runtime->lookupFunction(0x161ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E574u; }
        if (ctx->pc != 0x30E574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161ED0_0x161ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E574u; }
        if (ctx->pc != 0x30E574u) { return; }
    }
    ctx->pc = 0x30E574u;
label_30e574:
    // 0x30e574: 0xae620140  sw          $v0, 0x140($s3)
    ctx->pc = 0x30e574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 320), GPR_U32(ctx, 2));
    // 0x30e578: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30e578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30e57c: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x30e57cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x30e580: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x30e580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x30e584: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x30e584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e588: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x30E588u;
    {
        const bool branch_taken_0x30e588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E588u;
            // 0x30e58c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e588) {
            ctx->pc = 0x30E4C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e4c8;
        }
    }
    ctx->pc = 0x30E590u;
label_30e590:
    // 0x30e590: 0x92a30003  lbu         $v1, 0x3($s5)
    ctx->pc = 0x30e590u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x30e594: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30e594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30e598: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x30e598u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x30e59c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x30e59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e5a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30e5a4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x30e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x30e5a8: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x30e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x30e5ac: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x30e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x30e5b0: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x30E5B0u;
    {
        const bool branch_taken_0x30e5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E5B0u;
            // 0x30e5b4: 0x26b50248  addiu       $s5, $s5, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5b0) {
            ctx->pc = 0x30E430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e430;
        }
    }
    ctx->pc = 0x30E5B8u;
    // 0x30e5b8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30e5bc: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x30e5bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x30e5c0: 0x24423e60  addiu       $v0, $v0, 0x3E60
    ctx->pc = 0x30e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15968));
    // 0x30e5c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30e5c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e5c8: 0x2673db50  addiu       $s3, $s3, -0x24B0
    ctx->pc = 0x30e5c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957904));
    // 0x30e5cc: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x30e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x30e5d0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x30e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_30e5d4:
    // 0x30e5d4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30e5d8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x30e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30e5dc: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x30e5dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30e5e0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30E5E0u;
    {
        const bool branch_taken_0x30e5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30e5e0) {
            ctx->pc = 0x30E620u;
            goto label_30e620;
        }
    }
    ctx->pc = 0x30E5E8u;
    // 0x30e5e8: 0xc0d0bb8  jal         func_342EE0
    ctx->pc = 0x30E5E8u;
    SET_GPR_U32(ctx, 31, 0x30E5F0u);
    ctx->pc = 0x30E5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E5E8u;
            // 0x30e5ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342EE0u;
    if (runtime->hasFunction(0x342EE0u)) {
        auto targetFn = runtime->lookupFunction(0x342EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E5F0u; }
        if (ctx->pc != 0x30E5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342EE0_0x342ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E5F0u; }
        if (ctx->pc != 0x30E5F0u) { return; }
    }
    ctx->pc = 0x30E5F0u;
label_30e5f0:
    // 0x30e5f0: 0x2841ffff  slti        $at, $v0, -0x1
    ctx->pc = 0x30e5f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x30e5f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E5F4u;
    {
        const bool branch_taken_0x30e5f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e5f4) {
            ctx->pc = 0x30E608u;
            goto label_30e608;
        }
    }
    ctx->pc = 0x30E5FCu;
    // 0x30e5fc: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x30e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x30e600: 0xae63003c  sw          $v1, 0x3C($s3)
    ctx->pc = 0x30e600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
    // 0x30e604: 0x0  nop
    ctx->pc = 0x30e604u;
    // NOP
label_30e608:
    // 0x30e608: 0x2841fffd  slti        $at, $v0, -0x3
    ctx->pc = 0x30e608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x30e60c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E60Cu;
    {
        const bool branch_taken_0x30e60c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e60c) {
            ctx->pc = 0x30E620u;
            goto label_30e620;
        }
    }
    ctx->pc = 0x30E614u;
    // 0x30e614: 0x24020150  addiu       $v0, $zero, 0x150
    ctx->pc = 0x30e614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x30e618: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x30e618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
    // 0x30e61c: 0x0  nop
    ctx->pc = 0x30e61cu;
    // NOP
label_30e620:
    // 0x30e620: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x30e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x30e624: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x30e624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30e628: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x30E628u;
    SET_GPR_U32(ctx, 31, 0x30E630u);
    ctx->pc = 0x30E62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E628u;
            // 0x30e62c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (runtime->hasFunction(0x17D790u)) {
        auto targetFn = runtime->lookupFunction(0x17D790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E630u; }
        if (ctx->pc != 0x30E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D790_0x17d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E630u; }
        if (ctx->pc != 0x30E630u) { return; }
    }
    ctx->pc = 0x30E630u;
label_30e630:
    // 0x30e630: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x30e630u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x30e634: 0x1840006c  blez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x30E634u;
    {
        const bool branch_taken_0x30e634 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30E638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E634u;
            // 0x30e638: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e634) {
            ctx->pc = 0x30E7E8u;
            goto label_30e7e8;
        }
    }
    ctx->pc = 0x30E63Cu;
    // 0x30e63c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x30e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30e640: 0x32a30003  andi        $v1, $s5, 0x3
    ctx->pc = 0x30e640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x30e644: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30e644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e648: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x30e648u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e64c: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x30e64cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e650: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x30e650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x30e654: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x30e654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30e658: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x30e658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x30e65c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e660: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x30e660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x30e664: 0x0  nop
    ctx->pc = 0x30e664u;
    // NOP
label_30e668:
    // 0x30e668: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30e668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30e66c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x30e66cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30e670: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30e674: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E674u;
    {
        const bool branch_taken_0x30e674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30e674) {
            ctx->pc = 0x30E690u;
            goto label_30e690;
        }
    }
    ctx->pc = 0x30E67Cu;
    // 0x30e67c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x30e67cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30e680: 0x32430030  andi        $v1, $s2, 0x30
    ctx->pc = 0x30e680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
    // 0x30e684: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e688: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30E688u;
    {
        const bool branch_taken_0x30e688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E688u;
            // 0x30e68c: 0x34510100  ori         $s1, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e688) {
            ctx->pc = 0x30E6C8u;
            goto label_30e6c8;
        }
    }
    ctx->pc = 0x30E690u;
label_30e690:
    // 0x30e690: 0x9263000a  lbu         $v1, 0xA($s3)
    ctx->pc = 0x30e690u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x30e694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e698: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E698u;
    {
        const bool branch_taken_0x30e698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30e698) {
            ctx->pc = 0x30E6B8u;
            goto label_30e6b8;
        }
    }
    ctx->pc = 0x30E6A0u;
    // 0x30e6a0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x30e6a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30e6a4: 0x32430030  andi        $v1, $s2, 0x30
    ctx->pc = 0x30e6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
    // 0x30e6a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e6ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30E6ACu;
    {
        const bool branch_taken_0x30e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E6ACu;
            // 0x30e6b0: 0x34510100  ori         $s1, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6ac) {
            ctx->pc = 0x30E6C8u;
            goto label_30e6c8;
        }
    }
    ctx->pc = 0x30E6B4u;
    // 0x30e6b4: 0x0  nop
    ctx->pc = 0x30e6b4u;
    // NOP
label_30e6b8:
    // 0x30e6b8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x30e6b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30e6bc: 0x32430030  andi        $v1, $s2, 0x30
    ctx->pc = 0x30e6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
    // 0x30e6c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e6c4: 0x34510200  ori         $s1, $v0, 0x200
    ctx->pc = 0x30e6c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_30e6c8:
    // 0x30e6c8: 0x8ee2006c  lw          $v0, 0x6C($s7)
    ctx->pc = 0x30e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 108)));
    // 0x30e6cc: 0x92de014d  lbu         $fp, 0x14D($s6)
    ctx->pc = 0x30e6ccu;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 333)));
    // 0x30e6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30e6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e6d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30e6d8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x30e6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e6dc: 0xac5100dc  sw          $s1, 0xDC($v0)
    ctx->pc = 0x30e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 17));
    // 0x30e6e0: 0xa45e00ea  sh          $fp, 0xEA($v0)
    ctx->pc = 0x30e6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 234), (uint16_t)GPR_U32(ctx, 30));
    // 0x30e6e4: 0xa44000ec  sh          $zero, 0xEC($v0)
    ctx->pc = 0x30e6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 236), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e6e8: 0xac40048c  sw          $zero, 0x48C($v0)
    ctx->pc = 0x30e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1164), GPR_U32(ctx, 0));
    // 0x30e6ec: 0xac400490  sw          $zero, 0x490($v0)
    ctx->pc = 0x30e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1168), GPR_U32(ctx, 0));
    // 0x30e6f0: 0xac400494  sw          $zero, 0x494($v0)
    ctx->pc = 0x30e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1172), GPR_U32(ctx, 0));
    // 0x30e6f4: 0xac400498  sw          $zero, 0x498($v0)
    ctx->pc = 0x30e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1176), GPR_U32(ctx, 0));
    // 0x30e6f8: 0xac40049c  sw          $zero, 0x49C($v0)
    ctx->pc = 0x30e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1180), GPR_U32(ctx, 0));
    // 0x30e6fc: 0x8ee20078  lw          $v0, 0x78($s7)
    ctx->pc = 0x30e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 120)));
    // 0x30e700: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x30e700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30e704: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x30e704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x30e708: 0xc062734  jal         func_189CD0
    ctx->pc = 0x30E708u;
    SET_GPR_U32(ctx, 31, 0x30E710u);
    ctx->pc = 0x30E70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E708u;
            // 0x30e70c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189CD0u;
    if (runtime->hasFunction(0x189CD0u)) {
        auto targetFn = runtime->lookupFunction(0x189CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E710u; }
        if (ctx->pc != 0x30E710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189CD0_0x189cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E710u; }
        if (ctx->pc != 0x30E710u) { return; }
    }
    ctx->pc = 0x30E710u;
label_30e710:
    // 0x30e710: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x30e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30e714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30e714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e718: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x30e718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e71c: 0xc0583f8  jal         func_160FE0
    ctx->pc = 0x30E71Cu;
    SET_GPR_U32(ctx, 31, 0x30E724u);
    ctx->pc = 0x30E720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E71Cu;
            // 0x30e720: 0x240602a0  addiu       $a2, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160FE0u;
    if (runtime->hasFunction(0x160FE0u)) {
        auto targetFn = runtime->lookupFunction(0x160FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E724u; }
        if (ctx->pc != 0x30E724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160FE0_0x160fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E724u; }
        if (ctx->pc != 0x30E724u) { return; }
    }
    ctx->pc = 0x30E724u;
label_30e724:
    // 0x30e724: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x30e724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e728: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x30e728u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30e72c: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x30E72Cu;
    SET_GPR_U32(ctx, 31, 0x30E734u);
    ctx->pc = 0x30E730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E72Cu;
            // 0x30e730: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E734u; }
        if (ctx->pc != 0x30E734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E734u; }
        if (ctx->pc != 0x30E734u) { return; }
    }
    ctx->pc = 0x30E734u;
label_30e734:
    // 0x30e734: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x30e734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x30e738: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30e738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x30e73c: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x30e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x30e740: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x30e740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x30e744: 0x8e02049c  lw          $v0, 0x49C($s0)
    ctx->pc = 0x30e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x30e748: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x30e748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x30e74c: 0xae02049c  sw          $v0, 0x49C($s0)
    ctx->pc = 0x30e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 2));
    // 0x30e750: 0xc0638b8  jal         func_18E2E0
    ctx->pc = 0x30E750u;
    SET_GPR_U32(ctx, 31, 0x30E758u);
    ctx->pc = 0x30E754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E750u;
            // 0x30e754: 0x960400ea  lhu         $a0, 0xEA($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E2E0u;
    if (runtime->hasFunction(0x18E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x18E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E758u; }
        if (ctx->pc != 0x30E758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E2E0_0x18e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E758u; }
        if (ctx->pc != 0x30E758u) { return; }
    }
    ctx->pc = 0x30E758u;
label_30e758:
    // 0x30e758: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30e758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30e75c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e760: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30e760u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30e764: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x30e764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e768: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x30e768u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x30e76c: 0x32a700ff  andi        $a3, $s5, 0xFF
    ctx->pc = 0x30e76cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x30e770: 0xa20204a4  sb          $v0, 0x4A4($s0)
    ctx->pc = 0x30e770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1188), (uint8_t)GPR_U32(ctx, 2));
    // 0x30e774: 0x328800ff  andi        $t0, $s4, 0xFF
    ctx->pc = 0x30e774u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x30e778: 0xc0626a8  jal         func_189AA0
    ctx->pc = 0x30E778u;
    SET_GPR_U32(ctx, 31, 0x30E780u);
    ctx->pc = 0x30E77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E778u;
            // 0x30e77c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189AA0u;
    if (runtime->hasFunction(0x189AA0u)) {
        auto targetFn = runtime->lookupFunction(0x189AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E780u; }
        if (ctx->pc != 0x30E780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189AA0_0x189aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E780u; }
        if (ctx->pc != 0x30E780u) { return; }
    }
    ctx->pc = 0x30E780u;
label_30e780:
    // 0x30e780: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x30e780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x30e784: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E784u;
    {
        const bool branch_taken_0x30e784 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E784u;
            // 0x30e788: 0xa202008c  sb          $v0, 0x8C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e784) {
            ctx->pc = 0x30E798u;
            goto label_30e798;
        }
    }
    ctx->pc = 0x30E78Cu;
    // 0x30e78c: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x30e78cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x30e790: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x30e790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x30e794: 0xa202008c  sb          $v0, 0x8C($s0)
    ctx->pc = 0x30e794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
label_30e798:
    // 0x30e798: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x30E798u;
    SET_GPR_U32(ctx, 31, 0x30E7A0u);
    ctx->pc = 0x30E79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E798u;
            // 0x30e79c: 0x92c4014d  lbu         $a0, 0x14D($s6) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 333)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E7A0u; }
        if (ctx->pc != 0x30E7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E7A0u; }
        if (ctx->pc != 0x30E7A0u) { return; }
    }
    ctx->pc = 0x30E7A0u;
label_30e7a0:
    // 0x30e7a0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x30e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x30e7a4: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x30e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x30e7a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x30e7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e7ac: 0xc0c1404  jal         func_305010
    ctx->pc = 0x30E7ACu;
    SET_GPR_U32(ctx, 31, 0x30E7B4u);
    ctx->pc = 0x30E7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E7ACu;
            // 0x30e7b0: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305010u;
    if (runtime->hasFunction(0x305010u)) {
        auto targetFn = runtime->lookupFunction(0x305010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E7B4u; }
        if (ctx->pc != 0x30E7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305010_0x305010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E7B4u; }
        if (ctx->pc != 0x30E7B4u) { return; }
    }
    ctx->pc = 0x30E7B4u;
label_30e7b4:
    // 0x30e7b4: 0xc058c68  jal         func_1631A0
    ctx->pc = 0x30E7B4u;
    SET_GPR_U32(ctx, 31, 0x30E7BCu);
    ctx->pc = 0x30E7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E7B4u;
            // 0x30e7b8: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1631A0u;
    if (runtime->hasFunction(0x1631A0u)) {
        auto targetFn = runtime->lookupFunction(0x1631A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E7BCu; }
        if (ctx->pc != 0x30E7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001631A0_0x1631a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E7BCu; }
        if (ctx->pc != 0x30E7BCu) { return; }
    }
    ctx->pc = 0x30E7BCu;
label_30e7bc:
    // 0x30e7bc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x30e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30e7c0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30e7c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30e7c4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x30e7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x30e7c8: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x30e7c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x30e7cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30e7d0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x30e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x30e7d4: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x30e7d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x30e7d8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x30e7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e7dc: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x30E7DCu;
    {
        const bool branch_taken_0x30e7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E7DCu;
            // 0x30e7e0: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e7dc) {
            ctx->pc = 0x30E668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e668;
        }
    }
    ctx->pc = 0x30E7E4u;
    // 0x30e7e4: 0x0  nop
    ctx->pc = 0x30e7e4u;
    // NOP
label_30e7e8:
    // 0x30e7e8: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x30e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x30e7ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30e7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e7f0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x30e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30e7f4: 0x9062008c  lbu         $v0, 0x8C($v1)
    ctx->pc = 0x30e7f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x30e7f8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x30e7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30e7fc: 0xc062df0  jal         func_18B7C0
    ctx->pc = 0x30E7FCu;
    SET_GPR_U32(ctx, 31, 0x30E804u);
    ctx->pc = 0x30E800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E7FCu;
            // 0x30e800: 0xa062008c  sb          $v0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B7C0u;
    if (runtime->hasFunction(0x18B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E804u; }
        if (ctx->pc != 0x30E804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B7C0_0x18b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E804u; }
        if (ctx->pc != 0x30E804u) { return; }
    }
    ctx->pc = 0x30E804u;
label_30e804:
    // 0x30e804: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x30e804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30e808: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30e808u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x30e80c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30e810: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x30e810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x30e814: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x30e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30e818: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x30e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x30e81c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x30e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x30e820: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x30e820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e824: 0x1440ff6b  bnez        $v0, . + 4 + (-0x95 << 2)
    ctx->pc = 0x30E824u;
    {
        const bool branch_taken_0x30e824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E824u;
            // 0x30e828: 0x26730248  addiu       $s3, $s3, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e824) {
            ctx->pc = 0x30E5D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e5d4;
        }
    }
    ctx->pc = 0x30E82Cu;
    // 0x30e82c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30e830: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x30e830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30e834: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x30e834u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30e838: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30E838u;
    {
        const bool branch_taken_0x30e838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30e838) {
            ctx->pc = 0x30E860u;
            goto label_30e860;
        }
    }
    ctx->pc = 0x30E840u;
    // 0x30e840: 0xc0ce9e4  jal         func_33A790
    ctx->pc = 0x30E840u;
    SET_GPR_U32(ctx, 31, 0x30E848u);
    ctx->pc = 0x33A790u;
    if (runtime->hasFunction(0x33A790u)) {
        auto targetFn = runtime->lookupFunction(0x33A790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E848u; }
        if (ctx->pc != 0x30E848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A790_0x33a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E848u; }
        if (ctx->pc != 0x30E848u) { return; }
    }
    ctx->pc = 0x30E848u;
label_30e848:
    // 0x30e848: 0xc0cea34  jal         func_33A8D0
    ctx->pc = 0x30E848u;
    SET_GPR_U32(ctx, 31, 0x30E850u);
    ctx->pc = 0x33A8D0u;
    if (runtime->hasFunction(0x33A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x33A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E850u; }
        if (ctx->pc != 0x30E850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A8D0_0x33a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E850u; }
        if (ctx->pc != 0x30E850u) { return; }
    }
    ctx->pc = 0x30E850u;
label_30e850:
    // 0x30e850: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x30E850u;
    SET_GPR_U32(ctx, 31, 0x30E858u);
    ctx->pc = 0x33A950u;
    if (runtime->hasFunction(0x33A950u)) {
        auto targetFn = runtime->lookupFunction(0x33A950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E858u; }
        if (ctx->pc != 0x30E858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A950_0x33a950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E858u; }
        if (ctx->pc != 0x30E858u) { return; }
    }
    ctx->pc = 0x30E858u;
label_30e858:
    // 0x30e858: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e85c: 0xa040dad8  sb          $zero, -0x2528($v0)
    ctx->pc = 0x30e85cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957784), (uint8_t)GPR_U32(ctx, 0));
label_30e860:
    // 0x30e860: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30e860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30e864: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x30e864u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30e868: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x30e86c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x30e86cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e870: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E870u;
    {
        const bool branch_taken_0x30e870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e870) {
            ctx->pc = 0x30E874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30E870u;
            // 0x30e874: 0x8fa500fc  lw          $a1, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30E884u;
            goto label_30e884;
        }
    }
    ctx->pc = 0x30E878u;
    // 0x30e878: 0xc052c0c  jal         func_14B030
    ctx->pc = 0x30E878u;
    SET_GPR_U32(ctx, 31, 0x30E880u);
    ctx->pc = 0x14B030u;
    if (runtime->hasFunction(0x14B030u)) {
        auto targetFn = runtime->lookupFunction(0x14B030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E880u; }
        if (ctx->pc != 0x30E880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B030_0x14b030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E880u; }
        if (ctx->pc != 0x30E880u) { return; }
    }
    ctx->pc = 0x30E880u;
label_30e880:
    // 0x30e880: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x30e880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_30e884:
    // 0x30e884: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30e884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30e888: 0xc055768  jal         func_155DA0
    ctx->pc = 0x30E888u;
    SET_GPR_U32(ctx, 31, 0x30E890u);
    ctx->pc = 0x30E88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E888u;
            // 0x30e88c: 0x2484f970  addiu       $a0, $a0, -0x690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E890u; }
        if (ctx->pc != 0x30E890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E890u; }
        if (ctx->pc != 0x30E890u) { return; }
    }
    ctx->pc = 0x30E890u;
label_30e890:
    // 0x30e890: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x30e890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30e894: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x30e894u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30e898: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30e898u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30e89c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30e89cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30e8a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30e8a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30e8a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30e8a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30e8a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30e8a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e8ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30e8acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e8b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30e8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x30E8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E8B8u;
            // 0x30e8bc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E8C0u;
label_30e8c0:
    // 0x30e8c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30e8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e8c4: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30e8c8: 0x8055768  j           func_155DA0
    ctx->pc = 0x30E8C8u;
    ctx->pc = 0x30E8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E8C8u;
            // 0x30e8cc: 0x2484e8d0  addiu       $a0, $a0, -0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00155DA0_0x155da0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x30E8D0u;
label_30e8d0:
    // 0x30e8d0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x30e8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x30e8d4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x30e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x30e8d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x30e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x30e8dc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x30e8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x30e8e0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x30e8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x30e8e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30e8e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30e8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30e8ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30e8f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30e8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30e8f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30e8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30e8f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30e8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30e8fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e900: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x30e900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
    // 0x30e904: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30e904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e908: 0xc055684  jal         func_155A10
    ctx->pc = 0x30E908u;
    SET_GPR_U32(ctx, 31, 0x30E910u);
    ctx->pc = 0x30E90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E908u;
            // 0x30e90c: 0xac400398  sw          $zero, 0x398($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E910u; }
        if (ctx->pc != 0x30E910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E910u; }
        if (ctx->pc != 0x30E910u) { return; }
    }
    ctx->pc = 0x30E910u;
label_30e910:
    // 0x30e910: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x30E910u;
    SET_GPR_U32(ctx, 31, 0x30E918u);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E918u; }
        if (ctx->pc != 0x30E918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E918u; }
        if (ctx->pc != 0x30E918u) { return; }
    }
    ctx->pc = 0x30E918u;
label_30e918:
    // 0x30e918: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x30e918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x30e91c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30e920: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x30e920u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x30e924: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x30E924u;
    {
        const bool branch_taken_0x30e924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30e924) {
            ctx->pc = 0x30EA38u;
            goto label_30ea38;
        }
    }
    ctx->pc = 0x30E92Cu;
    // 0x30e92c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30e930: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e934: 0x8063d9f8  lb          $v1, -0x2608($v1)
    ctx->pc = 0x30e934u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957560)));
    // 0x30e938: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30e938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30e93c: 0xa043d9f8  sb          $v1, -0x2608($v0)
    ctx->pc = 0x30e93cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957560), (uint8_t)GPR_U32(ctx, 3));
    // 0x30e940: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x30e940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30e944: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x30e944u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x30e948: 0x28410041  slti        $at, $v0, 0x41
    ctx->pc = 0x30e948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x30e94c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E94Cu;
    {
        const bool branch_taken_0x30e94c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e94c) {
            ctx->pc = 0x30E960u;
            goto label_30e960;
        }
    }
    ctx->pc = 0x30E954u;
    // 0x30e954: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x30e954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30e958: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e95c: 0xa043d9f8  sb          $v1, -0x2608($v0)
    ctx->pc = 0x30e95cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957560), (uint8_t)GPR_U32(ctx, 3));
label_30e960:
    // 0x30e960: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30e960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30e964: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e968: 0x8c63da10  lw          $v1, -0x25F0($v1)
    ctx->pc = 0x30e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957584)));
    // 0x30e96c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30e970: 0x286103e8  slti        $at, $v1, 0x3E8
    ctx->pc = 0x30e970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x30e974: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E974u;
    {
        const bool branch_taken_0x30e974 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E974u;
            // 0x30e978: 0xac43da10  sw          $v1, -0x25F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e974) {
            ctx->pc = 0x30E988u;
            goto label_30e988;
        }
    }
    ctx->pc = 0x30E97Cu;
    // 0x30e97c: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x30e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x30e980: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e984: 0xac43da10  sw          $v1, -0x25F0($v0)
    ctx->pc = 0x30e984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957584), GPR_U32(ctx, 3));
label_30e988:
    // 0x30e988: 0xc062870  jal         func_18A1C0
    ctx->pc = 0x30E988u;
    SET_GPR_U32(ctx, 31, 0x30E990u);
    ctx->pc = 0x18A1C0u;
    if (runtime->hasFunction(0x18A1C0u)) {
        auto targetFn = runtime->lookupFunction(0x18A1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E990u; }
        if (ctx->pc != 0x30E990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A1C0_0x18a1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E990u; }
        if (ctx->pc != 0x30E990u) { return; }
    }
    ctx->pc = 0x30E990u;
label_30e990:
    // 0x30e990: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x30e990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30e994: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x30e994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30e998: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30e99c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x30e99cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30e9a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x30e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30e9a4: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30E9A4u;
    {
        const bool branch_taken_0x30e9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30E9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E9A4u;
            // 0x30e9a8: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9a4) {
            ctx->pc = 0x30E9ECu;
            goto label_30e9ec;
        }
    }
    ctx->pc = 0x30E9ACu;
    // 0x30e9ac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30e9b0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30e9b4: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x30e9b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x30e9b8: 0x2463db64  addiu       $v1, $v1, -0x249C
    ctx->pc = 0x30e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957924));
    // 0x30e9bc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x30e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30e9c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30e9c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x30e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30e9c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30e9cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x30e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30e9d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30e9d4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x30e9d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e9d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30e9dc: 0xc04edc8  jal         func_13B720
    ctx->pc = 0x30E9DCu;
    SET_GPR_U32(ctx, 31, 0x30E9E4u);
    ctx->pc = 0x30E9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E9DCu;
            // 0x30e9e0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B720u;
    if (runtime->hasFunction(0x13B720u)) {
        auto targetFn = runtime->lookupFunction(0x13B720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9E4u; }
        if (ctx->pc != 0x30E9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B720_0x13b720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9E4u; }
        if (ctx->pc != 0x30E9E4u) { return; }
    }
    ctx->pc = 0x30E9E4u;
label_30e9e4:
    // 0x30e9e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30E9E4u;
    {
        const bool branch_taken_0x30e9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e9e4) {
            ctx->pc = 0x30EA28u;
            goto label_30ea28;
        }
    }
    ctx->pc = 0x30E9ECu;
label_30e9ec:
    // 0x30e9ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30e9f0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x30e9f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30e9f4: 0x8c45da10  lw          $a1, -0x25F0($v0)
    ctx->pc = 0x30e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957584)));
    // 0x30e9f8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x30e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30e9fc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x30e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30ea00: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x30ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30ea04: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ea08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ea0c: 0x2442db64  addiu       $v0, $v0, -0x249C
    ctx->pc = 0x30ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957924));
    // 0x30ea10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x30ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30ea14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ea18: 0xc04ed18  jal         func_13B460
    ctx->pc = 0x30EA18u;
    SET_GPR_U32(ctx, 31, 0x30EA20u);
    ctx->pc = 0x30EA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA18u;
            // 0x30ea1c: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B460u;
    if (runtime->hasFunction(0x13B460u)) {
        auto targetFn = runtime->lookupFunction(0x13B460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA20u; }
        if (ctx->pc != 0x30EA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B460_0x13b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA20u; }
        if (ctx->pc != 0x30EA20u) { return; }
    }
    ctx->pc = 0x30EA20u;
label_30ea20:
    // 0x30ea20: 0xc04ed78  jal         func_13B5E0
    ctx->pc = 0x30EA20u;
    SET_GPR_U32(ctx, 31, 0x30EA28u);
    ctx->pc = 0x13B5E0u;
    if (runtime->hasFunction(0x13B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA28u; }
        if (ctx->pc != 0x30EA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B5E0_0x13b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA28u; }
        if (ctx->pc != 0x30EA28u) { return; }
    }
    ctx->pc = 0x30EA28u;
label_30ea28:
    // 0x30ea28: 0xc0551a0  jal         func_154680
    ctx->pc = 0x30EA28u;
    SET_GPR_U32(ctx, 31, 0x30EA30u);
    ctx->pc = 0x154680u;
    if (runtime->hasFunction(0x154680u)) {
        auto targetFn = runtime->lookupFunction(0x154680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA30u; }
        if (ctx->pc != 0x30EA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154680_0x154680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA30u; }
        if (ctx->pc != 0x30EA30u) { return; }
    }
    ctx->pc = 0x30EA30u;
label_30ea30:
    // 0x30ea30: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x30EA30u;
    SET_GPR_U32(ctx, 31, 0x30EA38u);
    ctx->pc = 0x1A0C00u;
    if (runtime->hasFunction(0x1A0C00u)) {
        auto targetFn = runtime->lookupFunction(0x1A0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA38u; }
        if (ctx->pc != 0x30EA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0C00_0x1a0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA38u; }
        if (ctx->pc != 0x30EA38u) { return; }
    }
    ctx->pc = 0x30EA38u;
label_30ea38:
    // 0x30ea38: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30ea3c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x30ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30ea40: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x30ea40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30ea44: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30EA44u;
    {
        const bool branch_taken_0x30ea44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30ea44) {
            ctx->pc = 0x30EA98u;
            goto label_30ea98;
        }
    }
    ctx->pc = 0x30EA4Cu;
    // 0x30ea4c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x30ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x30ea50: 0xc0ceb6c  jal         func_33ADB0
    ctx->pc = 0x30EA50u;
    SET_GPR_U32(ctx, 31, 0x30EA58u);
    ctx->pc = 0x30EA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA50u;
            // 0x30ea54: 0xac40e8d0  sw          $zero, -0x1730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33ADB0u;
    if (runtime->hasFunction(0x33ADB0u)) {
        auto targetFn = runtime->lookupFunction(0x33ADB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA58u; }
        if (ctx->pc != 0x30EA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033ADB0_0x33adb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA58u; }
        if (ctx->pc != 0x30EA58u) { return; }
    }
    ctx->pc = 0x30EA58u;
label_30ea58:
    // 0x30ea58: 0xc0628bc  jal         func_18A2F0
    ctx->pc = 0x30EA58u;
    SET_GPR_U32(ctx, 31, 0x30EA60u);
    ctx->pc = 0x18A2F0u;
    if (runtime->hasFunction(0x18A2F0u)) {
        auto targetFn = runtime->lookupFunction(0x18A2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA60u; }
        if (ctx->pc != 0x30EA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A2F0_0x18a2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA60u; }
        if (ctx->pc != 0x30EA60u) { return; }
    }
    ctx->pc = 0x30EA60u;
label_30ea60:
    // 0x30ea60: 0xc0cf85c  jal         func_33E170
    ctx->pc = 0x30EA60u;
    SET_GPR_U32(ctx, 31, 0x30EA68u);
    ctx->pc = 0x30EA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA60u;
            // 0x30ea64: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x33E170u;
    if (runtime->hasFunction(0x33E170u)) {
        auto targetFn = runtime->lookupFunction(0x33E170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA68u; }
        if (ctx->pc != 0x30EA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033E170_0x33e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA68u; }
        if (ctx->pc != 0x30EA68u) { return; }
    }
    ctx->pc = 0x30EA68u;
label_30ea68:
    // 0x30ea68: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x30ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x30ea6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ea6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea70: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x30ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x30ea74: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x30ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_30ea78:
    // 0x30ea78: 0xa4830154  sh          $v1, 0x154($a0)
    ctx->pc = 0x30ea78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 340), (uint16_t)GPR_U32(ctx, 3));
    // 0x30ea7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30ea80: 0xa4830174  sh          $v1, 0x174($a0)
    ctx->pc = 0x30ea80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 372), (uint16_t)GPR_U32(ctx, 3));
    // 0x30ea84: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x30ea84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30ea88: 0xa4830194  sh          $v1, 0x194($a0)
    ctx->pc = 0x30ea88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 404), (uint16_t)GPR_U32(ctx, 3));
    // 0x30ea8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30EA8Cu;
    {
        const bool branch_taken_0x30ea8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA8Cu;
            // 0x30ea90: 0x24840248  addiu       $a0, $a0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea8c) {
            ctx->pc = 0x30EA78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30ea78;
        }
    }
    ctx->pc = 0x30EA94u;
    // 0x30ea94: 0x0  nop
    ctx->pc = 0x30ea94u;
    // NOP
label_30ea98:
    // 0x30ea98: 0xc054330  jal         func_150CC0
    ctx->pc = 0x30EA98u;
    SET_GPR_U32(ctx, 31, 0x30EAA0u);
    ctx->pc = 0x150CC0u;
    if (runtime->hasFunction(0x150CC0u)) {
        auto targetFn = runtime->lookupFunction(0x150CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAA0u; }
        if (ctx->pc != 0x30EAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150CC0_0x150cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAA0u; }
        if (ctx->pc != 0x30EAA0u) { return; }
    }
    ctx->pc = 0x30EAA0u;
label_30eaa0:
    // 0x30eaa0: 0xc0c7d84  jal         func_31F610
    ctx->pc = 0x30EAA0u;
    SET_GPR_U32(ctx, 31, 0x30EAA8u);
    ctx->pc = 0x31F610u;
    if (runtime->hasFunction(0x31F610u)) {
        auto targetFn = runtime->lookupFunction(0x31F610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAA8u; }
        if (ctx->pc != 0x30EAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031F610_0x31f610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAA8u; }
        if (ctx->pc != 0x30EAA8u) { return; }
    }
    ctx->pc = 0x30EAA8u;
label_30eaa8:
    // 0x30eaa8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30eaac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eab0: 0xa043da50  sb          $v1, -0x25B0($v0)
    ctx->pc = 0x30eab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 3));
    // 0x30eab4: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x30eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x30eab8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30eabc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eac0: 0xa464da60  sh          $a0, -0x25A0($v1)
    ctx->pc = 0x30eac0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957664), (uint16_t)GPR_U32(ctx, 4));
    // 0x30eac4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30eac8: 0xa440da66  sh          $zero, -0x259A($v0)
    ctx->pc = 0x30eac8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957670), (uint16_t)GPR_U32(ctx, 0));
    // 0x30eacc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x30eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x30ead0: 0xa460da68  sh          $zero, -0x2598($v1)
    ctx->pc = 0x30ead0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957672), (uint16_t)GPR_U32(ctx, 0));
    // 0x30ead4: 0x9043f35b  lbu         $v1, -0xCA5($v0)
    ctx->pc = 0x30ead4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x30ead8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30eadc: 0x14640031  bne         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x30EADCu;
    {
        const bool branch_taken_0x30eadc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x30eadc) {
            ctx->pc = 0x30EBA4u;
            goto label_30eba4;
        }
    }
    ctx->pc = 0x30EAE4u;
    // 0x30eae4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x30eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x30eae8: 0x9042b272  lbu         $v0, -0x4D8E($v0)
    ctx->pc = 0x30eae8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947442)));
    // 0x30eaec: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x30eaecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x30eaf0: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x30EAF0u;
    {
        const bool branch_taken_0x30eaf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eaf0) {
            ctx->pc = 0x30EAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30EAF0u;
            // 0x30eaf4: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30EB48u;
            goto label_30eb48;
        }
    }
    ctx->pc = 0x30EAF8u;
    // 0x30eaf8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x30eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x30eafc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30eb00: 0x248436a0  addiu       $a0, $a0, 0x36A0
    ctx->pc = 0x30eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13984));
    // 0x30eb04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30eb08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30eb0c: 0x400008  jr          $v0
    ctx->pc = 0x30EB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30EB14u: goto label_30eb14;
            case 0x30EB2Cu: goto label_30eb2c;
            case 0x30EB44u: goto label_30eb44;
            case 0x30EB5Cu: goto label_30eb5c;
            case 0x30EB74u: goto label_30eb74;
            case 0x30EB8Cu: goto label_30eb8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30EB14u;
label_30eb14:
    // 0x30eb14: 0x2404007e  addiu       $a0, $zero, 0x7E
    ctx->pc = 0x30eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x30eb18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb1c: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30eb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30eb20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb24: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x30EB24u;
    {
        const bool branch_taken_0x30eb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB24u;
            // 0x30eb28: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb24) {
            ctx->pc = 0x30EC60u;
            goto label_30ec60;
        }
    }
    ctx->pc = 0x30EB2Cu;
label_30eb2c:
    // 0x30eb2c: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x30eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x30eb30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb34: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30eb34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30eb38: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb3c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x30EB3Cu;
    {
        const bool branch_taken_0x30eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB3Cu;
            // 0x30eb40: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb3c) {
            ctx->pc = 0x30EC60u;
            goto label_30ec60;
        }
    }
    ctx->pc = 0x30EB44u;
label_30eb44:
    // 0x30eb44: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x30eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_30eb48:
    // 0x30eb48: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb4c: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30eb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30eb50: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb54: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x30EB54u;
    {
        const bool branch_taken_0x30eb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB54u;
            // 0x30eb58: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb54) {
            ctx->pc = 0x30EC60u;
            goto label_30ec60;
        }
    }
    ctx->pc = 0x30EB5Cu;
label_30eb5c:
    // 0x30eb5c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x30eb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30eb60: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb64: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30eb64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30eb68: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb6c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x30EB6Cu;
    {
        const bool branch_taken_0x30eb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB6Cu;
            // 0x30eb70: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb6c) {
            ctx->pc = 0x30EC60u;
            goto label_30ec60;
        }
    }
    ctx->pc = 0x30EB74u;
label_30eb74:
    // 0x30eb74: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x30eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x30eb78: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb7c: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30eb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30eb80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb84: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x30EB84u;
    {
        const bool branch_taken_0x30eb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB84u;
            // 0x30eb88: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb84) {
            ctx->pc = 0x30EC60u;
            goto label_30ec60;
        }
    }
    ctx->pc = 0x30EB8Cu;
label_30eb8c:
    // 0x30eb8c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30eb90: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb94: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30eb94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30eb98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30eb9c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x30EB9Cu;
    {
        const bool branch_taken_0x30eb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB9Cu;
            // 0x30eba0: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb9c) {
            ctx->pc = 0x30EC60u;
            goto label_30ec60;
        }
    }
    ctx->pc = 0x30EBA4u;
label_30eba4:
    // 0x30eba4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x30eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x30eba8: 0x9042b272  lbu         $v0, -0x4D8E($v0)
    ctx->pc = 0x30eba8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947442)));
    // 0x30ebac: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x30ebacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x30ebb0: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x30EBB0u;
    {
        const bool branch_taken_0x30ebb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ebb0) {
            ctx->pc = 0x30EBB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30EBB0u;
            // 0x30ebb4: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30EC08u;
            goto label_30ec08;
        }
    }
    ctx->pc = 0x30EBB8u;
    // 0x30ebb8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x30ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x30ebbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30ebc0: 0x24843680  addiu       $a0, $a0, 0x3680
    ctx->pc = 0x30ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13952));
    // 0x30ebc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30ebc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ebcc: 0x400008  jr          $v0
    ctx->pc = 0x30EBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30EBD4u: goto label_30ebd4;
            case 0x30EBECu: goto label_30ebec;
            case 0x30EC04u: goto label_30ec04;
            case 0x30EC1Cu: goto label_30ec1c;
            case 0x30EC34u: goto label_30ec34;
            case 0x30EC4Cu: goto label_30ec4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30EBD4u;
label_30ebd4:
    // 0x30ebd4: 0x24040086  addiu       $a0, $zero, 0x86
    ctx->pc = 0x30ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x30ebd8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ebdc: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30ebdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ebe0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ebe4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x30EBE4u;
    {
        const bool branch_taken_0x30ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EBE4u;
            // 0x30ebe8: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ebe4) {
            ctx->pc = 0x30EC60u;
            goto label_30ec60;
        }
    }
    ctx->pc = 0x30EBECu;
label_30ebec:
    // 0x30ebec: 0x2404007e  addiu       $a0, $zero, 0x7E
    ctx->pc = 0x30ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x30ebf0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ebf4: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30ebf4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ebf8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ebfc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30EBFCu;
    {
        const bool branch_taken_0x30ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EBFCu;
            // 0x30ec00: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ebfc) {
            ctx->pc = 0x30EC60u;
            goto label_30ec60;
        }
    }
    ctx->pc = 0x30EC04u;
label_30ec04:
    // 0x30ec04: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x30ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_30ec08:
    // 0x30ec08: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ec0c: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30ec0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ec10: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ec14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30EC14u;
    {
        const bool branch_taken_0x30ec14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC14u;
            // 0x30ec18: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec14) {
            ctx->pc = 0x30EC60u;
            goto label_30ec60;
        }
    }
    ctx->pc = 0x30EC1Cu;
label_30ec1c:
    // 0x30ec1c: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x30ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x30ec20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ec24: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30ec24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ec28: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ec2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30EC2Cu;
    {
        const bool branch_taken_0x30ec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC2Cu;
            // 0x30ec30: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec2c) {
            ctx->pc = 0x30EC60u;
            goto label_30ec60;
        }
    }
    ctx->pc = 0x30EC34u;
label_30ec34:
    // 0x30ec34: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x30ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30ec38: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ec3c: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30ec3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ec40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ec44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30EC44u;
    {
        const bool branch_taken_0x30ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC44u;
            // 0x30ec48: 0xa444da62  sh          $a0, -0x259E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec44) {
            ctx->pc = 0x30EC60u;
            goto label_30ec60;
        }
    }
    ctx->pc = 0x30EC4Cu;
label_30ec4c:
    // 0x30ec4c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ec50: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ec54: 0xa444da64  sh          $a0, -0x259C($v0)
    ctx->pc = 0x30ec54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ec58: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ec5c: 0xa444da62  sh          $a0, -0x259E($v0)
    ctx->pc = 0x30ec5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 4));
label_30ec60:
    // 0x30ec60: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30ec64: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x30ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30ec68: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x30ec68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30ec6c: 0x5044002a  beql        $v0, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x30EC6Cu;
    {
        const bool branch_taken_0x30ec6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x30ec6c) {
            ctx->pc = 0x30EC70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC6Cu;
            // 0x30ec70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30ED18u;
            goto label_30ed18;
        }
    }
    ctx->pc = 0x30EC74u;
    // 0x30ec74: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x30ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30ec78: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x30EC78u;
    {
        const bool branch_taken_0x30ec78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30ec78) {
            ctx->pc = 0x30ECC4u;
            goto label_30ecc4;
        }
    }
    ctx->pc = 0x30EC80u;
    // 0x30ec80: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30ec84: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30EC84u;
    {
        const bool branch_taken_0x30ec84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30ec84) {
            ctx->pc = 0x30EC88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC84u;
            // 0x30ec88: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30ECB0u;
            goto label_30ecb0;
        }
    }
    ctx->pc = 0x30EC8Cu;
    // 0x30ec8c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x30ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30ec90: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30EC90u;
    {
        const bool branch_taken_0x30ec90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30ec90) {
            ctx->pc = 0x30ECACu;
            goto label_30ecac;
        }
    }
    ctx->pc = 0x30EC98u;
    // 0x30ec98: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x30ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30ec9c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EC9Cu;
    {
        const bool branch_taken_0x30ec9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30ec9c) {
            ctx->pc = 0x30ECACu;
            goto label_30ecac;
        }
    }
    ctx->pc = 0x30ECA4u;
    // 0x30eca4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x30ECA4u;
    {
        const bool branch_taken_0x30eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eca4) {
            ctx->pc = 0x30ED48u;
            goto label_30ed48;
        }
    }
    ctx->pc = 0x30ECACu;
label_30ecac:
    // 0x30ecac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30ecb0:
    // 0x30ecb0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ecb4: 0xa464da64  sh          $a0, -0x259C($v1)
    ctx->pc = 0x30ecb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ecb8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ecbc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30ECBCu;
    {
        const bool branch_taken_0x30ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ECC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ECBCu;
            // 0x30ecc0: 0xa464da62  sh          $a0, -0x259E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ecbc) {
            ctx->pc = 0x30ED48u;
            goto label_30ed48;
        }
    }
    ctx->pc = 0x30ECC4u;
label_30ecc4:
    // 0x30ecc4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x30ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x30ecc8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30eccc: 0x8466bf0a  lh          $a2, -0x40F6($v1)
    ctx->pc = 0x30ecccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950666)));
    // 0x30ecd0: 0x14c50009  bne         $a2, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30ECD0u;
    {
        const bool branch_taken_0x30ecd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x30ecd0) {
            ctx->pc = 0x30ECF8u;
            goto label_30ecf8;
        }
    }
    ctx->pc = 0x30ECD8u;
    // 0x30ecd8: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x30ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x30ecdc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ece0: 0xa464da60  sh          $a0, -0x25A0($v1)
    ctx->pc = 0x30ece0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957664), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ece4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ece8: 0xa465da64  sh          $a1, -0x259C($v1)
    ctx->pc = 0x30ece8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957668), (uint16_t)GPR_U32(ctx, 5));
    // 0x30ecec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ececu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ecf0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x30ECF0u;
    {
        const bool branch_taken_0x30ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ECF0u;
            // 0x30ecf4: 0xa465da62  sh          $a1, -0x259E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957666), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ecf0) {
            ctx->pc = 0x30ED48u;
            goto label_30ed48;
        }
    }
    ctx->pc = 0x30ECF8u;
label_30ecf8:
    // 0x30ecf8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ecfc: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x30ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x30ed00: 0xa466da60  sh          $a2, -0x25A0($v1)
    ctx->pc = 0x30ed00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957664), (uint16_t)GPR_U32(ctx, 6));
    // 0x30ed04: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ed08: 0xa464da64  sh          $a0, -0x259C($v1)
    ctx->pc = 0x30ed08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ed0c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ed10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30ED10u;
    {
        const bool branch_taken_0x30ed10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED10u;
            // 0x30ed14: 0xa464da62  sh          $a0, -0x259E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed10) {
            ctx->pc = 0x30ED48u;
            goto label_30ed48;
        }
    }
    ctx->pc = 0x30ED18u;
label_30ed18:
    // 0x30ed18: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30ED18u;
    {
        const bool branch_taken_0x30ed18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x30ed18) {
            ctx->pc = 0x30ED1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED18u;
            // 0x30ed1c: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30ED38u;
            goto label_30ed38;
        }
    }
    ctx->pc = 0x30ED20u;
    // 0x30ed20: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x30ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x30ed24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ed28: 0xa464da64  sh          $a0, -0x259C($v1)
    ctx->pc = 0x30ed28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ed2c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ed30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30ED30u;
    {
        const bool branch_taken_0x30ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ED34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED30u;
            // 0x30ed34: 0xa464da62  sh          $a0, -0x259E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957666), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed30) {
            ctx->pc = 0x30ED48u;
            goto label_30ed48;
        }
    }
    ctx->pc = 0x30ED38u;
label_30ed38:
    // 0x30ed38: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ed3c: 0xa464da64  sh          $a0, -0x259C($v1)
    ctx->pc = 0x30ed3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957668), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ed40: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ed44: 0xa464da62  sh          $a0, -0x259E($v1)
    ctx->pc = 0x30ed44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957666), (uint16_t)GPR_U32(ctx, 4));
label_30ed48:
    // 0x30ed48: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ed4c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ed50: 0x8063da00  lb          $v1, -0x2600($v1)
    ctx->pc = 0x30ed50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957568)));
    // 0x30ed54: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30ED54u;
    {
        const bool branch_taken_0x30ed54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x30ed54) {
            ctx->pc = 0x30ED78u;
            goto label_30ed78;
        }
    }
    ctx->pc = 0x30ED5Cu;
    // 0x30ed5c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ed60: 0x8463da62  lh          $v1, -0x259E($v1)
    ctx->pc = 0x30ed60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957666)));
    // 0x30ed64: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30ED64u;
    {
        const bool branch_taken_0x30ed64 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x30ed64) {
            ctx->pc = 0x30ED78u;
            goto label_30ed78;
        }
    }
    ctx->pc = 0x30ED6Cu;
    // 0x30ed6c: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x30ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x30ed70: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ed74: 0xa464da60  sh          $a0, -0x25A0($v1)
    ctx->pc = 0x30ed74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957664), (uint16_t)GPR_U32(ctx, 4));
label_30ed78:
    // 0x30ed78: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x30ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x30ed7c: 0x9063f35c  lbu         $v1, -0xCA4($v1)
    ctx->pc = 0x30ed7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964060)));
    // 0x30ed80: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30ED80u;
    {
        const bool branch_taken_0x30ed80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ed80) {
            ctx->pc = 0x30EDC0u;
            goto label_30edc0;
        }
    }
    ctx->pc = 0x30ED88u;
    // 0x30ed88: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x30ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30ed8c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x30ED8Cu;
    {
        const bool branch_taken_0x30ed8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30ed8c) {
            ctx->pc = 0x30EDC0u;
            goto label_30edc0;
        }
    }
    ctx->pc = 0x30ED94u;
    // 0x30ed94: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30ed98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ed9c: 0x9063db55  lbu         $v1, -0x24AB($v1)
    ctx->pc = 0x30ed9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957909)));
    // 0x30eda0: 0x9042dd9d  lbu         $v0, -0x2263($v0)
    ctx->pc = 0x30eda0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958493)));
    // 0x30eda4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30EDA4u;
    {
        const bool branch_taken_0x30eda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30eda4) {
            ctx->pc = 0x30EDC0u;
            goto label_30edc0;
        }
    }
    ctx->pc = 0x30EDACu;
    // 0x30edac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30edacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30edb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30edb4: 0xa443da64  sh          $v1, -0x259C($v0)
    ctx->pc = 0x30edb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957668), (uint16_t)GPR_U32(ctx, 3));
    // 0x30edb8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30edbc: 0xa443da62  sh          $v1, -0x259E($v0)
    ctx->pc = 0x30edbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957666), (uint16_t)GPR_U32(ctx, 3));
label_30edc0:
    // 0x30edc0: 0xc05ce28  jal         func_1738A0
    ctx->pc = 0x30EDC0u;
    SET_GPR_U32(ctx, 31, 0x30EDC8u);
    ctx->pc = 0x1738A0u;
    if (runtime->hasFunction(0x1738A0u)) {
        auto targetFn = runtime->lookupFunction(0x1738A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDC8u; }
        if (ctx->pc != 0x30EDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001738A0_0x1738a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDC8u; }
        if (ctx->pc != 0x30EDC8u) { return; }
    }
    ctx->pc = 0x30EDC8u;
label_30edc8:
    // 0x30edc8: 0xc0548a4  jal         func_152290
    ctx->pc = 0x30EDC8u;
    SET_GPR_U32(ctx, 31, 0x30EDD0u);
    ctx->pc = 0x152290u;
    if (runtime->hasFunction(0x152290u)) {
        auto targetFn = runtime->lookupFunction(0x152290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDD0u; }
        if (ctx->pc != 0x30EDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152290_0x152290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDD0u; }
        if (ctx->pc != 0x30EDD0u) { return; }
    }
    ctx->pc = 0x30EDD0u;
label_30edd0:
    // 0x30edd0: 0xc05fa14  jal         func_17E850
    ctx->pc = 0x30EDD0u;
    SET_GPR_U32(ctx, 31, 0x30EDD8u);
    ctx->pc = 0x17E850u;
    if (runtime->hasFunction(0x17E850u)) {
        auto targetFn = runtime->lookupFunction(0x17E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDD8u; }
        if (ctx->pc != 0x30EDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E850_0x17e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDD8u; }
        if (ctx->pc != 0x30EDD8u) { return; }
    }
    ctx->pc = 0x30EDD8u;
label_30edd8:
    // 0x30edd8: 0xc05f6e8  jal         func_17DBA0
    ctx->pc = 0x30EDD8u;
    SET_GPR_U32(ctx, 31, 0x30EDE0u);
    ctx->pc = 0x17DBA0u;
    if (runtime->hasFunction(0x17DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x17DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDE0u; }
        if (ctx->pc != 0x30EDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DBA0_0x17dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDE0u; }
        if (ctx->pc != 0x30EDE0u) { return; }
    }
    ctx->pc = 0x30EDE0u;
label_30ede0:
    // 0x30ede0: 0xc0570bc  jal         func_15C2F0
    ctx->pc = 0x30EDE0u;
    SET_GPR_U32(ctx, 31, 0x30EDE8u);
    ctx->pc = 0x15C2F0u;
    if (runtime->hasFunction(0x15C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x15C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDE8u; }
        if (ctx->pc != 0x30EDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C2F0_0x15c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDE8u; }
        if (ctx->pc != 0x30EDE8u) { return; }
    }
    ctx->pc = 0x30EDE8u;
label_30ede8:
    // 0x30ede8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30edec: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x30EDECu;
    SET_GPR_U32(ctx, 31, 0x30EDF4u);
    ctx->pc = 0x30EDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EDECu;
            // 0x30edf0: 0xac40a1f8  sw          $zero, -0x5E08($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (runtime->hasFunction(0x12E930u)) {
        auto targetFn = runtime->lookupFunction(0x12E930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDF4u; }
        if (ctx->pc != 0x30EDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E930_0x12e930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDF4u; }
        if (ctx->pc != 0x30EDF4u) { return; }
    }
    ctx->pc = 0x30EDF4u;
label_30edf4:
    // 0x30edf4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30edf8: 0x3c0b0093  lui         $t3, 0x93
    ctx->pc = 0x30edf8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)147 << 16));
    // 0x30edfc: 0x8049da00  lb          $t1, -0x2600($v0)
    ctx->pc = 0x30edfcu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957568)));
    // 0x30ee00: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x30ee00u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x30ee04: 0x916bf35a  lbu         $t3, -0xCA6($t3)
    ctx->pc = 0x30ee04u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294964058)));
    // 0x30ee08: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x30ee08u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee0c: 0x25addb50  addiu       $t5, $t5, -0x24B0
    ctx->pc = 0x30ee0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957904));
    // 0x30ee10: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x30ee10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ee14: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ee18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30ee18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ee1c: 0x8044da00  lb          $a0, -0x2600($v0)
    ctx->pc = 0x30ee1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957568)));
    // 0x30ee20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30ee24: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x30ee24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x30ee28: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x30ee28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x30ee2c: 0x240c0055  addiu       $t4, $zero, 0x55
    ctx->pc = 0x30ee2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x30ee30: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x30ee30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30ee34: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30ee38: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x30ee38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
label_30ee3c:
    // 0x30ee3c: 0x91ae0050  lbu         $t6, 0x50($t5)
    ctx->pc = 0x30ee3cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 80)));
    // 0x30ee40: 0x31ce00f7  andi        $t6, $t6, 0xF7
    ctx->pc = 0x30ee40u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)247);
    // 0x30ee44: 0xa1ae0050  sb          $t6, 0x50($t5)
    ctx->pc = 0x30ee44u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 80), (uint8_t)GPR_U32(ctx, 14));
    // 0x30ee48: 0xa1ac0006  sb          $t4, 0x6($t5)
    ctx->pc = 0x30ee48u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 6), (uint8_t)GPR_U32(ctx, 12));
    // 0x30ee4c: 0xa1a00007  sb          $zero, 0x7($t5)
    ctx->pc = 0x30ee4cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ee50: 0xa1a00008  sb          $zero, 0x8($t5)
    ctx->pc = 0x30ee50u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ee54: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x30ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x30ee58: 0x156a001f  bne         $t3, $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x30EE58u;
    {
        const bool branch_taken_0x30ee58 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        ctx->pc = 0x30EE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EE58u;
            // 0x30ee5c: 0xa5a00012  sh          $zero, 0x12($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee58) {
            ctx->pc = 0x30EED8u;
            goto label_30eed8;
        }
    }
    ctx->pc = 0x30EE60u;
    // 0x30ee60: 0x11280019  beq         $t1, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30EE60u;
    {
        const bool branch_taken_0x30ee60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x30EE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EE60u;
            // 0x30ee64: 0x91ae0028  lbu         $t6, 0x28($t5) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee60) {
            ctx->pc = 0x30EEC8u;
            goto label_30eec8;
        }
    }
    ctx->pc = 0x30EE68u;
    // 0x30ee68: 0xe8940  sll         $s1, $t6, 5
    ctx->pc = 0x30ee68u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 14), 5));
    // 0x30ee6c: 0x1b18821  addu        $s1, $t5, $s1
    ctx->pc = 0x30ee6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x30ee70: 0x26320154  addiu       $s2, $s1, 0x154
    ctx->pc = 0x30ee70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
    // 0x30ee74: 0x86310154  lh          $s1, 0x154($s1)
    ctx->pc = 0x30ee74u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x30ee78: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x30EE78u;
    {
        const bool branch_taken_0x30ee78 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x30ee78) {
            ctx->pc = 0x30EEA8u;
            goto label_30eea8;
        }
    }
    ctx->pc = 0x30EE80u;
    // 0x30ee80: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x30ee80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x30ee84: 0xa6510000  sh          $s1, 0x0($s2)
    ctx->pc = 0x30ee84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x30ee88: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x30ee88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
    // 0x30ee8c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x30ee8cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x30ee90: 0x2a210071  slti        $at, $s1, 0x71
    ctx->pc = 0x30ee90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)113) ? 1 : 0);
    // 0x30ee94: 0x14200062  bnez        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x30EE94u;
    {
        const bool branch_taken_0x30ee94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ee94) {
            ctx->pc = 0x30F020u;
            goto label_30f020;
        }
    }
    ctx->pc = 0x30EE9Cu;
    // 0x30ee9c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x30EE9Cu;
    {
        const bool branch_taken_0x30ee9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EE9Cu;
            // 0x30eea0: 0xa6470000  sh          $a3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee9c) {
            ctx->pc = 0x30F020u;
            goto label_30f020;
        }
    }
    ctx->pc = 0x30EEA4u;
    // 0x30eea4: 0x0  nop
    ctx->pc = 0x30eea4u;
    // NOP
label_30eea8:
    // 0x30eea8: 0x91b10029  lbu         $s1, 0x29($t5)
    ctx->pc = 0x30eea8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 41)));
    // 0x30eeac: 0xa1b10028  sb          $s1, 0x28($t5)
    ctx->pc = 0x30eeacu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 40), (uint8_t)GPR_U32(ctx, 17));
    // 0x30eeb0: 0x91b1002a  lbu         $s1, 0x2A($t5)
    ctx->pc = 0x30eeb0u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 42)));
    // 0x30eeb4: 0xa1b10029  sb          $s1, 0x29($t5)
    ctx->pc = 0x30eeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 41), (uint8_t)GPR_U32(ctx, 17));
    // 0x30eeb8: 0xa1ae002a  sb          $t6, 0x2A($t5)
    ctx->pc = 0x30eeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 42), (uint8_t)GPR_U32(ctx, 14));
    // 0x30eebc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x30EEBCu;
    {
        const bool branch_taken_0x30eebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EEBCu;
            // 0x30eec0: 0x91ae0028  lbu         $t6, 0x28($t5) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eebc) {
            ctx->pc = 0x30F020u;
            goto label_30f020;
        }
    }
    ctx->pc = 0x30EEC4u;
    // 0x30eec4: 0x0  nop
    ctx->pc = 0x30eec4u;
    // NOP
label_30eec8:
    // 0x30eec8: 0xe8940  sll         $s1, $t6, 5
    ctx->pc = 0x30eec8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 14), 5));
    // 0x30eecc: 0x1b18821  addu        $s1, $t5, $s1
    ctx->pc = 0x30eeccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x30eed0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x30EED0u;
    {
        const bool branch_taken_0x30eed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EED0u;
            // 0x30eed4: 0xa6260154  sh          $a2, 0x154($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 340), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eed0) {
            ctx->pc = 0x30F020u;
            goto label_30f020;
        }
    }
    ctx->pc = 0x30EED8u;
label_30eed8:
    // 0x30eed8: 0x1565000f  bne         $t3, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x30EED8u;
    {
        const bool branch_taken_0x30eed8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 5));
        if (branch_taken_0x30eed8) {
            ctx->pc = 0x30EF18u;
            goto label_30ef18;
        }
    }
    ctx->pc = 0x30EEE0u;
    // 0x30eee0: 0x10880007  beq         $a0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30EEE0u;
    {
        const bool branch_taken_0x30eee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x30EEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EEE0u;
            // 0x30eee4: 0x91ae0028  lbu         $t6, 0x28($t5) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eee0) {
            ctx->pc = 0x30EF00u;
            goto label_30ef00;
        }
    }
    ctx->pc = 0x30EEE8u;
    // 0x30eee8: 0x31d100ff  andi        $s1, $t6, 0xFF
    ctx->pc = 0x30eee8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x30eeec: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x30eeecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x30eef0: 0x1b18821  addu        $s1, $t5, $s1
    ctx->pc = 0x30eef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x30eef4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x30EEF4u;
    {
        const bool branch_taken_0x30eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EEF4u;
            // 0x30eef8: 0xa6270154  sh          $a3, 0x154($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 340), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eef4) {
            ctx->pc = 0x30F020u;
            goto label_30f020;
        }
    }
    ctx->pc = 0x30EEFCu;
    // 0x30eefc: 0x0  nop
    ctx->pc = 0x30eefcu;
    // NOP
label_30ef00:
    // 0x30ef00: 0x31d100ff  andi        $s1, $t6, 0xFF
    ctx->pc = 0x30ef00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x30ef04: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x30ef04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x30ef08: 0x1b18821  addu        $s1, $t5, $s1
    ctx->pc = 0x30ef08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x30ef0c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x30EF0Cu;
    {
        const bool branch_taken_0x30ef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF0Cu;
            // 0x30ef10: 0xa6260154  sh          $a2, 0x154($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 340), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef0c) {
            ctx->pc = 0x30F020u;
            goto label_30f020;
        }
    }
    ctx->pc = 0x30EF14u;
    // 0x30ef14: 0x0  nop
    ctx->pc = 0x30ef14u;
    // NOP
label_30ef18:
    // 0x30ef18: 0x1563003f  bne         $t3, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x30EF18u;
    {
        const bool branch_taken_0x30ef18 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        if (branch_taken_0x30ef18) {
            ctx->pc = 0x30F018u;
            goto label_30f018;
        }
    }
    ctx->pc = 0x30EF20u;
    // 0x30ef20: 0x1e58804  sllv        $s1, $a1, $t7
    ctx->pc = 0x30ef20u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 15) & 0x1F));
    // 0x30ef24: 0x518824  and         $s1, $v0, $s1
    ctx->pc = 0x30ef24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x30ef28: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x30EF28u;
    {
        const bool branch_taken_0x30ef28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF28u;
            // 0x30ef2c: 0x91ae0028  lbu         $t6, 0x28($t5) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef28) {
            ctx->pc = 0x30F000u;
            goto label_30f000;
        }
    }
    ctx->pc = 0x30EF30u;
    // 0x30ef30: 0x91b1002b  lbu         $s1, 0x2B($t5)
    ctx->pc = 0x30ef30u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 43)));
    // 0x30ef34: 0x12230022  beq         $s1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x30EF34u;
    {
        const bool branch_taken_0x30ef34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x30ef34) {
            ctx->pc = 0x30EFC0u;
            goto label_30efc0;
        }
    }
    ctx->pc = 0x30EF3Cu;
    // 0x30ef3c: 0x122a0018  beq         $s1, $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x30EF3Cu;
    {
        const bool branch_taken_0x30ef3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 10));
        if (branch_taken_0x30ef3c) {
            ctx->pc = 0x30EFA0u;
            goto label_30efa0;
        }
    }
    ctx->pc = 0x30EF44u;
    // 0x30ef44: 0x1225000e  beq         $s1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x30EF44u;
    {
        const bool branch_taken_0x30ef44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x30ef44) {
            ctx->pc = 0x30EF80u;
            goto label_30ef80;
        }
    }
    ctx->pc = 0x30EF4Cu;
    // 0x30ef4c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30EF4Cu;
    {
        const bool branch_taken_0x30ef4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ef4c) {
            ctx->pc = 0x30EF60u;
            goto label_30ef60;
        }
    }
    ctx->pc = 0x30EF54u;
    // 0x30ef54: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x30EF54u;
    {
        const bool branch_taken_0x30ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ef54) {
            ctx->pc = 0x30EFD8u;
            goto label_30efd8;
        }
    }
    ctx->pc = 0x30EF5Cu;
    // 0x30ef5c: 0x0  nop
    ctx->pc = 0x30ef5cu;
    // NOP
label_30ef60:
    // 0x30ef60: 0x31d100ff  andi        $s1, $t6, 0xFF
    ctx->pc = 0x30ef60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x30ef64: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x30ef64u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x30ef68: 0x1b19021  addu        $s2, $t5, $s1
    ctx->pc = 0x30ef68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x30ef6c: 0x86510154  lh          $s1, 0x154($s2)
    ctx->pc = 0x30ef6cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x30ef70: 0x2631000e  addiu       $s1, $s1, 0xE
    ctx->pc = 0x30ef70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x30ef74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30EF74u;
    {
        const bool branch_taken_0x30ef74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF74u;
            // 0x30ef78: 0xa6510154  sh          $s1, 0x154($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 340), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef74) {
            ctx->pc = 0x30EFD8u;
            goto label_30efd8;
        }
    }
    ctx->pc = 0x30EF7Cu;
    // 0x30ef7c: 0x0  nop
    ctx->pc = 0x30ef7cu;
    // NOP
label_30ef80:
    // 0x30ef80: 0x31d100ff  andi        $s1, $t6, 0xFF
    ctx->pc = 0x30ef80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x30ef84: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x30ef84u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x30ef88: 0x1b19021  addu        $s2, $t5, $s1
    ctx->pc = 0x30ef88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x30ef8c: 0x86510154  lh          $s1, 0x154($s2)
    ctx->pc = 0x30ef8cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x30ef90: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x30ef90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x30ef94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30EF94u;
    {
        const bool branch_taken_0x30ef94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF94u;
            // 0x30ef98: 0xa6510154  sh          $s1, 0x154($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 340), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef94) {
            ctx->pc = 0x30EFD8u;
            goto label_30efd8;
        }
    }
    ctx->pc = 0x30EF9Cu;
    // 0x30ef9c: 0x0  nop
    ctx->pc = 0x30ef9cu;
    // NOP
label_30efa0:
    // 0x30efa0: 0x31d100ff  andi        $s1, $t6, 0xFF
    ctx->pc = 0x30efa0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x30efa4: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x30efa4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x30efa8: 0x1b19021  addu        $s2, $t5, $s1
    ctx->pc = 0x30efa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x30efac: 0x86510154  lh          $s1, 0x154($s2)
    ctx->pc = 0x30efacu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x30efb0: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x30efb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x30efb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30EFB4u;
    {
        const bool branch_taken_0x30efb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EFB4u;
            // 0x30efb8: 0xa6510154  sh          $s1, 0x154($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 340), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30efb4) {
            ctx->pc = 0x30EFD8u;
            goto label_30efd8;
        }
    }
    ctx->pc = 0x30EFBCu;
    // 0x30efbc: 0x0  nop
    ctx->pc = 0x30efbcu;
    // NOP
label_30efc0:
    // 0x30efc0: 0x31d100ff  andi        $s1, $t6, 0xFF
    ctx->pc = 0x30efc0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x30efc4: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x30efc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x30efc8: 0x1b19021  addu        $s2, $t5, $s1
    ctx->pc = 0x30efc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x30efcc: 0x86510154  lh          $s1, 0x154($s2)
    ctx->pc = 0x30efccu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x30efd0: 0x2631004a  addiu       $s1, $s1, 0x4A
    ctx->pc = 0x30efd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 74));
    // 0x30efd4: 0xa6510154  sh          $s1, 0x154($s2)
    ctx->pc = 0x30efd4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 340), (uint16_t)GPR_U32(ctx, 17));
label_30efd8:
    // 0x30efd8: 0x31d100ff  andi        $s1, $t6, 0xFF
    ctx->pc = 0x30efd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x30efdc: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x30efdcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x30efe0: 0x1b18821  addu        $s1, $t5, $s1
    ctx->pc = 0x30efe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x30efe4: 0x26320154  addiu       $s2, $s1, 0x154
    ctx->pc = 0x30efe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
    // 0x30efe8: 0x86310154  lh          $s1, 0x154($s1)
    ctx->pc = 0x30efe8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x30efec: 0x2a210071  slti        $at, $s1, 0x71
    ctx->pc = 0x30efecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)113) ? 1 : 0);
    // 0x30eff0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x30EFF0u;
    {
        const bool branch_taken_0x30eff0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30eff0) {
            ctx->pc = 0x30F020u;
            goto label_30f020;
        }
    }
    ctx->pc = 0x30EFF8u;
    // 0x30eff8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30EFF8u;
    {
        const bool branch_taken_0x30eff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EFF8u;
            // 0x30effc: 0xa6470000  sh          $a3, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eff8) {
            ctx->pc = 0x30F020u;
            goto label_30f020;
        }
    }
    ctx->pc = 0x30F000u;
label_30f000:
    // 0x30f000: 0x31d100ff  andi        $s1, $t6, 0xFF
    ctx->pc = 0x30f000u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x30f004: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x30f004u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x30f008: 0x1b18821  addu        $s1, $t5, $s1
    ctx->pc = 0x30f008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x30f00c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30F00Cu;
    {
        const bool branch_taken_0x30f00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F00Cu;
            // 0x30f010: 0xa6270154  sh          $a3, 0x154($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 340), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f00c) {
            ctx->pc = 0x30F020u;
            goto label_30f020;
        }
    }
    ctx->pc = 0x30F014u;
    // 0x30f014: 0x0  nop
    ctx->pc = 0x30f014u;
    // NOP
label_30f018:
    // 0x30f018: 0x91ae0028  lbu         $t6, 0x28($t5)
    ctx->pc = 0x30f018u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 40)));
    // 0x30f01c: 0x0  nop
    ctx->pc = 0x30f01cu;
    // NOP
label_30f020:
    // 0x30f020: 0xa1ae0003  sb          $t6, 0x3($t5)
    ctx->pc = 0x30f020u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 14));
    // 0x30f024: 0xada00064  sw          $zero, 0x64($t5)
    ctx->pc = 0x30f024u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 0));
    // 0x30f028: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30f028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f02c: 0xada00068  sw          $zero, 0x68($t5)
    ctx->pc = 0x30f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 104), GPR_U32(ctx, 0));
    // 0x30f030: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x30f030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f034: 0xada0006c  sw          $zero, 0x6C($t5)
    ctx->pc = 0x30f034u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 108), GPR_U32(ctx, 0));
    // 0x30f038: 0xada00078  sw          $zero, 0x78($t5)
    ctx->pc = 0x30f038u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 120), GPR_U32(ctx, 0));
    // 0x30f03c: 0xada00140  sw          $zero, 0x140($t5)
    ctx->pc = 0x30f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 320), GPR_U32(ctx, 0));
    // 0x30f040: 0xa1a00164  sb          $zero, 0x164($t5)
    ctx->pc = 0x30f040u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 356), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f044: 0xa1a00165  sb          $zero, 0x165($t5)
    ctx->pc = 0x30f044u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 357), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f048: 0xada00070  sw          $zero, 0x70($t5)
    ctx->pc = 0x30f048u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 112), GPR_U32(ctx, 0));
    // 0x30f04c: 0xada0007c  sw          $zero, 0x7C($t5)
    ctx->pc = 0x30f04cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 124), GPR_U32(ctx, 0));
    // 0x30f050: 0xada00144  sw          $zero, 0x144($t5)
    ctx->pc = 0x30f050u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 324), GPR_U32(ctx, 0));
    // 0x30f054: 0xa1a00184  sb          $zero, 0x184($t5)
    ctx->pc = 0x30f054u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 388), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f058: 0xa1a00185  sb          $zero, 0x185($t5)
    ctx->pc = 0x30f058u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 389), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f05c: 0xada00074  sw          $zero, 0x74($t5)
    ctx->pc = 0x30f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 116), GPR_U32(ctx, 0));
    // 0x30f060: 0xada00080  sw          $zero, 0x80($t5)
    ctx->pc = 0x30f060u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 128), GPR_U32(ctx, 0));
    // 0x30f064: 0xada00148  sw          $zero, 0x148($t5)
    ctx->pc = 0x30f064u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 328), GPR_U32(ctx, 0));
    // 0x30f068: 0xa1a001a4  sb          $zero, 0x1A4($t5)
    ctx->pc = 0x30f068u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 420), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f06c: 0xa1a001a5  sb          $zero, 0x1A5($t5)
    ctx->pc = 0x30f06cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 421), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f070: 0xada00090  sw          $zero, 0x90($t5)
    ctx->pc = 0x30f070u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 144), GPR_U32(ctx, 0));
    // 0x30f074: 0xada000a8  sw          $zero, 0xA8($t5)
    ctx->pc = 0x30f074u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 168), GPR_U32(ctx, 0));
    // 0x30f078: 0xada00094  sw          $zero, 0x94($t5)
    ctx->pc = 0x30f078u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 148), GPR_U32(ctx, 0));
    // 0x30f07c: 0xada000ac  sw          $zero, 0xAC($t5)
    ctx->pc = 0x30f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 172), GPR_U32(ctx, 0));
    // 0x30f080: 0xada00098  sw          $zero, 0x98($t5)
    ctx->pc = 0x30f080u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 152), GPR_U32(ctx, 0));
    // 0x30f084: 0xada000b0  sw          $zero, 0xB0($t5)
    ctx->pc = 0x30f084u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 176), GPR_U32(ctx, 0));
    // 0x30f088: 0xada0009c  sw          $zero, 0x9C($t5)
    ctx->pc = 0x30f088u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 156), GPR_U32(ctx, 0));
    // 0x30f08c: 0xada000b4  sw          $zero, 0xB4($t5)
    ctx->pc = 0x30f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 180), GPR_U32(ctx, 0));
    // 0x30f090: 0xada000a0  sw          $zero, 0xA0($t5)
    ctx->pc = 0x30f090u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 160), GPR_U32(ctx, 0));
    // 0x30f094: 0xada000b8  sw          $zero, 0xB8($t5)
    ctx->pc = 0x30f094u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 184), GPR_U32(ctx, 0));
    // 0x30f098: 0xada000a4  sw          $zero, 0xA4($t5)
    ctx->pc = 0x30f098u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 164), GPR_U32(ctx, 0));
    // 0x30f09c: 0xada000bc  sw          $zero, 0xBC($t5)
    ctx->pc = 0x30f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 188), GPR_U32(ctx, 0));
label_30f0a0:
    // 0x30f0a0: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x30f0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x30f0a4: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x30f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
    // 0x30f0a8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x30f0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x30f0ac: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x30f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    // 0x30f0b0: 0x2a2e0010  slti        $t6, $s1, 0x10
    ctx->pc = 0x30f0b0u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x30f0b4: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x30f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x30f0b8: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x30f0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x30f0bc: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x30f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x30f0c0: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x30f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x30f0c4: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x30f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
    // 0x30f0c8: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x30f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x30f0cc: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x30f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x30f0d0: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x30f0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x30f0d4: 0xae400114  sw          $zero, 0x114($s2)
    ctx->pc = 0x30f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
    // 0x30f0d8: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x30f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x30f0dc: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x30f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x30f0e0: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x30f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x30f0e4: 0xae40011c  sw          $zero, 0x11C($s2)
    ctx->pc = 0x30f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 0));
    // 0x30f0e8: 0x15c0ffed  bnez        $t6, . + 4 + (-0x13 << 2)
    ctx->pc = 0x30F0E8u;
    {
        const bool branch_taken_0x30f0e8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F0E8u;
            // 0x30f0ec: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f0e8) {
            ctx->pc = 0x30F0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f0a0;
        }
    }
    ctx->pc = 0x30F0F0u;
    // 0x30f0f0: 0x91ae000a  lbu         $t6, 0xA($t5)
    ctx->pc = 0x30f0f0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x30f0f4: 0x15c50002  bne         $t6, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30F0F4u;
    {
        const bool branch_taken_0x30f0f4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 5));
        if (branch_taken_0x30f0f4) {
            ctx->pc = 0x30F100u;
            goto label_30f100;
        }
    }
    ctx->pc = 0x30F0FCu;
    // 0x30f0fc: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x30f0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_30f100:
    // 0x30f100: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x30f100u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x30f104: 0x29ee0004  slti        $t6, $t7, 0x4
    ctx->pc = 0x30f104u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x30f108: 0x15c0ff4c  bnez        $t6, . + 4 + (-0xB4 << 2)
    ctx->pc = 0x30F108u;
    {
        const bool branch_taken_0x30f108 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F108u;
            // 0x30f10c: 0x25ad0248  addiu       $t5, $t5, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f108) {
            ctx->pc = 0x30EE3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30ee3c;
        }
    }
    ctx->pc = 0x30F110u;
    // 0x30f110: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x30F110u;
    SET_GPR_U32(ctx, 31, 0x30F118u);
    ctx->pc = 0x1A0C00u;
    if (runtime->hasFunction(0x1A0C00u)) {
        auto targetFn = runtime->lookupFunction(0x1A0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F118u; }
        if (ctx->pc != 0x30F118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0C00_0x1a0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F118u; }
        if (ctx->pc != 0x30F118u) { return; }
    }
    ctx->pc = 0x30F118u;
label_30f118:
    // 0x30f118: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30f118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30f11c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x30f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x30f120: 0xa060db00  sb          $zero, -0x2500($v1)
    ctx->pc = 0x30f120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957824), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f124: 0xac40d918  sw          $zero, -0x26E8($v0)
    ctx->pc = 0x30f124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957336), GPR_U32(ctx, 0));
    // 0x30f128: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30f128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30f12c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f130: 0xa060b830  sb          $zero, -0x47D0($v1)
    ctx->pc = 0x30f130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948912), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f134: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x30F134u;
    SET_GPR_U32(ctx, 31, 0x30F13Cu);
    ctx->pc = 0x30F138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F134u;
            // 0x30f138: 0xa040b831  sb          $zero, -0x47CF($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294948913), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322B60u;
    if (runtime->hasFunction(0x322B60u)) {
        auto targetFn = runtime->lookupFunction(0x322B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F13Cu; }
        if (ctx->pc != 0x30F13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322B60_0x322b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F13Cu; }
        if (ctx->pc != 0x30F13Cu) { return; }
    }
    ctx->pc = 0x30F13Cu;
label_30f13c:
    // 0x30f13c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x30f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x30f140: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x30f140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x30f144: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x30f144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x30f148: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30f148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f14c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30f14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f150: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30f150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30f154: 0xc0c8b00  jal         func_322C00
    ctx->pc = 0x30F154u;
    SET_GPR_U32(ctx, 31, 0x30F15Cu);
    ctx->pc = 0x30F158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F154u;
            // 0x30f158: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322C00u;
    if (runtime->hasFunction(0x322C00u)) {
        auto targetFn = runtime->lookupFunction(0x322C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F15Cu; }
        if (ctx->pc != 0x30F15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322C00_0x322c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F15Cu; }
        if (ctx->pc != 0x30F15Cu) { return; }
    }
    ctx->pc = 0x30F15Cu;
label_30f15c:
    // 0x30f15c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x30f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x30f160: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x30f160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x30f164: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x30f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x30f168: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x30f168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30f16c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30f16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f170: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30f170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30f174: 0xc0c8b00  jal         func_322C00
    ctx->pc = 0x30F174u;
    SET_GPR_U32(ctx, 31, 0x30F17Cu);
    ctx->pc = 0x30F178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F174u;
            // 0x30f178: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322C00u;
    if (runtime->hasFunction(0x322C00u)) {
        auto targetFn = runtime->lookupFunction(0x322C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F17Cu; }
        if (ctx->pc != 0x30F17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322C00_0x322c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F17Cu; }
        if (ctx->pc != 0x30F17Cu) { return; }
    }
    ctx->pc = 0x30F17Cu;
label_30f17c:
    // 0x30f17c: 0x3c034026  lui         $v1, 0x4026
    ctx->pc = 0x30f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16422 << 16));
    // 0x30f180: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x30f180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x30f184: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x30f184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x30f188: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x30f188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x30f18c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30f18cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f190: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x30f190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30f194: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30f194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30f198: 0xc0c8b00  jal         func_322C00
    ctx->pc = 0x30F198u;
    SET_GPR_U32(ctx, 31, 0x30F1A0u);
    ctx->pc = 0x30F19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F198u;
            // 0x30f19c: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322C00u;
    if (runtime->hasFunction(0x322C00u)) {
        auto targetFn = runtime->lookupFunction(0x322C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F1A0u; }
        if (ctx->pc != 0x30F1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322C00_0x322c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F1A0u; }
        if (ctx->pc != 0x30F1A0u) { return; }
    }
    ctx->pc = 0x30F1A0u;
label_30f1a0:
    // 0x30f1a0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30f1a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30f1a8: 0x90449780  lbu         $a0, -0x6880($v0)
    ctx->pc = 0x30f1a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30f1ac: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F1ACu;
    {
        const bool branch_taken_0x30f1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30f1ac) {
            ctx->pc = 0x30F1C0u;
            goto label_30f1c0;
        }
    }
    ctx->pc = 0x30F1B4u;
    // 0x30f1b4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x30f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30f1b8: 0x5482001b  bnel        $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30F1B8u;
    {
        const bool branch_taken_0x30f1b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x30f1b8) {
            ctx->pc = 0x30F1BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F1B8u;
            // 0x30f1bc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F228u;
            goto label_30f228;
        }
    }
    ctx->pc = 0x30F1C0u;
label_30f1c0:
    // 0x30f1c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f1c4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x30f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x30f1c8: 0x8045d9f8  lb          $a1, -0x2608($v0)
    ctx->pc = 0x30f1c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x30f1cc: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x30f1ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x30f1d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30F1D0u;
    {
        const bool branch_taken_0x30f1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F1D0u;
            // 0x30f1d4: 0xa4605c60  sh          $zero, 0x5C60($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 23648), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1d0) {
            ctx->pc = 0x30F1F0u;
            goto label_30f1f0;
        }
    }
    ctx->pc = 0x30F1D8u;
    // 0x30f1d8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x30f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30f1dc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30f1e0: 0xa0435c58  sb          $v1, 0x5C58($v0)
    ctx->pc = 0x30f1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23640), (uint8_t)GPR_U32(ctx, 3));
    // 0x30f1e4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30f1e8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x30F1E8u;
    {
        const bool branch_taken_0x30f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F1E8u;
            // 0x30f1ec: 0xa0435c50  sb          $v1, 0x5C50($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 23632), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1e8) {
            ctx->pc = 0x30F338u;
            goto label_30f338;
        }
    }
    ctx->pc = 0x30F1F0u;
label_30f1f0:
    // 0x30f1f0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F1F0u;
    {
        const bool branch_taken_0x30f1f0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30F1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F1F0u;
            // 0x30f1f4: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1f0) {
            ctx->pc = 0x30F200u;
            goto label_30f200;
        }
    }
    ctx->pc = 0x30F1F8u;
    // 0x30f1f8: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x30f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x30f1fc: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x30f1fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
label_30f200:
    // 0x30f200: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30f200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30f204: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x30f204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x30f208: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F208u;
    {
        const bool branch_taken_0x30f208 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30F20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F208u;
            // 0x30f20c: 0xa0445c58  sb          $a0, 0x5C58($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 23640), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f208) {
            ctx->pc = 0x30F21Cu;
            goto label_30f21c;
        }
    }
    ctx->pc = 0x30F210u;
    // 0x30f210: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30F210u;
    {
        const bool branch_taken_0x30f210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f210) {
            ctx->pc = 0x30F21Cu;
            goto label_30f21c;
        }
    }
    ctx->pc = 0x30F218u;
    // 0x30f218: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x30f218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_30f21c:
    // 0x30f21c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30f220: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x30F220u;
    {
        const bool branch_taken_0x30f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F220u;
            // 0x30f224: 0xa0435c50  sb          $v1, 0x5C50($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 23632), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f220) {
            ctx->pc = 0x30F338u;
            goto label_30f338;
        }
    }
    ctx->pc = 0x30F228u;
label_30f228:
    // 0x30f228: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30F228u;
    {
        const bool branch_taken_0x30f228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x30f228) {
            ctx->pc = 0x30F25Cu;
            goto label_30f25c;
        }
    }
    ctx->pc = 0x30F230u;
    // 0x30f230: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x30f230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x30f234: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x30f234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x30f238: 0x9044bf15  lbu         $a0, -0x40EB($v0)
    ctx->pc = 0x30f238u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950677)));
    // 0x30f23c: 0xa4605c60  sh          $zero, 0x5C60($v1)
    ctx->pc = 0x30f23cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23648), (uint16_t)GPR_U32(ctx, 0));
    // 0x30f240: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x30f240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x30f244: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x30f244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x30f248: 0xa0645c58  sb          $a0, 0x5C58($v1)
    ctx->pc = 0x30f248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23640), (uint8_t)GPR_U32(ctx, 4));
    // 0x30f24c: 0x9045bf16  lbu         $a1, -0x40EA($v0)
    ctx->pc = 0x30f24cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950678)));
    // 0x30f250: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30f254: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x30F254u;
    {
        const bool branch_taken_0x30f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F254u;
            // 0x30f258: 0xa0455c50  sb          $a1, 0x5C50($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 23632), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f254) {
            ctx->pc = 0x30F338u;
            goto label_30f338;
        }
    }
    ctx->pc = 0x30F25Cu;
label_30f25c:
    // 0x30f25c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x30f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x30f260: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x30f260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x30f264: 0x9044b271  lbu         $a0, -0x4D8F($v0)
    ctx->pc = 0x30f264u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947441)));
    // 0x30f268: 0xa4605c60  sh          $zero, 0x5C60($v1)
    ctx->pc = 0x30f268u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23648), (uint16_t)GPR_U32(ctx, 0));
    // 0x30f26c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x30f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x30f270: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f274: 0x9445dab0  lhu         $a1, -0x2550($v0)
    ctx->pc = 0x30f274u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x30f278: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x30f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x30f27c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30F27Cu;
    {
        const bool branch_taken_0x30f27c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F27Cu;
            // 0x30f280: 0xa0645c58  sb          $a0, 0x5C58($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23640), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f27c) {
            ctx->pc = 0x30F294u;
            goto label_30f294;
        }
    }
    ctx->pc = 0x30F284u;
    // 0x30f284: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30f284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30f288: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30f288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30f28c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x30F28Cu;
    {
        const bool branch_taken_0x30f28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F28Cu;
            // 0x30f290: 0xa0435c50  sb          $v1, 0x5C50($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 23632), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f28c) {
            ctx->pc = 0x30F338u;
            goto label_30f338;
        }
    }
    ctx->pc = 0x30F294u;
label_30f294:
    // 0x30f294: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30f294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30f298: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f29c: 0x2463da90  addiu       $v1, $v1, -0x2570
    ctx->pc = 0x30f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957712));
    // 0x30f2a0: 0x8046da08  lb          $a2, -0x25F8($v0)
    ctx->pc = 0x30f2a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x30f2a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x30f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x30f2a8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x30f2a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f2ac: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30f2b0: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x30f2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x30f2b4: 0x24420771  addiu       $v0, $v0, 0x771
    ctx->pc = 0x30f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1905));
    // 0x30f2b8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30f2bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x30f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30f2c0: 0x24630770  addiu       $v1, $v1, 0x770
    ctx->pc = 0x30f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1904));
    // 0x30f2c4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x30f2c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f2c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30f2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30f2cc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30f2ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f2d0: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x30f2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x30f2d4: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x30f2d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30f2d8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30F2D8u;
    {
        const bool branch_taken_0x30f2d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f2d8) {
            ctx->pc = 0x30F2E4u;
            goto label_30f2e4;
        }
    }
    ctx->pc = 0x30F2E0u;
    // 0x30f2e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30f2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f2e4:
    // 0x30f2e4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30f2e8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x30f2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30f2ec: 0xa0455c68  sb          $a1, 0x5C68($v0)
    ctx->pc = 0x30f2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23656), (uint8_t)GPR_U32(ctx, 5));
    // 0x30f2f0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x30f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30f2f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f2f8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30f2fc: 0x8042d9f8  lb          $v0, -0x2608($v0)
    ctx->pc = 0x30f2fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x30f300: 0x24630730  addiu       $v1, $v1, 0x730
    ctx->pc = 0x30f300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1840));
    // 0x30f304: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f30c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x30f30cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f310: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x30f310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30f314: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F314u;
    {
        const bool branch_taken_0x30f314 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x30f314) {
            ctx->pc = 0x30F318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F314u;
            // 0x30f318: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F324u;
            goto label_30f324;
        }
    }
    ctx->pc = 0x30F31Cu;
    // 0x30f31c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30f31cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f320: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x30f320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_30f324:
    // 0x30f324: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30F324u;
    {
        const bool branch_taken_0x30f324 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f324) {
            ctx->pc = 0x30F330u;
            goto label_30f330;
        }
    }
    ctx->pc = 0x30F32Cu;
    // 0x30f32c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x30f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_30f330:
    // 0x30f330: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x30f330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x30f334: 0xa0435c50  sb          $v1, 0x5C50($v0)
    ctx->pc = 0x30f334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23632), (uint8_t)GPR_U32(ctx, 3));
label_30f338:
    // 0x30f338: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30f338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30f33c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f340: 0xa460d9b8  sh          $zero, -0x2648($v1)
    ctx->pc = 0x30f340u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957496), (uint16_t)GPR_U32(ctx, 0));
    // 0x30f344: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30f344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30f348: 0xa040cec0  sb          $zero, -0x3140($v0)
    ctx->pc = 0x30f348u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954688), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f34c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x30f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x30f350: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x30f350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x30f354: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f358: 0xa4604510  sh          $zero, 0x4510($v1)
    ctx->pc = 0x30f358u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17680), (uint16_t)GPR_U32(ctx, 0));
    // 0x30f35c: 0x2484ec90  addiu       $a0, $a0, -0x1370
    ctx->pc = 0x30f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962320));
    // 0x30f360: 0xa4404508  sh          $zero, 0x4508($v0)
    ctx->pc = 0x30f360u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 17672), (uint16_t)GPR_U32(ctx, 0));
    // 0x30f364: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f368: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30f368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30f36c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f36cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f370: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F370u;
    SET_GPR_U32(ctx, 31, 0x30F378u);
    ctx->pc = 0x30F374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F370u;
            // 0x30f374: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F378u; }
        if (ctx->pc != 0x30F378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F378u; }
        if (ctx->pc != 0x30F378u) { return; }
    }
    ctx->pc = 0x30F378u;
label_30f378:
    // 0x30f378: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x30f378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x30f37c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f380: 0x24841570  addiu       $a0, $a0, 0x1570
    ctx->pc = 0x30f380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5488));
    // 0x30f384: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f388: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30f388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30f38c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f38cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f390: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F390u;
    SET_GPR_U32(ctx, 31, 0x30F398u);
    ctx->pc = 0x30F394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F390u;
            // 0x30f394: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F398u; }
        if (ctx->pc != 0x30F398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F398u; }
        if (ctx->pc != 0x30F398u) { return; }
    }
    ctx->pc = 0x30F398u;
label_30f398:
    // 0x30f398: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x30f398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x30f39c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f39cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f3a0: 0x24841ab0  addiu       $a0, $a0, 0x1AB0
    ctx->pc = 0x30f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6832));
    // 0x30f3a4: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f3a8: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30f3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30f3ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f3b0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F3B0u;
    SET_GPR_U32(ctx, 31, 0x30F3B8u);
    ctx->pc = 0x30F3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F3B0u;
            // 0x30f3b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F3B8u; }
        if (ctx->pc != 0x30F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F3B8u; }
        if (ctx->pc != 0x30F3B8u) { return; }
    }
    ctx->pc = 0x30F3B8u;
label_30f3b8:
    // 0x30f3b8: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x30f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x30f3bc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f3c0: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x30f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
    // 0x30f3c4: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f3c8: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30f3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30f3cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f3d0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F3D0u;
    SET_GPR_U32(ctx, 31, 0x30F3D8u);
    ctx->pc = 0x30F3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F3D0u;
            // 0x30f3d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F3D8u; }
        if (ctx->pc != 0x30F3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F3D8u; }
        if (ctx->pc != 0x30F3D8u) { return; }
    }
    ctx->pc = 0x30F3D8u;
label_30f3d8:
    // 0x30f3d8: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x30f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x30f3dc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f3e0: 0x24841680  addiu       $a0, $a0, 0x1680
    ctx->pc = 0x30f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5760));
    // 0x30f3e4: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f3e8: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30f3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30f3ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f3f0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F3F0u;
    SET_GPR_U32(ctx, 31, 0x30F3F8u);
    ctx->pc = 0x30F3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F3F0u;
            // 0x30f3f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F3F8u; }
        if (ctx->pc != 0x30F3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F3F8u; }
        if (ctx->pc != 0x30F3F8u) { return; }
    }
    ctx->pc = 0x30F3F8u;
label_30f3f8:
    // 0x30f3f8: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x30f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x30f3fc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f400: 0x248418e0  addiu       $a0, $a0, 0x18E0
    ctx->pc = 0x30f400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6368));
    // 0x30f404: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f408: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30f408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30f40c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f40cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f410: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F410u;
    SET_GPR_U32(ctx, 31, 0x30F418u);
    ctx->pc = 0x30F414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F410u;
            // 0x30f414: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F418u; }
        if (ctx->pc != 0x30F418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F418u; }
        if (ctx->pc != 0x30F418u) { return; }
    }
    ctx->pc = 0x30F418u;
label_30f418:
    // 0x30f418: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30f418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30f41c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f420: 0x2484f2d0  addiu       $a0, $a0, -0xD30
    ctx->pc = 0x30f420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963920));
    // 0x30f424: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f428: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x30f428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30f42c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f430: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F430u;
    SET_GPR_U32(ctx, 31, 0x30F438u);
    ctx->pc = 0x30F434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F430u;
            // 0x30f434: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F438u; }
        if (ctx->pc != 0x30F438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F438u; }
        if (ctx->pc != 0x30F438u) { return; }
    }
    ctx->pc = 0x30F438u;
label_30f438:
    // 0x30f438: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x30f438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x30f43c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f440: 0x2484a930  addiu       $a0, $a0, -0x56D0
    ctx->pc = 0x30f440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945072));
    // 0x30f444: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f448: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x30f448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x30f44c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f450: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F450u;
    SET_GPR_U32(ctx, 31, 0x30F458u);
    ctx->pc = 0x30F454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F450u;
            // 0x30f454: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F458u; }
        if (ctx->pc != 0x30F458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F458u; }
        if (ctx->pc != 0x30F458u) { return; }
    }
    ctx->pc = 0x30F458u;
label_30f458:
    // 0x30f458: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x30f458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x30f45c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f460: 0x24841bb0  addiu       $a0, $a0, 0x1BB0
    ctx->pc = 0x30f460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7088));
    // 0x30f464: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f468: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x30f468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x30f46c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f46cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f470: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F470u;
    SET_GPR_U32(ctx, 31, 0x30F478u);
    ctx->pc = 0x30F474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F470u;
            // 0x30f474: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F478u; }
        if (ctx->pc != 0x30F478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F478u; }
        if (ctx->pc != 0x30F478u) { return; }
    }
    ctx->pc = 0x30F478u;
label_30f478:
    // 0x30f478: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30f478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30f47c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f480: 0x248440f0  addiu       $a0, $a0, 0x40F0
    ctx->pc = 0x30f480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16624));
    // 0x30f484: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f488: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x30f488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x30f48c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f48cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f490: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F490u;
    SET_GPR_U32(ctx, 31, 0x30F498u);
    ctx->pc = 0x30F494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F490u;
            // 0x30f494: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F498u; }
        if (ctx->pc != 0x30F498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F498u; }
        if (ctx->pc != 0x30F498u) { return; }
    }
    ctx->pc = 0x30F498u;
label_30f498:
    // 0x30f498: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30f498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30f49c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f4a0: 0x24843c40  addiu       $a0, $a0, 0x3C40
    ctx->pc = 0x30f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15424));
    // 0x30f4a4: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f4a8: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x30f4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x30f4ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f4b0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F4B0u;
    SET_GPR_U32(ctx, 31, 0x30F4B8u);
    ctx->pc = 0x30F4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F4B0u;
            // 0x30f4b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4B8u; }
        if (ctx->pc != 0x30F4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4B8u; }
        if (ctx->pc != 0x30F4B8u) { return; }
    }
    ctx->pc = 0x30F4B8u;
label_30f4b8:
    // 0x30f4b8: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x30f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x30f4bc: 0xc05aa2c  jal         func_16A8B0
    ctx->pc = 0x30F4BCu;
    SET_GPR_U32(ctx, 31, 0x30F4C4u);
    ctx->pc = 0x30F4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F4BCu;
            // 0x30f4c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A8B0u;
    if (runtime->hasFunction(0x16A8B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4C4u; }
        if (ctx->pc != 0x30F4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A8B0_0x16a8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4C4u; }
        if (ctx->pc != 0x30F4C4u) { return; }
    }
    ctx->pc = 0x30F4C4u;
label_30f4c4:
    // 0x30f4c4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x30f4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x30f4c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f4cc: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x30f4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x30f4d0: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x30f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_30f4d4:
    // 0x30f4d4: 0x84c30154  lh          $v1, 0x154($a2)
    ctx->pc = 0x30f4d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x30f4d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30f4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30f4dc: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x30f4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x30f4e0: 0xa4c30156  sh          $v1, 0x156($a2)
    ctx->pc = 0x30f4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 342), (uint16_t)GPR_U32(ctx, 3));
    // 0x30f4e4: 0xa4c40158  sh          $a0, 0x158($a2)
    ctx->pc = 0x30f4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x30f4e8: 0xa4c4015a  sh          $a0, 0x15A($a2)
    ctx->pc = 0x30f4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 346), (uint16_t)GPR_U32(ctx, 4));
    // 0x30f4ec: 0x84c30174  lh          $v1, 0x174($a2)
    ctx->pc = 0x30f4ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 372)));
    // 0x30f4f0: 0xa4c30176  sh          $v1, 0x176($a2)
    ctx->pc = 0x30f4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 374), (uint16_t)GPR_U32(ctx, 3));
    // 0x30f4f4: 0xa4c40178  sh          $a0, 0x178($a2)
    ctx->pc = 0x30f4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 376), (uint16_t)GPR_U32(ctx, 4));
    // 0x30f4f8: 0xa4c4017a  sh          $a0, 0x17A($a2)
    ctx->pc = 0x30f4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 378), (uint16_t)GPR_U32(ctx, 4));
    // 0x30f4fc: 0x84c30194  lh          $v1, 0x194($a2)
    ctx->pc = 0x30f4fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 404)));
    // 0x30f500: 0xa4c30196  sh          $v1, 0x196($a2)
    ctx->pc = 0x30f500u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 406), (uint16_t)GPR_U32(ctx, 3));
    // 0x30f504: 0xa4c40198  sh          $a0, 0x198($a2)
    ctx->pc = 0x30f504u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 408), (uint16_t)GPR_U32(ctx, 4));
    // 0x30f508: 0xa4c4019a  sh          $a0, 0x19A($a2)
    ctx->pc = 0x30f508u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 410), (uint16_t)GPR_U32(ctx, 4));
    // 0x30f50c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x30F50Cu;
    {
        const bool branch_taken_0x30f50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F50Cu;
            // 0x30f510: 0x24c60248  addiu       $a2, $a2, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f50c) {
            ctx->pc = 0x30F4D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f4d4;
        }
    }
    ctx->pc = 0x30F514u;
    // 0x30f514: 0xc04bdfc  jal         func_12F7F0
    ctx->pc = 0x30F514u;
    SET_GPR_U32(ctx, 31, 0x30F51Cu);
    ctx->pc = 0x12F7F0u;
    if (runtime->hasFunction(0x12F7F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F51Cu; }
        if (ctx->pc != 0x30F51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F7F0_0x12f7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F51Cu; }
        if (ctx->pc != 0x30F51Cu) { return; }
    }
    ctx->pc = 0x30F51Cu;
label_30f51c:
    // 0x30f51c: 0x3c15009c  lui         $s5, 0x9C
    ctx->pc = 0x30f51cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)156 << 16));
    // 0x30f520: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30f520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f524: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30f524u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f528: 0x26b5db50  addiu       $s5, $s5, -0x24B0
    ctx->pc = 0x30f528u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957904));
label_30f52c:
    // 0x30f52c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30f530: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f534: 0x26260002  addiu       $a2, $s1, 0x2
    ctx->pc = 0x30f534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x30f538: 0x24844cc0  addiu       $a0, $a0, 0x4CC0
    ctx->pc = 0x30f538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19648));
    // 0x30f53c: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f540: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x30f540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f544: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F544u;
    SET_GPR_U32(ctx, 31, 0x30F54Cu);
    ctx->pc = 0x30F548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F544u;
            // 0x30f548: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F54Cu; }
        if (ctx->pc != 0x30F54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F54Cu; }
        if (ctx->pc != 0x30F54Cu) { return; }
    }
    ctx->pc = 0x30F54Cu;
label_30f54c:
    // 0x30f54c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30f550: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30f550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30f554: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f558: 0x26260006  addiu       $a2, $s1, 0x6
    ctx->pc = 0x30f558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x30f55c: 0x24844da0  addiu       $a0, $a0, 0x4DA0
    ctx->pc = 0x30f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19872));
    // 0x30f560: 0x24a53630  addiu       $a1, $a1, 0x3630
    ctx->pc = 0x30f560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13872));
    // 0x30f564: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30f564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f568: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30f568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f56c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F56Cu;
    SET_GPR_U32(ctx, 31, 0x30F574u);
    ctx->pc = 0x30F570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F56Cu;
            // 0x30f570: 0xa4510000  sh          $s1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F574u; }
        if (ctx->pc != 0x30F574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F574u; }
        if (ctx->pc != 0x30F574u) { return; }
    }
    ctx->pc = 0x30F574u;
label_30f574:
    // 0x30f574: 0x32e4000c  andi        $a0, $s7, 0xC
    ctx->pc = 0x30f574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)12);
    // 0x30f578: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x30f578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x30f57c: 0x648025  or          $s0, $v1, $a0
    ctx->pc = 0x30f57cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30f580: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f584: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x30f584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30f588: 0x36040100  ori         $a0, $s0, 0x100
    ctx->pc = 0x30f588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
    // 0x30f58c: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x30f58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x30f590: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f594: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x30f594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30f598: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30f598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30f59c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30f59cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30f5a0: 0x8c443c40  lw          $a0, 0x3C40($v0)
    ctx->pc = 0x30f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15424)));
    // 0x30f5a4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F5A4u;
    SET_GPR_U32(ctx, 31, 0x30F5ACu);
    ctx->pc = 0x30F5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F5A4u;
            // 0x30f5a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F5ACu; }
        if (ctx->pc != 0x30F5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F5ACu; }
        if (ctx->pc != 0x30F5ACu) { return; }
    }
    ctx->pc = 0x30F5ACu;
label_30f5ac:
    // 0x30f5ac: 0xaea20068  sw          $v0, 0x68($s5)
    ctx->pc = 0x30f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 2));
    // 0x30f5b0: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x30f5b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x30f5b4: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x30F5B4u;
    {
        const bool branch_taken_0x30f5b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30F5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F5B4u;
            // 0x30f5b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f5b4) {
            ctx->pc = 0x30F690u;
            goto label_30f690;
        }
    }
    ctx->pc = 0x30F5BCu;
    // 0x30f5bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30f5bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f5c0: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x30f5c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f5c4: 0x0  nop
    ctx->pc = 0x30f5c4u;
    // NOP
label_30f5c8:
    // 0x30f5c8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30f5cc: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x30f5ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30f5d0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30f5d4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30F5D4u;
    {
        const bool branch_taken_0x30f5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30f5d4) {
            ctx->pc = 0x30F5F0u;
            goto label_30f5f0;
        }
    }
    ctx->pc = 0x30F5DCu;
    // 0x30f5dc: 0x32820030  andi        $v0, $s4, 0x30
    ctx->pc = 0x30f5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)48);
    // 0x30f5e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x30f5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x30f5e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30F5E4u;
    {
        const bool branch_taken_0x30f5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F5E4u;
            // 0x30f5e8: 0x34560100  ori         $s6, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f5e4) {
            ctx->pc = 0x30F620u;
            goto label_30f620;
        }
    }
    ctx->pc = 0x30F5ECu;
    // 0x30f5ec: 0x0  nop
    ctx->pc = 0x30f5ecu;
    // NOP
label_30f5f0:
    // 0x30f5f0: 0x92a3000a  lbu         $v1, 0xA($s5)
    ctx->pc = 0x30f5f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x30f5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f5f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30F5F8u;
    {
        const bool branch_taken_0x30f5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30f5f8) {
            ctx->pc = 0x30F610u;
            goto label_30f610;
        }
    }
    ctx->pc = 0x30F600u;
    // 0x30f600: 0x32820030  andi        $v0, $s4, 0x30
    ctx->pc = 0x30f600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)48);
    // 0x30f604: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x30f604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x30f608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30F608u;
    {
        const bool branch_taken_0x30f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F608u;
            // 0x30f60c: 0x34560100  ori         $s6, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f608) {
            ctx->pc = 0x30F620u;
            goto label_30f620;
        }
    }
    ctx->pc = 0x30F610u;
label_30f610:
    // 0x30f610: 0x32820030  andi        $v0, $s4, 0x30
    ctx->pc = 0x30f610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)48);
    // 0x30f614: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x30f614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x30f618: 0x34560200  ori         $s6, $v0, 0x200
    ctx->pc = 0x30f618u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x30f61c: 0x0  nop
    ctx->pc = 0x30f61cu;
    // NOP
label_30f620:
    // 0x30f620: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x30f620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x30f624: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f628: 0x2626000e  addiu       $a2, $s1, 0xE
    ctx->pc = 0x30f628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x30f62c: 0x248460f0  addiu       $a0, $a0, 0x60F0
    ctx->pc = 0x30f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24816));
    // 0x30f630: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f634: 0x2407060c  addiu       $a3, $zero, 0x60C
    ctx->pc = 0x30f634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
    // 0x30f638: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F638u;
    SET_GPR_U32(ctx, 31, 0x30F640u);
    ctx->pc = 0x30F63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F638u;
            // 0x30f63c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F640u; }
        if (ctx->pc != 0x30F640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F640u; }
        if (ctx->pc != 0x30F640u) { return; }
    }
    ctx->pc = 0x30F640u;
label_30f640:
    // 0x30f640: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x30f640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x30f644: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30f644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30f648: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x30f648u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
    // 0x30f64c: 0x26260013  addiu       $a2, $s1, 0x13
    ctx->pc = 0x30f64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 19));
    // 0x30f650: 0x24841cf0  addiu       $a0, $a0, 0x1CF0
    ctx->pc = 0x30f650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7408));
    // 0x30f654: 0x24a53628  addiu       $a1, $a1, 0x3628
    ctx->pc = 0x30f654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13864));
    // 0x30f658: 0x2407060c  addiu       $a3, $zero, 0x60C
    ctx->pc = 0x30f658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
    // 0x30f65c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30F65Cu;
    SET_GPR_U32(ctx, 31, 0x30F664u);
    ctx->pc = 0x30F660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F65Cu;
            // 0x30f660: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F664u; }
        if (ctx->pc != 0x30F664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F664u; }
        if (ctx->pc != 0x30F664u) { return; }
    }
    ctx->pc = 0x30F664u;
label_30f664:
    // 0x30f664: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30f664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f668: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x30f668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
    // 0x30f66c: 0xc0587b4  jal         func_161ED0
    ctx->pc = 0x30F66Cu;
    SET_GPR_U32(ctx, 31, 0x30F674u);
    ctx->pc = 0x30F670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F66Cu;
            // 0x30f670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161ED0u;
    if (runtime->hasFunction(0x161ED0u)) {
        auto targetFn = runtime->lookupFunction(0x161ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F674u; }
        if (ctx->pc != 0x30F674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161ED0_0x161ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F674u; }
        if (ctx->pc != 0x30F674u) { return; }
    }
    ctx->pc = 0x30F674u;
label_30f674:
    // 0x30f674: 0xae620140  sw          $v0, 0x140($s3)
    ctx->pc = 0x30f674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 320), GPR_U32(ctx, 2));
    // 0x30f678: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30f678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30f67c: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x30f67cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x30f680: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x30f680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x30f684: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x30f684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30f688: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x30F688u;
    {
        const bool branch_taken_0x30f688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F688u;
            // 0x30f68c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f688) {
            ctx->pc = 0x30F5C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f5c8;
        }
    }
    ctx->pc = 0x30F690u;
label_30f690:
    // 0x30f690: 0x92a30003  lbu         $v1, 0x3($s5)
    ctx->pc = 0x30f690u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x30f694: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30f694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30f698: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x30f698u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x30f69c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x30f69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30f6a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f6a4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x30f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x30f6a8: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x30f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x30f6ac: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x30f6acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x30f6b0: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x30F6B0u;
    {
        const bool branch_taken_0x30f6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F6B0u;
            // 0x30f6b4: 0x26b50248  addiu       $s5, $s5, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6b0) {
            ctx->pc = 0x30F52Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f52c;
        }
    }
    ctx->pc = 0x30F6B8u;
    // 0x30f6b8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30f6bc: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x30f6bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x30f6c0: 0x24423e60  addiu       $v0, $v0, 0x3E60
    ctx->pc = 0x30f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15968));
    // 0x30f6c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30f6c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6c8: 0x2673db50  addiu       $s3, $s3, -0x24B0
    ctx->pc = 0x30f6c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957904));
    // 0x30f6cc: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x30f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x30f6d0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x30f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_30f6d4:
    // 0x30f6d4: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x30f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x30f6d8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x30f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30f6dc: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x30F6DCu;
    SET_GPR_U32(ctx, 31, 0x30F6E4u);
    ctx->pc = 0x30F6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F6DCu;
            // 0x30f6e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (runtime->hasFunction(0x17D790u)) {
        auto targetFn = runtime->lookupFunction(0x17D790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F6E4u; }
        if (ctx->pc != 0x30F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D790_0x17d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F6E4u; }
        if (ctx->pc != 0x30F6E4u) { return; }
    }
    ctx->pc = 0x30F6E4u;
label_30f6e4:
    // 0x30f6e4: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x30f6e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x30f6e8: 0x1840006b  blez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x30F6E8u;
    {
        const bool branch_taken_0x30f6e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30F6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F6E8u;
            // 0x30f6ec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6e8) {
            ctx->pc = 0x30F898u;
            goto label_30f898;
        }
    }
    ctx->pc = 0x30F6F0u;
    // 0x30f6f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x30f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30f6f4: 0x32a30003  andi        $v1, $s5, 0x3
    ctx->pc = 0x30f6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x30f6f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30f6f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6fc: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x30f6fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f700: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x30f700u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f704: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x30f704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x30f708: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x30f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30f70c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x30f70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x30f710: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30f710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f714: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x30f714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_30f718:
    // 0x30f718: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30f718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30f71c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x30f71cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30f720: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30f724: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30F724u;
    {
        const bool branch_taken_0x30f724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30f724) {
            ctx->pc = 0x30F740u;
            goto label_30f740;
        }
    }
    ctx->pc = 0x30F72Cu;
    // 0x30f72c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x30f72cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30f730: 0x32430030  andi        $v1, $s2, 0x30
    ctx->pc = 0x30f730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
    // 0x30f734: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30f734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f738: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30F738u;
    {
        const bool branch_taken_0x30f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F738u;
            // 0x30f73c: 0x34510100  ori         $s1, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f738) {
            ctx->pc = 0x30F778u;
            goto label_30f778;
        }
    }
    ctx->pc = 0x30F740u;
label_30f740:
    // 0x30f740: 0x9263000a  lbu         $v1, 0xA($s3)
    ctx->pc = 0x30f740u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x30f744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f748: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30F748u;
    {
        const bool branch_taken_0x30f748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30f748) {
            ctx->pc = 0x30F768u;
            goto label_30f768;
        }
    }
    ctx->pc = 0x30F750u;
    // 0x30f750: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x30f750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30f754: 0x32430030  andi        $v1, $s2, 0x30
    ctx->pc = 0x30f754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
    // 0x30f758: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30f758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f75c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30F75Cu;
    {
        const bool branch_taken_0x30f75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F75Cu;
            // 0x30f760: 0x34510100  ori         $s1, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f75c) {
            ctx->pc = 0x30F778u;
            goto label_30f778;
        }
    }
    ctx->pc = 0x30F764u;
    // 0x30f764: 0x0  nop
    ctx->pc = 0x30f764u;
    // NOP
label_30f768:
    // 0x30f768: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x30f768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30f76c: 0x32430030  andi        $v1, $s2, 0x30
    ctx->pc = 0x30f76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
    // 0x30f770: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30f770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f774: 0x34510200  ori         $s1, $v0, 0x200
    ctx->pc = 0x30f774u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_30f778:
    // 0x30f778: 0x8ee2006c  lw          $v0, 0x6C($s7)
    ctx->pc = 0x30f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 108)));
    // 0x30f77c: 0x92de014d  lbu         $fp, 0x14D($s6)
    ctx->pc = 0x30f77cu;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 333)));
    // 0x30f780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30f780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f784: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30f788: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x30f788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f78c: 0xac5100dc  sw          $s1, 0xDC($v0)
    ctx->pc = 0x30f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 17));
    // 0x30f790: 0xa45e00ea  sh          $fp, 0xEA($v0)
    ctx->pc = 0x30f790u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 234), (uint16_t)GPR_U32(ctx, 30));
    // 0x30f794: 0xa44000ec  sh          $zero, 0xEC($v0)
    ctx->pc = 0x30f794u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 236), (uint16_t)GPR_U32(ctx, 0));
    // 0x30f798: 0xac40048c  sw          $zero, 0x48C($v0)
    ctx->pc = 0x30f798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1164), GPR_U32(ctx, 0));
    // 0x30f79c: 0xac400490  sw          $zero, 0x490($v0)
    ctx->pc = 0x30f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1168), GPR_U32(ctx, 0));
    // 0x30f7a0: 0xac400494  sw          $zero, 0x494($v0)
    ctx->pc = 0x30f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1172), GPR_U32(ctx, 0));
    // 0x30f7a4: 0xac400498  sw          $zero, 0x498($v0)
    ctx->pc = 0x30f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1176), GPR_U32(ctx, 0));
    // 0x30f7a8: 0xac40049c  sw          $zero, 0x49C($v0)
    ctx->pc = 0x30f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1180), GPR_U32(ctx, 0));
    // 0x30f7ac: 0x8ee20078  lw          $v0, 0x78($s7)
    ctx->pc = 0x30f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 120)));
    // 0x30f7b0: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x30f7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30f7b4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x30f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x30f7b8: 0xc062734  jal         func_189CD0
    ctx->pc = 0x30F7B8u;
    SET_GPR_U32(ctx, 31, 0x30F7C0u);
    ctx->pc = 0x30F7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F7B8u;
            // 0x30f7bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189CD0u;
    if (runtime->hasFunction(0x189CD0u)) {
        auto targetFn = runtime->lookupFunction(0x189CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7C0u; }
        if (ctx->pc != 0x30F7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189CD0_0x189cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7C0u; }
        if (ctx->pc != 0x30F7C0u) { return; }
    }
    ctx->pc = 0x30F7C0u;
label_30f7c0:
    // 0x30f7c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x30f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30f7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f7c8: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x30f7c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f7cc: 0xc0583f8  jal         func_160FE0
    ctx->pc = 0x30F7CCu;
    SET_GPR_U32(ctx, 31, 0x30F7D4u);
    ctx->pc = 0x30F7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F7CCu;
            // 0x30f7d0: 0x240602a0  addiu       $a2, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160FE0u;
    if (runtime->hasFunction(0x160FE0u)) {
        auto targetFn = runtime->lookupFunction(0x160FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7D4u; }
        if (ctx->pc != 0x30F7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160FE0_0x160fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7D4u; }
        if (ctx->pc != 0x30F7D4u) { return; }
    }
    ctx->pc = 0x30F7D4u;
label_30f7d4:
    // 0x30f7d4: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x30f7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f7d8: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x30f7d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30f7dc: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x30F7DCu;
    SET_GPR_U32(ctx, 31, 0x30F7E4u);
    ctx->pc = 0x30F7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F7DCu;
            // 0x30f7e0: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7E4u; }
        if (ctx->pc != 0x30F7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7E4u; }
        if (ctx->pc != 0x30F7E4u) { return; }
    }
    ctx->pc = 0x30F7E4u;
label_30f7e4:
    // 0x30f7e4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x30f7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x30f7e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x30f7ec: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x30f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x30f7f0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x30f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x30f7f4: 0x8e02049c  lw          $v0, 0x49C($s0)
    ctx->pc = 0x30f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x30f7f8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x30f7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x30f7fc: 0xae02049c  sw          $v0, 0x49C($s0)
    ctx->pc = 0x30f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 2));
    // 0x30f800: 0xc0638b8  jal         func_18E2E0
    ctx->pc = 0x30F800u;
    SET_GPR_U32(ctx, 31, 0x30F808u);
    ctx->pc = 0x30F804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F800u;
            // 0x30f804: 0x960400ea  lhu         $a0, 0xEA($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E2E0u;
    if (runtime->hasFunction(0x18E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x18E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F808u; }
        if (ctx->pc != 0x30F808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E2E0_0x18e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F808u; }
        if (ctx->pc != 0x30F808u) { return; }
    }
    ctx->pc = 0x30F808u;
label_30f808:
    // 0x30f808: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30f808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30f80c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30f80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f810: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30f810u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30f814: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x30f814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f818: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x30f818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x30f81c: 0x32a700ff  andi        $a3, $s5, 0xFF
    ctx->pc = 0x30f81cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x30f820: 0xa20204a4  sb          $v0, 0x4A4($s0)
    ctx->pc = 0x30f820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1188), (uint8_t)GPR_U32(ctx, 2));
    // 0x30f824: 0x328800ff  andi        $t0, $s4, 0xFF
    ctx->pc = 0x30f824u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x30f828: 0xc0626a8  jal         func_189AA0
    ctx->pc = 0x30F828u;
    SET_GPR_U32(ctx, 31, 0x30F830u);
    ctx->pc = 0x30F82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F828u;
            // 0x30f82c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189AA0u;
    if (runtime->hasFunction(0x189AA0u)) {
        auto targetFn = runtime->lookupFunction(0x189AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F830u; }
        if (ctx->pc != 0x30F830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189AA0_0x189aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F830u; }
        if (ctx->pc != 0x30F830u) { return; }
    }
    ctx->pc = 0x30F830u;
label_30f830:
    // 0x30f830: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x30f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x30f834: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F834u;
    {
        const bool branch_taken_0x30f834 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F834u;
            // 0x30f838: 0xa202008c  sb          $v0, 0x8C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f834) {
            ctx->pc = 0x30F848u;
            goto label_30f848;
        }
    }
    ctx->pc = 0x30F83Cu;
    // 0x30f83c: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x30f83cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x30f840: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x30f840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x30f844: 0xa202008c  sb          $v0, 0x8C($s0)
    ctx->pc = 0x30f844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
label_30f848:
    // 0x30f848: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x30F848u;
    SET_GPR_U32(ctx, 31, 0x30F850u);
    ctx->pc = 0x30F84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F848u;
            // 0x30f84c: 0x92c4014d  lbu         $a0, 0x14D($s6) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 333)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F850u; }
        if (ctx->pc != 0x30F850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F850u; }
        if (ctx->pc != 0x30F850u) { return; }
    }
    ctx->pc = 0x30F850u;
label_30f850:
    // 0x30f850: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x30f850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x30f854: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x30f854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x30f858: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x30f858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f85c: 0xc0c1404  jal         func_305010
    ctx->pc = 0x30F85Cu;
    SET_GPR_U32(ctx, 31, 0x30F864u);
    ctx->pc = 0x30F860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F85Cu;
            // 0x30f860: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305010u;
    if (runtime->hasFunction(0x305010u)) {
        auto targetFn = runtime->lookupFunction(0x305010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F864u; }
        if (ctx->pc != 0x30F864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305010_0x305010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F864u; }
        if (ctx->pc != 0x30F864u) { return; }
    }
    ctx->pc = 0x30F864u;
label_30f864:
    // 0x30f864: 0xc058c68  jal         func_1631A0
    ctx->pc = 0x30F864u;
    SET_GPR_U32(ctx, 31, 0x30F86Cu);
    ctx->pc = 0x30F868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F864u;
            // 0x30f868: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1631A0u;
    if (runtime->hasFunction(0x1631A0u)) {
        auto targetFn = runtime->lookupFunction(0x1631A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F86Cu; }
        if (ctx->pc != 0x30F86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001631A0_0x1631a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F86Cu; }
        if (ctx->pc != 0x30F86Cu) { return; }
    }
    ctx->pc = 0x30F86Cu;
label_30f86c:
    // 0x30f86c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x30f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30f870: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30f870u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30f874: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x30f874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x30f878: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x30f878u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x30f87c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30f880: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x30f880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x30f884: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x30f884u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x30f888: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x30f888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30f88c: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x30F88Cu;
    {
        const bool branch_taken_0x30f88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F88Cu;
            // 0x30f890: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f88c) {
            ctx->pc = 0x30F718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f718;
        }
    }
    ctx->pc = 0x30F894u;
    // 0x30f894: 0x0  nop
    ctx->pc = 0x30f894u;
    // NOP
label_30f898:
    // 0x30f898: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x30f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x30f89c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f8a0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x30f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30f8a4: 0x9062008c  lbu         $v0, 0x8C($v1)
    ctx->pc = 0x30f8a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x30f8a8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x30f8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30f8ac: 0xc062df0  jal         func_18B7C0
    ctx->pc = 0x30F8ACu;
    SET_GPR_U32(ctx, 31, 0x30F8B4u);
    ctx->pc = 0x30F8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F8ACu;
            // 0x30f8b0: 0xa062008c  sb          $v0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B7C0u;
    if (runtime->hasFunction(0x18B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8B4u; }
        if (ctx->pc != 0x30F8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B7C0_0x18b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8B4u; }
        if (ctx->pc != 0x30F8B4u) { return; }
    }
    ctx->pc = 0x30F8B4u;
label_30f8b4:
    // 0x30f8b4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x30f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30f8b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30f8b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x30f8bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30f8c0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x30f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x30f8c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x30f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30f8c8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x30f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x30f8cc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x30f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x30f8d0: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x30f8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30f8d4: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x30F8D4u;
    {
        const bool branch_taken_0x30f8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F8D4u;
            // 0x30f8d8: 0x26730248  addiu       $s3, $s3, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f8d4) {
            ctx->pc = 0x30F6D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f6d4;
        }
    }
    ctx->pc = 0x30F8DCu;
    // 0x30f8dc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30f8e0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x30f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30f8e4: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x30f8e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30f8e8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30F8E8u;
    {
        const bool branch_taken_0x30f8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30f8e8) {
            ctx->pc = 0x30F910u;
            goto label_30f910;
        }
    }
    ctx->pc = 0x30F8F0u;
    // 0x30f8f0: 0xc0ce9e4  jal         func_33A790
    ctx->pc = 0x30F8F0u;
    SET_GPR_U32(ctx, 31, 0x30F8F8u);
    ctx->pc = 0x33A790u;
    if (runtime->hasFunction(0x33A790u)) {
        auto targetFn = runtime->lookupFunction(0x33A790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8F8u; }
        if (ctx->pc != 0x30F8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A790_0x33a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8F8u; }
        if (ctx->pc != 0x30F8F8u) { return; }
    }
    ctx->pc = 0x30F8F8u;
label_30f8f8:
    // 0x30f8f8: 0xc0cea34  jal         func_33A8D0
    ctx->pc = 0x30F8F8u;
    SET_GPR_U32(ctx, 31, 0x30F900u);
    ctx->pc = 0x33A8D0u;
    if (runtime->hasFunction(0x33A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x33A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F900u; }
        if (ctx->pc != 0x30F900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A8D0_0x33a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F900u; }
        if (ctx->pc != 0x30F900u) { return; }
    }
    ctx->pc = 0x30F900u;
label_30f900:
    // 0x30f900: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x30F900u;
    SET_GPR_U32(ctx, 31, 0x30F908u);
    ctx->pc = 0x33A950u;
    if (runtime->hasFunction(0x33A950u)) {
        auto targetFn = runtime->lookupFunction(0x33A950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F908u; }
        if (ctx->pc != 0x30F908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A950_0x33a950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F908u; }
        if (ctx->pc != 0x30F908u) { return; }
    }
    ctx->pc = 0x30F908u;
label_30f908:
    // 0x30f908: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f90c: 0xa040dad8  sb          $zero, -0x2528($v0)
    ctx->pc = 0x30f90cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957784), (uint8_t)GPR_U32(ctx, 0));
label_30f910:
    // 0x30f910: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30f910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30f914: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x30f914u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x30f918: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x30f91c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x30f91cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30f920: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F920u;
    {
        const bool branch_taken_0x30f920 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f920) {
            ctx->pc = 0x30F924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F920u;
            // 0x30f924: 0x8fa500fc  lw          $a1, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F934u;
            goto label_30f934;
        }
    }
    ctx->pc = 0x30F928u;
    // 0x30f928: 0xc052c0c  jal         func_14B030
    ctx->pc = 0x30F928u;
    SET_GPR_U32(ctx, 31, 0x30F930u);
    ctx->pc = 0x14B030u;
    if (runtime->hasFunction(0x14B030u)) {
        auto targetFn = runtime->lookupFunction(0x14B030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F930u; }
        if (ctx->pc != 0x30F930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B030_0x14b030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F930u; }
        if (ctx->pc != 0x30F930u) { return; }
    }
    ctx->pc = 0x30F930u;
label_30f930:
    // 0x30f930: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x30f930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_30f934:
    // 0x30f934: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30f934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30f938: 0xc055768  jal         func_155DA0
    ctx->pc = 0x30F938u;
    SET_GPR_U32(ctx, 31, 0x30F940u);
    ctx->pc = 0x30F93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F938u;
            // 0x30f93c: 0x2484f970  addiu       $a0, $a0, -0x690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F940u; }
        if (ctx->pc != 0x30F940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F940u; }
        if (ctx->pc != 0x30F940u) { return; }
    }
    ctx->pc = 0x30F940u;
label_30f940:
    // 0x30f940: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x30f940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30f944: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x30f944u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30f948: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30f948u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30f94c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30f94cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30f950: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30f950u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f954: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30f954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f958: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30f958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f95c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30f95cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30f964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f968: 0x3e00008  jr          $ra
    ctx->pc = 0x30F968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F968u;
            // 0x30f96c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F970u;
label_30f970:
    // 0x30f970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30f970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30f974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30f974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30f978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30f97c: 0xc04be58  jal         func_12F960
    ctx->pc = 0x30F97Cu;
    SET_GPR_U32(ctx, 31, 0x30F984u);
    ctx->pc = 0x30F980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F97Cu;
            // 0x30f980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F960u;
    if (runtime->hasFunction(0x12F960u)) {
        auto targetFn = runtime->lookupFunction(0x12F960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F984u; }
        if (ctx->pc != 0x30F984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F960_0x12f960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F984u; }
        if (ctx->pc != 0x30F984u) { return; }
    }
    ctx->pc = 0x30F984u;
label_30f984:
    // 0x30f984: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x30f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x30f988: 0x8c42d918  lw          $v0, -0x26E8($v0)
    ctx->pc = 0x30f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x30f98c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30f98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x30f990: 0x50400145  beql        $v0, $zero, . + 4 + (0x145 << 2)
    ctx->pc = 0x30F990u;
    {
        const bool branch_taken_0x30f990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f990) {
            ctx->pc = 0x30F994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F990u;
            // 0x30f994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FEA8u;
            goto label_30fea8;
        }
    }
    ctx->pc = 0x30F998u;
    // 0x30f998: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f99c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30f9a0: 0xac40c8a0  sw          $zero, -0x3760($v0)
    ctx->pc = 0x30f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953120), GPR_U32(ctx, 0));
    // 0x30f9a4: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x30f9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x30f9a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f9ac: 0xac60c8a4  sw          $zero, -0x375C($v1)
    ctx->pc = 0x30f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953124), GPR_U32(ctx, 0));
    // 0x30f9b0: 0xac40c8a8  sw          $zero, -0x3758($v0)
    ctx->pc = 0x30f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953128), GPR_U32(ctx, 0));
    // 0x30f9b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30f9b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f9bc: 0xac60c8ac  sw          $zero, -0x3754($v1)
    ctx->pc = 0x30f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953132), GPR_U32(ctx, 0));
    // 0x30f9c0: 0xac40c8b0  sw          $zero, -0x3750($v0)
    ctx->pc = 0x30f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953136), GPR_U32(ctx, 0));
    // 0x30f9c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30f9c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f9cc: 0xac60c8b4  sw          $zero, -0x374C($v1)
    ctx->pc = 0x30f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953140), GPR_U32(ctx, 0));
    // 0x30f9d0: 0xac40c8b8  sw          $zero, -0x3748($v0)
    ctx->pc = 0x30f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953144), GPR_U32(ctx, 0));
    // 0x30f9d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30f9d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f9dc: 0xac60c8bc  sw          $zero, -0x3744($v1)
    ctx->pc = 0x30f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953148), GPR_U32(ctx, 0));
    // 0x30f9e0: 0xac40c8c0  sw          $zero, -0x3740($v0)
    ctx->pc = 0x30f9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953152), GPR_U32(ctx, 0));
    // 0x30f9e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30f9e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f9ec: 0xac60c8c4  sw          $zero, -0x373C($v1)
    ctx->pc = 0x30f9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953156), GPR_U32(ctx, 0));
    // 0x30f9f0: 0xac40c8c8  sw          $zero, -0x3738($v0)
    ctx->pc = 0x30f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953160), GPR_U32(ctx, 0));
    // 0x30f9f4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x30f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30f9f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30f9fc: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x30f9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x30fa00: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x30fa00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x30fa04: 0xac60c8cc  sw          $zero, -0x3734($v1)
    ctx->pc = 0x30fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953164), GPR_U32(ctx, 0));
    // 0x30fa08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30fa08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa0c: 0xa440c8dc  sh          $zero, -0x3724($v0)
    ctx->pc = 0x30fa0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294953180), (uint16_t)GPR_U32(ctx, 0));
    // 0x30fa10: 0x24e7c8e0  addiu       $a3, $a3, -0x3720
    ctx->pc = 0x30fa10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953184));
    // 0x30fa14: 0x24c6cbc0  addiu       $a2, $a2, -0x3440
    ctx->pc = 0x30fa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953920));
    // 0x30fa18: 0x24a5c9c0  addiu       $a1, $a1, -0x3640
    ctx->pc = 0x30fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953408));
label_30fa1c:
    // 0x30fa1c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x30fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x30fa20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30fa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa24: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x30fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x30fa28: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x30fa28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa2c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x30fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x30fa30: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x30fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x30fa34: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x30fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x30fa38: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x30fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x30fa3c: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x30fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x30fa40: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x30fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x30fa44: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x30fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x30fa48: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x30fa48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x30fa4c: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x30fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x30fa50: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x30fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x30fa54: 0xa4e00030  sh          $zero, 0x30($a3)
    ctx->pc = 0x30fa54u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x30fa58: 0xa4e00032  sh          $zero, 0x32($a3)
    ctx->pc = 0x30fa58u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x30fa5c: 0xa0e00034  sb          $zero, 0x34($a3)
    ctx->pc = 0x30fa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 52), (uint8_t)GPR_U32(ctx, 0));
label_30fa60:
    // 0x30fa60: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x30fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x30fa64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30fa68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30fa6c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x30fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x30fa70: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x30fa70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30fa74: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x30fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x30fa78: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x30fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x30fa7c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x30fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x30fa80: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x30fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x30fa84: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x30fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x30fa88: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x30fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x30fa8c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x30fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x30fa90: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x30fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x30fa94: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x30fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x30fa98: 0xa460003c  sh          $zero, 0x3C($v1)
    ctx->pc = 0x30fa98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x30fa9c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30FA9Cu;
    {
        const bool branch_taken_0x30fa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FA9Cu;
            // 0x30faa0: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa9c) {
            ctx->pc = 0x30FA60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30fa60;
        }
    }
    ctx->pc = 0x30FAA4u;
    // 0x30faa4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30faa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30faa8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x30faa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30faac: 0x0  nop
    ctx->pc = 0x30faacu;
    // NOP
label_30fab0:
    // 0x30fab0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x30fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x30fab4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x30fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x30fab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30fabc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x30fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x30fac0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x30fac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30fac4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x30fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x30fac8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x30fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x30facc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x30faccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x30fad0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x30fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x30fad4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x30fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x30fad8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x30fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x30fadc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x30fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x30fae0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x30fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x30fae4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x30fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x30fae8: 0xa480003c  sh          $zero, 0x3C($a0)
    ctx->pc = 0x30fae8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x30faec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30FAECu;
    {
        const bool branch_taken_0x30faec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FAECu;
            // 0x30faf0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30faec) {
            ctx->pc = 0x30FAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30fab0;
        }
    }
    ctx->pc = 0x30FAF4u;
    // 0x30faf4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x30faf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x30faf8: 0x24e70038  addiu       $a3, $a3, 0x38
    ctx->pc = 0x30faf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
    // 0x30fafc: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x30fafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x30fb00: 0x24c600c0  addiu       $a2, $a2, 0xC0
    ctx->pc = 0x30fb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x30fb04: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x30FB04u;
    {
        const bool branch_taken_0x30fb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FB04u;
            // 0x30fb08: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb04) {
            ctx->pc = 0x30FA1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30fa1c;
        }
    }
    ctx->pc = 0x30FB0Cu;
    // 0x30fb0c: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fb10: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fb10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fb14: 0x24840f30  addiu       $a0, $a0, 0xF30
    ctx->pc = 0x30fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3888));
    // 0x30fb18: 0x24a536b8  addiu       $a1, $a1, 0x36B8
    ctx->pc = 0x30fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14008));
    // 0x30fb1c: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x30fb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30fb20: 0x240700bc  addiu       $a3, $zero, 0xBC
    ctx->pc = 0x30fb20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x30fb24: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FB24u;
    SET_GPR_U32(ctx, 31, 0x30FB2Cu);
    ctx->pc = 0x30FB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FB24u;
            // 0x30fb28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FB2Cu; }
        if (ctx->pc != 0x30FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FB2Cu; }
        if (ctx->pc != 0x30FB2Cu) { return; }
    }
    ctx->pc = 0x30FB2Cu;
label_30fb2c:
    // 0x30fb2c: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x30fb2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fb30: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fb34: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fb38: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x30fb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30fb3c: 0x2407ff80  addiu       $a3, $zero, -0x80
    ctx->pc = 0x30fb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x30fb40: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x30fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x30fb44: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x30fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x30fb48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30fb4c: 0xa5260014  sh          $a2, 0x14($t1)
    ctx->pc = 0x30fb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 20), (uint16_t)GPR_U32(ctx, 6));
    // 0x30fb50: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x30fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x30fb54: 0xa5270016  sh          $a3, 0x16($t1)
    ctx->pc = 0x30fb54u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 22), (uint16_t)GPR_U32(ctx, 7));
    // 0x30fb58: 0x24a536c0  addiu       $a1, $a1, 0x36C0
    ctx->pc = 0x30fb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14016));
    // 0x30fb5c: 0xad230018  sw          $v1, 0x18($t1)
    ctx->pc = 0x30fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 3));
    // 0x30fb60: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x30fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x30fb64: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x30fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x30fb68: 0x240700bc  addiu       $a3, $zero, 0xBC
    ctx->pc = 0x30fb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x30fb6c: 0xa12000b8  sb          $zero, 0xB8($t1)
    ctx->pc = 0x30fb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 184), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fb70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30fb70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fb74: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FB74u;
    SET_GPR_U32(ctx, 31, 0x30FB7Cu);
    ctx->pc = 0x30FB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FB74u;
            // 0x30fb78: 0xa12000ba  sb          $zero, 0xBA($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 186), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FB7Cu; }
        if (ctx->pc != 0x30FB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FB7Cu; }
        if (ctx->pc != 0x30FB7Cu) { return; }
    }
    ctx->pc = 0x30FB7Cu;
label_30fb7c:
    // 0x30fb7c: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x30fb7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fb80: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fb84: 0x2405fed8  addiu       $a1, $zero, -0x128
    ctx->pc = 0x30fb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967000));
    // 0x30fb88: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x30fb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30fb8c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x30fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x30fb90: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30fb90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30fb94: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x30fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x30fb98: 0x3c02416f  lui         $v0, 0x416F
    ctx->pc = 0x30fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16751 << 16));
    // 0x30fb9c: 0xa5250014  sh          $a1, 0x14($t1)
    ctx->pc = 0x30fb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x30fba0: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x30fba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x30fba4: 0xa5260016  sh          $a2, 0x16($t1)
    ctx->pc = 0x30fba4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 22), (uint16_t)GPR_U32(ctx, 6));
    // 0x30fba8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fbac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30fbb0: 0xad230018  sw          $v1, 0x18($t1)
    ctx->pc = 0x30fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 3));
    // 0x30fbb4: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x30fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x30fbb8: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x30fbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
    // 0x30fbbc: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x30fbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30fbc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30fbc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fbc4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FBC4u;
    SET_GPR_U32(ctx, 31, 0x30FBCCu);
    ctx->pc = 0x30FBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FBC4u;
            // 0x30fbc8: 0xa12000b8  sb          $zero, 0xB8($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 184), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FBCCu; }
        if (ctx->pc != 0x30FBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FBCCu; }
        if (ctx->pc != 0x30FBCCu) { return; }
    }
    ctx->pc = 0x30FBCCu;
label_30fbcc:
    // 0x30fbcc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fbd0: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fbd4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fbd8: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x30fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x30fbdc: 0x24a536c0  addiu       $a1, $a1, 0x36C0
    ctx->pc = 0x30fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14016));
    // 0x30fbe0: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x30fbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x30fbe4: 0x240700bc  addiu       $a3, $zero, 0xBC
    ctx->pc = 0x30fbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x30fbe8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30fbe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fbec: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FBECu;
    SET_GPR_U32(ctx, 31, 0x30FBF4u);
    ctx->pc = 0x30FBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FBECu;
            // 0x30fbf0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FBF4u; }
        if (ctx->pc != 0x30FBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FBF4u; }
        if (ctx->pc != 0x30FBF4u) { return; }
    }
    ctx->pc = 0x30FBF4u;
label_30fbf4:
    // 0x30fbf4: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x30fbf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fbf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30fbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fbfc: 0x3c03416f  lui         $v1, 0x416F
    ctx->pc = 0x30fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16751 << 16));
    // 0x30fc00: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x30fc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x30fc04: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x30fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30fc08: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x30fc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x30fc0c: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x30fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x30fc10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30fc14: 0xa5040014  sh          $a0, 0x14($t0)
    ctx->pc = 0x30fc14u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x30fc18: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x30fc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30fc1c: 0xa5050016  sh          $a1, 0x16($t0)
    ctx->pc = 0x30fc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 22), (uint16_t)GPR_U32(ctx, 5));
    // 0x30fc20: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fc24: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x30fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x30fc28: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fc28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fc2c: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x30fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x30fc30: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x30fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x30fc34: 0xa10000b8  sb          $zero, 0xB8($t0)
    ctx->pc = 0x30fc34u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 184), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fc38: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x30fc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
    // 0x30fc3c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30fc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30fc40: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FC40u;
    SET_GPR_U32(ctx, 31, 0x30FC48u);
    ctx->pc = 0x30FC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FC40u;
            // 0x30fc44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FC48u; }
        if (ctx->pc != 0x30FC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FC48u; }
        if (ctx->pc != 0x30FC48u) { return; }
    }
    ctx->pc = 0x30FC48u;
label_30fc48:
    // 0x30fc48: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x30fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fc4c: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fc50: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fc54: 0x248405b0  addiu       $a0, $a0, 0x5B0
    ctx->pc = 0x30fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    // 0x30fc58: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x30fc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
    // 0x30fc5c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x30fc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x30fc60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fc64: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x30fc64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30fc68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x30fc6c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FC6Cu;
    SET_GPR_U32(ctx, 31, 0x30FC74u);
    ctx->pc = 0x30FC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FC6Cu;
            // 0x30fc70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FC74u; }
        if (ctx->pc != 0x30FC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FC74u; }
        if (ctx->pc != 0x30FC74u) { return; }
    }
    ctx->pc = 0x30FC74u;
label_30fc74:
    // 0x30fc74: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x30fc74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fc78: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x30fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30fc7c: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fc80: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fc80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fc84: 0x248405b0  addiu       $a0, $a0, 0x5B0
    ctx->pc = 0x30fc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    // 0x30fc88: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x30fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
    // 0x30fc8c: 0xa1230005  sb          $v1, 0x5($t1)
    ctx->pc = 0x30fc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fc90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fc94: 0xa1230006  sb          $v1, 0x6($t1)
    ctx->pc = 0x30fc94u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fc98: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x30fc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x30fc9c: 0xa1230007  sb          $v1, 0x7($t1)
    ctx->pc = 0x30fc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fca0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x30fca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30fca4: 0xa1230008  sb          $v1, 0x8($t1)
    ctx->pc = 0x30fca4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30fca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fcac: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x30fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x30fcb0: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x30fcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fcb4: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x30fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
    // 0x30fcb8: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x30fcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fcbc: 0xa1220002  sb          $v0, 0x2($t1)
    ctx->pc = 0x30fcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x30fcc0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FCC0u;
    SET_GPR_U32(ctx, 31, 0x30FCC8u);
    ctx->pc = 0x30FCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FCC0u;
            // 0x30fcc4: 0xa1200003  sb          $zero, 0x3($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCC8u; }
        if (ctx->pc != 0x30FCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FCC8u; }
        if (ctx->pc != 0x30FCC8u) { return; }
    }
    ctx->pc = 0x30FCC8u;
label_30fcc8:
    // 0x30fcc8: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x30fcc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fccc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x30fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30fcd0: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fcd4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fcd8: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x30fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x30fcdc: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x30fcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
    // 0x30fce0: 0xa1230005  sb          $v1, 0x5($t1)
    ctx->pc = 0x30fce0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fce8: 0xa1230006  sb          $v1, 0x6($t1)
    ctx->pc = 0x30fce8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fcec: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x30fcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30fcf0: 0xa1230007  sb          $v1, 0x7($t1)
    ctx->pc = 0x30fcf0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fcf4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30fcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30fcf8: 0xa1230008  sb          $v1, 0x8($t1)
    ctx->pc = 0x30fcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fcfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30fcfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd00: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x30fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x30fd04: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x30fd04u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30fd08: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x30fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
    // 0x30fd0c: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x30fd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fd10: 0xa1220002  sb          $v0, 0x2($t1)
    ctx->pc = 0x30fd10u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x30fd14: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FD14u;
    SET_GPR_U32(ctx, 31, 0x30FD1Cu);
    ctx->pc = 0x30FD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD14u;
            // 0x30fd18: 0xa1200003  sb          $zero, 0x3($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD1Cu; }
        if (ctx->pc != 0x30FD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD1Cu; }
        if (ctx->pc != 0x30FD1Cu) { return; }
    }
    ctx->pc = 0x30FD1Cu;
label_30fd1c:
    // 0x30fd1c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fd20: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fd24: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fd24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fd28: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x30fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x30fd2c: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x30fd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
    // 0x30fd30: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x30fd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30fd34: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30fd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30fd38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30fd38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd3c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FD3Cu;
    SET_GPR_U32(ctx, 31, 0x30FD44u);
    ctx->pc = 0x30FD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD3Cu;
            // 0x30fd40: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD44u; }
        if (ctx->pc != 0x30FD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD44u; }
        if (ctx->pc != 0x30FD44u) { return; }
    }
    ctx->pc = 0x30FD44u;
label_30fd44:
    // 0x30fd44: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fd48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fd4c: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fd50: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fd54: 0x248417c0  addiu       $a0, $a0, 0x17C0
    ctx->pc = 0x30fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6080));
    // 0x30fd58: 0x24a536d0  addiu       $a1, $a1, 0x36D0
    ctx->pc = 0x30fd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14032));
    // 0x30fd5c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x30fd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x30fd60: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x30fd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30fd64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x30fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x30fd68: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FD68u;
    SET_GPR_U32(ctx, 31, 0x30FD70u);
    ctx->pc = 0x30FD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD68u;
            // 0x30fd6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD70u; }
        if (ctx->pc != 0x30FD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD70u; }
        if (ctx->pc != 0x30FD70u) { return; }
    }
    ctx->pc = 0x30FD70u;
label_30fd70:
    // 0x30fd70: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fd74: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x30fd74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fd78: 0xc053460  jal         func_14D180
    ctx->pc = 0x30FD78u;
    SET_GPR_U32(ctx, 31, 0x30FD80u);
    ctx->pc = 0x30FD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD78u;
            // 0x30fd7c: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D180u;
    if (runtime->hasFunction(0x14D180u)) {
        auto targetFn = runtime->lookupFunction(0x14D180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD80u; }
        if (ctx->pc != 0x30FD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D180_0x14d180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FD80u; }
        if (ctx->pc != 0x30FD80u) { return; }
    }
    ctx->pc = 0x30FD80u;
label_30fd80:
    // 0x30fd80: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fd84: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fd84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fd88: 0x24842710  addiu       $a0, $a0, 0x2710
    ctx->pc = 0x30fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10000));
    // 0x30fd8c: 0x24a536d8  addiu       $a1, $a1, 0x36D8
    ctx->pc = 0x30fd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14040));
    // 0x30fd90: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x30fd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x30fd94: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x30fd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30fd98: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FD98u;
    SET_GPR_U32(ctx, 31, 0x30FDA0u);
    ctx->pc = 0x30FD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FD98u;
            // 0x30fd9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDA0u; }
        if (ctx->pc != 0x30FDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDA0u; }
        if (ctx->pc != 0x30FDA0u) { return; }
    }
    ctx->pc = 0x30FDA0u;
label_30fda0:
    // 0x30fda0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x30fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fda4: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fda8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fdac: 0x24842710  addiu       $a0, $a0, 0x2710
    ctx->pc = 0x30fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10000));
    // 0x30fdb0: 0x24a536d8  addiu       $a1, $a1, 0x36D8
    ctx->pc = 0x30fdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14040));
    // 0x30fdb4: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x30fdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x30fdb8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x30fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30fdbc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x30fdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fdc0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x30fdc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30fdc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30fdc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdc8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FDC8u;
    SET_GPR_U32(ctx, 31, 0x30FDD0u);
    ctx->pc = 0x30FDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FDC8u;
            // 0x30fdcc: 0xa0620001  sb          $v0, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDD0u; }
        if (ctx->pc != 0x30FDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FDD0u; }
        if (ctx->pc != 0x30FDD0u) { return; }
    }
    ctx->pc = 0x30FDD0u;
label_30fdd0:
    // 0x30fdd0: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x30fdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fdd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fdd8: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fddc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fde0: 0x248418c0  addiu       $a0, $a0, 0x18C0
    ctx->pc = 0x30fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6336));
    // 0x30fde4: 0x24a536e8  addiu       $a1, $a1, 0x36E8
    ctx->pc = 0x30fde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
    // 0x30fde8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x30fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30fdec: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x30fdecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fdf0: 0xa1020001  sb          $v0, 0x1($t0)
    ctx->pc = 0x30fdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30fdf4: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x30fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x30fdf8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x30fdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30fdfc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FDFCu;
    SET_GPR_U32(ctx, 31, 0x30FE04u);
    ctx->pc = 0x30FE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FDFCu;
            // 0x30fe00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE04u; }
        if (ctx->pc != 0x30FE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE04u; }
        if (ctx->pc != 0x30FE04u) { return; }
    }
    ctx->pc = 0x30FE04u;
label_30fe04:
    // 0x30fe04: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fe08: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fe0c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fe10: 0x248418c0  addiu       $a0, $a0, 0x18C0
    ctx->pc = 0x30fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6336));
    // 0x30fe14: 0x24a536f8  addiu       $a1, $a1, 0x36F8
    ctx->pc = 0x30fe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14072));
    // 0x30fe18: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x30fe18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x30fe1c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x30fe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fe20: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x30fe20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30fe24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30fe24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe28: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FE28u;
    SET_GPR_U32(ctx, 31, 0x30FE30u);
    ctx->pc = 0x30FE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE28u;
            // 0x30fe2c: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE30u; }
        if (ctx->pc != 0x30FE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE30u; }
        if (ctx->pc != 0x30FE30u) { return; }
    }
    ctx->pc = 0x30FE30u;
label_30fe30:
    // 0x30fe30: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x30fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fe34: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fe38: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fe3c: 0x24842da0  addiu       $a0, $a0, 0x2DA0
    ctx->pc = 0x30fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11680));
    // 0x30fe40: 0x24a53708  addiu       $a1, $a1, 0x3708
    ctx->pc = 0x30fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14088));
    // 0x30fe44: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x30fe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30fe48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fe4c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30fe4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30fe50: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x30fe50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30fe54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30fe54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe58: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FE58u;
    SET_GPR_U32(ctx, 31, 0x30FE60u);
    ctx->pc = 0x30FE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE58u;
            // 0x30fe5c: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE60u; }
        if (ctx->pc != 0x30FE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE60u; }
        if (ctx->pc != 0x30FE60u) { return; }
    }
    ctx->pc = 0x30FE60u;
label_30fe60:
    // 0x30fe60: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fe64: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fe68: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fe6c: 0x24842da0  addiu       $a0, $a0, 0x2DA0
    ctx->pc = 0x30fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11680));
    // 0x30fe70: 0x24a53710  addiu       $a1, $a1, 0x3710
    ctx->pc = 0x30fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14096));
    // 0x30fe74: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x30fe74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30fe78: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30fe78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30fe7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30fe7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe80: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FE80u;
    SET_GPR_U32(ctx, 31, 0x30FE88u);
    ctx->pc = 0x30FE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE80u;
            // 0x30fe84: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE88u; }
        if (ctx->pc != 0x30FE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FE88u; }
        if (ctx->pc != 0x30FE88u) { return; }
    }
    ctx->pc = 0x30FE88u;
label_30fe88:
    // 0x30fe88: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30fe8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fe90: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30fe94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30fe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe98: 0x2484ff20  addiu       $a0, $a0, -0xE0
    ctx->pc = 0x30fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
    // 0x30fe9c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x30FE9Cu;
    SET_GPR_U32(ctx, 31, 0x30FEA4u);
    ctx->pc = 0x30FEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FE9Cu;
            // 0x30fea0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEA4u; }
        if (ctx->pc != 0x30FEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEA4u; }
        if (ctx->pc != 0x30FEA4u) { return; }
    }
    ctx->pc = 0x30FEA4u;
label_30fea4:
    // 0x30fea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30fea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30fea8:
    // 0x30fea8: 0xc05f6c0  jal         func_17DB00
    ctx->pc = 0x30FEA8u;
    SET_GPR_U32(ctx, 31, 0x30FEB0u);
    ctx->pc = 0x17DB00u;
    if (runtime->hasFunction(0x17DB00u)) {
        auto targetFn = runtime->lookupFunction(0x17DB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEB0u; }
        if (ctx->pc != 0x30FEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DB00_0x17db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEB0u; }
        if (ctx->pc != 0x30FEB0u) { return; }
    }
    ctx->pc = 0x30FEB0u;
label_30feb0:
    // 0x30feb0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x30feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x30feb4: 0x90634820  lbu         $v1, 0x4820($v1)
    ctx->pc = 0x30feb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18464)));
    // 0x30feb8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30feb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30febc: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x30FEBCu;
    {
        const bool branch_taken_0x30febc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30febc) {
            ctx->pc = 0x30FEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30FEBCu;
            // 0x30fec0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FF0Cu;
            goto label_30ff0c;
        }
    }
    ctx->pc = 0x30FEC4u;
    // 0x30fec4: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x30fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x30fec8: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x30fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x30fecc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30feccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30fed0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FED0u;
    {
        const bool branch_taken_0x30fed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fed0) {
            ctx->pc = 0x30FEE0u;
            goto label_30fee0;
        }
    }
    ctx->pc = 0x30FED8u;
    // 0x30fed8: 0xc0c4424  jal         func_311090
    ctx->pc = 0x30FED8u;
    SET_GPR_U32(ctx, 31, 0x30FEE0u);
    ctx->pc = 0x30FEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FED8u;
            // 0x30fedc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311090u;
    if (runtime->hasFunction(0x311090u)) {
        auto targetFn = runtime->lookupFunction(0x311090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEE0u; }
        if (ctx->pc != 0x30FEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311090_0x311090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FEE0u; }
        if (ctx->pc != 0x30FEE0u) { return; }
    }
    ctx->pc = 0x30FEE0u;
label_30fee0:
    // 0x30fee0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x30fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x30fee4: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x30fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x30fee8: 0x8c66d918  lw          $a2, -0x26E8($v1)
    ctx->pc = 0x30fee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x30feec: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x30feecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x30fef0: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x30fef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x30fef4: 0x90654820  lbu         $a1, 0x4820($v1)
    ctx->pc = 0x30fef4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18464)));
    // 0x30fef8: 0xac86d918  sw          $a2, -0x26E8($a0)
    ctx->pc = 0x30fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294957336), GPR_U32(ctx, 6));
    // 0x30fefc: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x30fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x30ff00: 0x34a40002  ori         $a0, $a1, 0x2
    ctx->pc = 0x30ff00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x30ff04: 0xa0644820  sb          $a0, 0x4820($v1)
    ctx->pc = 0x30ff04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18464), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ff08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ff08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30ff0c:
    // 0x30ff0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ff0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ff10: 0x3e00008  jr          $ra
    ctx->pc = 0x30FF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF10u;
            // 0x30ff14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FF18u;
    // 0x30ff18: 0x0  nop
    ctx->pc = 0x30ff18u;
    // NOP
    // 0x30ff1c: 0x0  nop
    ctx->pc = 0x30ff1cu;
    // NOP
label_30ff20:
    // 0x30ff20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30ff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30ff24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30ff28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30ff2c: 0xc0ceb8c  jal         func_33AE30
    ctx->pc = 0x30FF2Cu;
    SET_GPR_U32(ctx, 31, 0x30FF34u);
    ctx->pc = 0x30FF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF2Cu;
            // 0x30ff30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33AE30u;
    if (runtime->hasFunction(0x33AE30u)) {
        auto targetFn = runtime->lookupFunction(0x33AE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF34u; }
        if (ctx->pc != 0x30FF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033AE30_0x33ae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF34u; }
        if (ctx->pc != 0x30FF34u) { return; }
    }
    ctx->pc = 0x30FF34u;
label_30ff34:
    // 0x30ff34: 0xc0c44bc  jal         func_3112F0
    ctx->pc = 0x30FF34u;
    SET_GPR_U32(ctx, 31, 0x30FF3Cu);
    ctx->pc = 0x3112F0u;
    if (runtime->hasFunction(0x3112F0u)) {
        auto targetFn = runtime->lookupFunction(0x3112F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF3Cu; }
        if (ctx->pc != 0x30FF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003112F0_0x3112f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF3Cu; }
        if (ctx->pc != 0x30FF3Cu) { return; }
    }
    ctx->pc = 0x30FF3Cu;
label_30ff3c:
    // 0x30ff3c: 0xc04be58  jal         func_12F960
    ctx->pc = 0x30FF3Cu;
    SET_GPR_U32(ctx, 31, 0x30FF44u);
    ctx->pc = 0x12F960u;
    if (runtime->hasFunction(0x12F960u)) {
        auto targetFn = runtime->lookupFunction(0x12F960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF44u; }
        if (ctx->pc != 0x30FF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F960_0x12f960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF44u; }
        if (ctx->pc != 0x30FF44u) { return; }
    }
    ctx->pc = 0x30FF44u;
label_30ff44:
    // 0x30ff44: 0xc05f6c0  jal         func_17DB00
    ctx->pc = 0x30FF44u;
    SET_GPR_U32(ctx, 31, 0x30FF4Cu);
    ctx->pc = 0x30FF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF44u;
            // 0x30ff48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB00u;
    if (runtime->hasFunction(0x17DB00u)) {
        auto targetFn = runtime->lookupFunction(0x17DB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF4Cu; }
        if (ctx->pc != 0x30FF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DB00_0x17db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF4Cu; }
        if (ctx->pc != 0x30FF4Cu) { return; }
    }
    ctx->pc = 0x30FF4Cu;
label_30ff4c:
    // 0x30ff4c: 0xc0d4ca8  jal         func_3532A0
    ctx->pc = 0x30FF4Cu;
    SET_GPR_U32(ctx, 31, 0x30FF54u);
    ctx->pc = 0x3532A0u;
    if (runtime->hasFunction(0x3532A0u)) {
        auto targetFn = runtime->lookupFunction(0x3532A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF54u; }
        if (ctx->pc != 0x30FF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003532A0_0x3532a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FF54u; }
        if (ctx->pc != 0x30FF54u) { return; }
    }
    ctx->pc = 0x30FF54u;
label_30ff54:
    // 0x30ff54: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x30ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x30ff58: 0x8c64d918  lw          $a0, -0x26E8($v1)
    ctx->pc = 0x30ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x30ff5c: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x30ff5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x30ff60: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FF60u;
    {
        const bool branch_taken_0x30ff60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff60) {
            ctx->pc = 0x30FF64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF60u;
            // 0x30ff64: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FF78u;
            goto label_30ff78;
        }
    }
    ctx->pc = 0x30FF68u;
    // 0x30ff68: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x30ff68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x30ff6c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x30ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x30ff70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30FF70u;
    {
        const bool branch_taken_0x30ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF70u;
            // 0x30ff74: 0xac64d918  sw          $a0, -0x26E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff70) {
            ctx->pc = 0x30FFA0u;
            goto label_30ffa0;
        }
    }
    ctx->pc = 0x30FF78u;
label_30ff78:
    // 0x30ff78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30ff78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30ff7c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30FF7Cu;
    {
        const bool branch_taken_0x30ff7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff7c) {
            ctx->pc = 0x30FFA0u;
            goto label_30ffa0;
        }
    }
    ctx->pc = 0x30FF84u;
    // 0x30ff84: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x30ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x30ff88: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x30ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x30ff8c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30ff8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30ff90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ff90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ff94: 0x24040127  addiu       $a0, $zero, 0x127
    ctx->pc = 0x30ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x30ff98: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x30FF98u;
    SET_GPR_U32(ctx, 31, 0x30FFA0u);
    ctx->pc = 0x30FF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FF98u;
            // 0x30ff9c: 0xac43d918  sw          $v1, -0x26E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FFA0u; }
        if (ctx->pc != 0x30FFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FFA0u; }
        if (ctx->pc != 0x30FFA0u) { return; }
    }
    ctx->pc = 0x30FFA0u;
label_30ffa0:
    // 0x30ffa0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x30ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x30ffa4: 0x8c64d918  lw          $a0, -0x26E8($v1)
    ctx->pc = 0x30ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x30ffa8: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x30ffa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x30ffac: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x30FFACu;
    {
        const bool branch_taken_0x30ffac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ffac) {
            ctx->pc = 0x30FFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30FFACu;
            // 0x30ffb0: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30FFE0u;
            goto label_30ffe0;
        }
    }
    ctx->pc = 0x30FFB4u;
    // 0x30ffb4: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30ffb8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30ffbc: 0x24841dd0  addiu       $a0, $a0, 0x1DD0
    ctx->pc = 0x30ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7632));
    // 0x30ffc0: 0x24a53718  addiu       $a1, $a1, 0x3718
    ctx->pc = 0x30ffc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14104));
    // 0x30ffc4: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x30ffc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x30ffc8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x30ffc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30ffcc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x30FFCCu;
    SET_GPR_U32(ctx, 31, 0x30FFD4u);
    ctx->pc = 0x30FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30FFCCu;
            // 0x30ffd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FFD4u; }
        if (ctx->pc != 0x30FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30FFD4u; }
        if (ctx->pc != 0x30FFD4u) { return; }
    }
    ctx->pc = 0x30FFD4u;
label_30ffd4:
    // 0x30ffd4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x30ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30ffd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30FFD8u;
    {
        const bool branch_taken_0x30ffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FFD8u;
            // 0x30ffdc: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffd8) {
            ctx->pc = 0x310014u;
            goto label_310014;
        }
    }
    ctx->pc = 0x30FFE0u;
label_30ffe0:
    // 0x30ffe0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30ffe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30ffe4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x30FFE4u;
    {
        const bool branch_taken_0x30ffe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ffe4) {
            ctx->pc = 0x310014u;
            goto label_310014;
        }
    }
    ctx->pc = 0x30FFECu;
    // 0x30ffec: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x30ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x30fff0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30fff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30fff4: 0x24841d00  addiu       $a0, $a0, 0x1D00
    ctx->pc = 0x30fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7424));
    // 0x30fff8: 0x24a53720  addiu       $a1, $a1, 0x3720
    ctx->pc = 0x30fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14112));
    // 0x30fffc: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x30fffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x310000: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x310000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310004: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x310004u;
    SET_GPR_U32(ctx, 31, 0x31000Cu);
    ctx->pc = 0x310008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310004u;
            // 0x310008: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31000Cu; }
        if (ctx->pc != 0x31000Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31000Cu; }
        if (ctx->pc != 0x31000Cu) { return; }
    }
    ctx->pc = 0x31000Cu;
label_31000c:
    // 0x31000c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x31000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x310010: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x310010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_310014:
    // 0x310014: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310018: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x310018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x31001c: 0x9463dab0  lhu         $v1, -0x2550($v1)
    ctx->pc = 0x31001cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x310020: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x310020u;
    {
        const bool branch_taken_0x310020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x310020) {
            ctx->pc = 0x310060u;
            goto label_310060;
        }
    }
    ctx->pc = 0x310028u;
    // 0x310028: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x31002c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31002cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310030: 0x8c84da38  lw          $a0, -0x25C8($a0)
    ctx->pc = 0x310030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957624)));
    // 0x310034: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x310034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x310038: 0x1c800009  bgtz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x310038u;
    {
        const bool branch_taken_0x310038 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x31003Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310038u;
            // 0x31003c: 0xac64da38  sw          $a0, -0x25C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957624), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310038) {
            ctx->pc = 0x310060u;
            goto label_310060;
        }
    }
    ctx->pc = 0x310040u;
    // 0x310040: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x310040u;
    SET_GPR_U32(ctx, 31, 0x310048u);
    ctx->pc = 0x1A0CC0u;
    if (runtime->hasFunction(0x1A0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310048u; }
        if (ctx->pc != 0x310048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CC0_0x1a0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310048u; }
        if (ctx->pc != 0x310048u) { return; }
    }
    ctx->pc = 0x310048u;
label_310048:
    // 0x310048: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x310048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x31004c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31004cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310050: 0xc055768  jal         func_155DA0
    ctx->pc = 0x310050u;
    SET_GPR_U32(ctx, 31, 0x310058u);
    ctx->pc = 0x310054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310050u;
            // 0x310054: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310058u; }
        if (ctx->pc != 0x310058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310058u; }
        if (ctx->pc != 0x310058u) { return; }
    }
    ctx->pc = 0x310058u;
label_310058:
    // 0x310058: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x310058u;
    {
        const bool branch_taken_0x310058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31005Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310058u;
            // 0x31005c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310058) {
            ctx->pc = 0x3101A4u;
            goto label_3101a4;
        }
    }
    ctx->pc = 0x310060u;
label_310060:
    // 0x310060: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x310060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x310064: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x310064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x310068: 0x8c65d918  lw          $a1, -0x26E8($v1)
    ctx->pc = 0x310068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x31006c: 0x34830100  ori         $v1, $a0, 0x100
    ctx->pc = 0x31006cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x310070: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x310070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x310074: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x310074u;
    {
        const bool branch_taken_0x310074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310074) {
            ctx->pc = 0x3101A0u;
            goto label_3101a0;
        }
    }
    ctx->pc = 0x31007Cu;
    // 0x31007c: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x31007Cu;
    SET_GPR_U32(ctx, 31, 0x310084u);
    ctx->pc = 0x1A0CC0u;
    if (runtime->hasFunction(0x1A0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310084u; }
        if (ctx->pc != 0x310084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CC0_0x1a0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310084u; }
        if (ctx->pc != 0x310084u) { return; }
    }
    ctx->pc = 0x310084u;
label_310084:
    // 0x310084: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x310084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310088: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31008c: 0xc0c4534  jal         func_3114D0
    ctx->pc = 0x31008Cu;
    SET_GPR_U32(ctx, 31, 0x310094u);
    ctx->pc = 0x310090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31008Cu;
            // 0x310090: 0xa043da50  sb          $v1, -0x25B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3114D0u;
    if (runtime->hasFunction(0x3114D0u)) {
        auto targetFn = runtime->lookupFunction(0x3114D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310094u; }
        if (ctx->pc != 0x310094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003114D0_0x3114d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310094u; }
        if (ctx->pc != 0x310094u) { return; }
    }
    ctx->pc = 0x310094u;
label_310094:
    // 0x310094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x310094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310098: 0x1045001d  beq         $v0, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x310098u;
    {
        const bool branch_taken_0x310098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x310098) {
            ctx->pc = 0x310110u;
            goto label_310110;
        }
    }
    ctx->pc = 0x3100A0u;
    // 0x3100a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3100A0u;
    {
        const bool branch_taken_0x3100a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3100a0) {
            ctx->pc = 0x3100B0u;
            goto label_3100b0;
        }
    }
    ctx->pc = 0x3100A8u;
    // 0x3100a8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3100A8u;
    {
        const bool branch_taken_0x3100a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3100A8u;
            // 0x3100ac: 0x3c03009c  lui         $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100a8) {
            ctx->pc = 0x31016Cu;
            goto label_31016c;
        }
    }
    ctx->pc = 0x3100B0u;
label_3100b0:
    // 0x3100b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3100b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3100b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3100b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3100b8: 0xa040dd9e  sb          $zero, -0x2262($v0)
    ctx->pc = 0x3100b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958494), (uint8_t)GPR_U32(ctx, 0));
    // 0x3100bc: 0xa065db56  sb          $a1, -0x24AA($v1)
    ctx->pc = 0x3100bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957910), (uint8_t)GPR_U32(ctx, 5));
    // 0x3100c0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3100c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3100c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3100c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3100c8: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x3100c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x3100cc: 0xa060da50  sb          $zero, -0x25B0($v1)
    ctx->pc = 0x3100ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957648), (uint8_t)GPR_U32(ctx, 0));
    // 0x3100d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3100d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3100d4: 0x1043002b  beq         $v0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3100D4u;
    {
        const bool branch_taken_0x3100d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3100d4) {
            ctx->pc = 0x310184u;
            goto label_310184;
        }
    }
    ctx->pc = 0x3100DCu;
    // 0x3100dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3100dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3100e0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3100e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3100e4: 0x9042db53  lbu         $v0, -0x24AD($v0)
    ctx->pc = 0x3100e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957907)));
    // 0x3100e8: 0xa0655d20  sb          $a1, 0x5D20($v1)
    ctx->pc = 0x3100e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23840), (uint8_t)GPR_U32(ctx, 5));
    // 0x3100ec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3100ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3100f0: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x3100f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x3100f4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3100f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3100f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3100f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3100fc: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3100fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310100: 0xc052e28  jal         func_14B8A0
    ctx->pc = 0x310100u;
    SET_GPR_U32(ctx, 31, 0x310108u);
    ctx->pc = 0x310104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310100u;
            // 0x310104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B8A0u;
    if (runtime->hasFunction(0x14B8A0u)) {
        auto targetFn = runtime->lookupFunction(0x14B8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310108u; }
        if (ctx->pc != 0x310108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B8A0_0x14b8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310108u; }
        if (ctx->pc != 0x310108u) { return; }
    }
    ctx->pc = 0x310108u;
label_310108:
    // 0x310108: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x310108u;
    {
        const bool branch_taken_0x310108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310108) {
            ctx->pc = 0x310184u;
            goto label_310184;
        }
    }
    ctx->pc = 0x310110u;
label_310110:
    // 0x310110: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310114: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310118: 0xa045dd9e  sb          $a1, -0x2262($v0)
    ctx->pc = 0x310118u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958494), (uint8_t)GPR_U32(ctx, 5));
    // 0x31011c: 0xa060db56  sb          $zero, -0x24AA($v1)
    ctx->pc = 0x31011cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957910), (uint8_t)GPR_U32(ctx, 0));
    // 0x310120: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x310120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x310124: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310128: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x310128u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x31012c: 0xa065da50  sb          $a1, -0x25B0($v1)
    ctx->pc = 0x31012cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957648), (uint8_t)GPR_U32(ctx, 5));
    // 0x310130: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x310130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x310134: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x310134u;
    {
        const bool branch_taken_0x310134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x310134) {
            ctx->pc = 0x310184u;
            goto label_310184;
        }
    }
    ctx->pc = 0x31013Cu;
    // 0x31013c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310140: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x310140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x310144: 0x9042dd9b  lbu         $v0, -0x2265($v0)
    ctx->pc = 0x310144u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958491)));
    // 0x310148: 0xa0655d20  sb          $a1, 0x5D20($v1)
    ctx->pc = 0x310148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23840), (uint8_t)GPR_U32(ctx, 5));
    // 0x31014c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31014cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310150: 0x2463dee5  addiu       $v1, $v1, -0x211B
    ctx->pc = 0x310150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958821));
    // 0x310154: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x310154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x310158: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x310158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31015c: 0xc052e28  jal         func_14B8A0
    ctx->pc = 0x31015Cu;
    SET_GPR_U32(ctx, 31, 0x310164u);
    ctx->pc = 0x310160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31015Cu;
            // 0x310160: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B8A0u;
    if (runtime->hasFunction(0x14B8A0u)) {
        auto targetFn = runtime->lookupFunction(0x14B8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310164u; }
        if (ctx->pc != 0x310164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B8A0_0x14b8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310164u; }
        if (ctx->pc != 0x310164u) { return; }
    }
    ctx->pc = 0x310164u;
label_310164:
    // 0x310164: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x310164u;
    {
        const bool branch_taken_0x310164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310164) {
            ctx->pc = 0x310184u;
            goto label_310184;
        }
    }
    ctx->pc = 0x31016Cu;
label_31016c:
    // 0x31016c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310170: 0xa060db56  sb          $zero, -0x24AA($v1)
    ctx->pc = 0x310170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957910), (uint8_t)GPR_U32(ctx, 0));
    // 0x310174: 0xa040dd9e  sb          $zero, -0x2262($v0)
    ctx->pc = 0x310174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958494), (uint8_t)GPR_U32(ctx, 0));
    // 0x310178: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x310178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31017c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31017cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310180: 0xa043da50  sb          $v1, -0x25B0($v0)
    ctx->pc = 0x310180u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 3));
label_310184:
    // 0x310184: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x310184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x310188: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x310188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x31018c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31018cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310190: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x310190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310194: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x310194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x310198: 0xc055768  jal         func_155DA0
    ctx->pc = 0x310198u;
    SET_GPR_U32(ctx, 31, 0x3101A0u);
    ctx->pc = 0x31019Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310198u;
            // 0x31019c: 0xac43da40  sw          $v1, -0x25C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101A0u; }
        if (ctx->pc != 0x3101A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101A0u; }
        if (ctx->pc != 0x3101A0u) { return; }
    }
    ctx->pc = 0x3101A0u;
label_3101a0:
    // 0x3101a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3101a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3101a4:
    // 0x3101a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3101a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3101a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3101A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3101ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3101A8u;
            // 0x3101ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3101B0u;
label_3101b0:
    // 0x3101b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3101b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3101b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3101b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3101b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3101b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3101bc: 0xc0c44bc  jal         func_3112F0
    ctx->pc = 0x3101BCu;
    SET_GPR_U32(ctx, 31, 0x3101C4u);
    ctx->pc = 0x3101C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3101BCu;
            // 0x3101c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3112F0u;
    if (runtime->hasFunction(0x3112F0u)) {
        auto targetFn = runtime->lookupFunction(0x3112F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101C4u; }
        if (ctx->pc != 0x3101C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003112F0_0x3112f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101C4u; }
        if (ctx->pc != 0x3101C4u) { return; }
    }
    ctx->pc = 0x3101C4u;
label_3101c4:
    // 0x3101c4: 0xc04be58  jal         func_12F960
    ctx->pc = 0x3101C4u;
    SET_GPR_U32(ctx, 31, 0x3101CCu);
    ctx->pc = 0x12F960u;
    if (runtime->hasFunction(0x12F960u)) {
        auto targetFn = runtime->lookupFunction(0x12F960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101CCu; }
        if (ctx->pc != 0x3101CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F960_0x12f960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101CCu; }
        if (ctx->pc != 0x3101CCu) { return; }
    }
    ctx->pc = 0x3101CCu;
label_3101cc:
    // 0x3101cc: 0xc05f6c0  jal         func_17DB00
    ctx->pc = 0x3101CCu;
    SET_GPR_U32(ctx, 31, 0x3101D4u);
    ctx->pc = 0x3101D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3101CCu;
            // 0x3101d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB00u;
    if (runtime->hasFunction(0x17DB00u)) {
        auto targetFn = runtime->lookupFunction(0x17DB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101D4u; }
        if (ctx->pc != 0x3101D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DB00_0x17db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3101D4u; }
        if (ctx->pc != 0x3101D4u) { return; }
    }
    ctx->pc = 0x3101D4u;
label_3101d4:
    // 0x3101d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3101d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3101d8: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x3101d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x3101dc: 0x9463dab0  lhu         $v1, -0x2550($v1)
    ctx->pc = 0x3101dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x3101e0: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3101E0u;
    {
        const bool branch_taken_0x3101e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3101e0) {
            ctx->pc = 0x310218u;
            goto label_310218;
        }
    }
    ctx->pc = 0x3101E8u;
    // 0x3101e8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3101e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3101ec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3101ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3101f0: 0x8c84da38  lw          $a0, -0x25C8($a0)
    ctx->pc = 0x3101f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957624)));
    // 0x3101f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3101f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3101f8: 0x1c800007  bgtz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3101F8u;
    {
        const bool branch_taken_0x3101f8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x3101FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3101F8u;
            // 0x3101fc: 0xac64da38  sw          $a0, -0x25C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957624), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101f8) {
            ctx->pc = 0x310218u;
            goto label_310218;
        }
    }
    ctx->pc = 0x310200u;
    // 0x310200: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x310200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x310204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x310204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310208: 0xc055768  jal         func_155DA0
    ctx->pc = 0x310208u;
    SET_GPR_U32(ctx, 31, 0x310210u);
    ctx->pc = 0x31020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310208u;
            // 0x31020c: 0x248403e0  addiu       $a0, $a0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310210u; }
        if (ctx->pc != 0x310210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310210u; }
        if (ctx->pc != 0x310210u) { return; }
    }
    ctx->pc = 0x310210u;
label_310210:
    // 0x310210: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x310210u;
    {
        const bool branch_taken_0x310210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310210u;
            // 0x310214: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310210) {
            ctx->pc = 0x3103D0u;
            goto label_3103d0;
        }
    }
    ctx->pc = 0x310218u;
label_310218:
    // 0x310218: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x310218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x31021c: 0x8c64d918  lw          $a0, -0x26E8($v1)
    ctx->pc = 0x31021cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x310220: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x310220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x310224: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x310224u;
    {
        const bool branch_taken_0x310224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310224) {
            ctx->pc = 0x310380u;
            goto label_310380;
        }
    }
    ctx->pc = 0x31022Cu;
    // 0x31022c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x31022cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x310230: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x310230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x310234: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x310234u;
    {
        const bool branch_taken_0x310234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310234) {
            ctx->pc = 0x31027Cu;
            goto label_31027c;
        }
    }
    ctx->pc = 0x31023Cu;
    // 0x31023c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31023cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310240: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x310240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x310244: 0x9066db53  lbu         $a2, -0x24AD($v1)
    ctx->pc = 0x310244u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957907)));
    // 0x310248: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x31024c: 0x24a5dcb4  addiu       $a1, $a1, -0x234C
    ctx->pc = 0x31024cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958260));
    // 0x310250: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x310250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x310254: 0x2484defc  addiu       $a0, $a0, -0x2104
    ctx->pc = 0x310254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958844));
    // 0x310258: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x310258u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x31025c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31025cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310260: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x310260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x310264: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x310264u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x310268: 0x9063dd9b  lbu         $v1, -0x2265($v1)
    ctx->pc = 0x310268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958491)));
    // 0x31026c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x31026cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x310270: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x310270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x310274: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x310274u;
    {
        const bool branch_taken_0x310274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310274u;
            // 0x310278: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310274) {
            ctx->pc = 0x310380u;
            goto label_310380;
        }
    }
    ctx->pc = 0x31027Cu;
label_31027c:
    // 0x31027c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310280: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x310280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310284: 0x9065da50  lbu         $a1, -0x25B0($v1)
    ctx->pc = 0x310284u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957648)));
    // 0x310288: 0x10a4002e  beq         $a1, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x310288u;
    {
        const bool branch_taken_0x310288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x310288) {
            ctx->pc = 0x310344u;
            goto label_310344;
        }
    }
    ctx->pc = 0x310290u;
    // 0x310290: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x310290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310294: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x310294u;
    {
        const bool branch_taken_0x310294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x310294) {
            ctx->pc = 0x310344u;
            goto label_310344;
        }
    }
    ctx->pc = 0x31029Cu;
    // 0x31029c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3102a0: 0x10a40016  beq         $a1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3102A0u;
    {
        const bool branch_taken_0x3102a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3102a0) {
            ctx->pc = 0x3102FCu;
            goto label_3102fc;
        }
    }
    ctx->pc = 0x3102A8u;
    // 0x3102a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3102A8u;
    {
        const bool branch_taken_0x3102a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3102a8) {
            ctx->pc = 0x3102B8u;
            goto label_3102b8;
        }
    }
    ctx->pc = 0x3102B0u;
    // 0x3102b0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3102B0u;
    {
        const bool branch_taken_0x3102b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3102b0) {
            ctx->pc = 0x310344u;
            goto label_310344;
        }
    }
    ctx->pc = 0x3102B8u;
label_3102b8:
    // 0x3102b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3102b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3102bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3102bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3102c0: 0x9042db53  lbu         $v0, -0x24AD($v0)
    ctx->pc = 0x3102c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957907)));
    // 0x3102c4: 0x2463dcb4  addiu       $v1, $v1, -0x234C
    ctx->pc = 0x3102c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958260));
    // 0x3102c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3102c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3102cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3102ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3102d0: 0xc062810  jal         func_18A040
    ctx->pc = 0x3102D0u;
    SET_GPR_U32(ctx, 31, 0x3102D8u);
    ctx->pc = 0x3102D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3102D0u;
            // 0x3102d4: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3102D8u; }
        if (ctx->pc != 0x3102D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3102D8u; }
        if (ctx->pc != 0x3102D8u) { return; }
    }
    ctx->pc = 0x3102D8u;
label_3102d8:
    // 0x3102d8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3102D8u;
    {
        const bool branch_taken_0x3102d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3102d8) {
            ctx->pc = 0x310380u;
            goto label_310380;
        }
    }
    ctx->pc = 0x3102E0u;
    // 0x3102e0: 0x9043008c  lbu         $v1, 0x8C($v0)
    ctx->pc = 0x3102e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x3102e4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3102e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3102e8: 0xa043008c  sb          $v1, 0x8C($v0)
    ctx->pc = 0x3102e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x3102ec: 0x9043008c  lbu         $v1, 0x8C($v0)
    ctx->pc = 0x3102ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x3102f0: 0x3463003c  ori         $v1, $v1, 0x3C
    ctx->pc = 0x3102f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60);
    // 0x3102f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3102F4u;
    {
        const bool branch_taken_0x3102f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3102F4u;
            // 0x3102f8: 0xa043008c  sb          $v1, 0x8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102f4) {
            ctx->pc = 0x310380u;
            goto label_310380;
        }
    }
    ctx->pc = 0x3102FCu;
label_3102fc:
    // 0x3102fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3102fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310300: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310304: 0x9042dd9b  lbu         $v0, -0x2265($v0)
    ctx->pc = 0x310304u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958491)));
    // 0x310308: 0x2463defc  addiu       $v1, $v1, -0x2104
    ctx->pc = 0x310308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958844));
    // 0x31030c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x31030cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x310310: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x310310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x310314: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x310314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x310318: 0xc062810  jal         func_18A040
    ctx->pc = 0x310318u;
    SET_GPR_U32(ctx, 31, 0x310320u);
    ctx->pc = 0x31031Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310318u;
            // 0x31031c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (runtime->hasFunction(0x18A040u)) {
        auto targetFn = runtime->lookupFunction(0x18A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310320u; }
        if (ctx->pc != 0x310320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A040_0x18a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310320u; }
        if (ctx->pc != 0x310320u) { return; }
    }
    ctx->pc = 0x310320u;
label_310320:
    // 0x310320: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x310320u;
    {
        const bool branch_taken_0x310320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310320) {
            ctx->pc = 0x310380u;
            goto label_310380;
        }
    }
    ctx->pc = 0x310328u;
    // 0x310328: 0x9043008c  lbu         $v1, 0x8C($v0)
    ctx->pc = 0x310328u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x31032c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x31032cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x310330: 0xa043008c  sb          $v1, 0x8C($v0)
    ctx->pc = 0x310330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x310334: 0x9043008c  lbu         $v1, 0x8C($v0)
    ctx->pc = 0x310334u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x310338: 0x3463003c  ori         $v1, $v1, 0x3C
    ctx->pc = 0x310338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60);
    // 0x31033c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31033Cu;
    {
        const bool branch_taken_0x31033c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31033Cu;
            // 0x310340: 0xa043008c  sb          $v1, 0x8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31033c) {
            ctx->pc = 0x310380u;
            goto label_310380;
        }
    }
    ctx->pc = 0x310344u;
label_310344:
    // 0x310344: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310348: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x310348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x31034c: 0x9066db53  lbu         $a2, -0x24AD($v1)
    ctx->pc = 0x31034cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957907)));
    // 0x310350: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310354: 0x24a5dcb4  addiu       $a1, $a1, -0x234C
    ctx->pc = 0x310354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958260));
    // 0x310358: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x310358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31035c: 0x2484defc  addiu       $a0, $a0, -0x2104
    ctx->pc = 0x31035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958844));
    // 0x310360: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x310360u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x310364: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310368: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x310368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31036c: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x31036cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x310370: 0x9063dd9b  lbu         $v1, -0x2265($v1)
    ctx->pc = 0x310370u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958491)));
    // 0x310374: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x310374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x310378: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x310378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31037c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x31037cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
label_310380:
    // 0x310380: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310384: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310388: 0x8c65da40  lw          $a1, -0x25C0($v1)
    ctx->pc = 0x310388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957632)));
    // 0x31038c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x31038cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x310390: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x310390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x310394: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x310394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x310398: 0x30630018  andi        $v1, $v1, 0x18
    ctx->pc = 0x310398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24);
    // 0x31039c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31039Cu;
    {
        const bool branch_taken_0x31039c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3103A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31039Cu;
            // 0x3103a0: 0xac85da40  sw          $a1, -0x25C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294957632), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31039c) {
            ctx->pc = 0x3103ACu;
            goto label_3103ac;
        }
    }
    ctx->pc = 0x3103A4u;
    // 0x3103a4: 0x1ca00009  bgtz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3103A4u;
    {
        const bool branch_taken_0x3103a4 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x3103a4) {
            ctx->pc = 0x3103CCu;
            goto label_3103cc;
        }
    }
    ctx->pc = 0x3103ACu;
label_3103ac:
    // 0x3103ac: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x3103acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x3103b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3103b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3103b4: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x3103B4u;
    SET_GPR_U32(ctx, 31, 0x3103BCu);
    ctx->pc = 0x3103B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3103B4u;
            // 0x3103b8: 0xac43da40  sw          $v1, -0x25C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BA10u;
    if (runtime->hasFunction(0x33BA10u)) {
        auto targetFn = runtime->lookupFunction(0x33BA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103BCu; }
        if (ctx->pc != 0x3103BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BA10_0x33ba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103BCu; }
        if (ctx->pc != 0x3103BCu) { return; }
    }
    ctx->pc = 0x3103BCu;
label_3103bc:
    // 0x3103bc: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x3103bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x3103c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3103c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3103c4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x3103C4u;
    SET_GPR_U32(ctx, 31, 0x3103CCu);
    ctx->pc = 0x3103C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3103C4u;
            // 0x3103c8: 0x248403e0  addiu       $a0, $a0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103CCu; }
        if (ctx->pc != 0x3103CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103CCu; }
        if (ctx->pc != 0x3103CCu) { return; }
    }
    ctx->pc = 0x3103CCu;
label_3103cc:
    // 0x3103cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3103ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3103d0:
    // 0x3103d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3103d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3103d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3103D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3103D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3103D4u;
            // 0x3103d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3103DCu;
    // 0x3103dc: 0x0  nop
    ctx->pc = 0x3103dcu;
    // NOP
label_3103e0:
    // 0x3103e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3103e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3103e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3103e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3103e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3103e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3103ec: 0xc04be58  jal         func_12F960
    ctx->pc = 0x3103ECu;
    SET_GPR_U32(ctx, 31, 0x3103F4u);
    ctx->pc = 0x3103F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3103ECu;
            // 0x3103f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F960u;
    if (runtime->hasFunction(0x12F960u)) {
        auto targetFn = runtime->lookupFunction(0x12F960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103F4u; }
        if (ctx->pc != 0x3103F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F960_0x12f960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103F4u; }
        if (ctx->pc != 0x3103F4u) { return; }
    }
    ctx->pc = 0x3103F4u;
label_3103f4:
    // 0x3103f4: 0xc05f6c0  jal         func_17DB00
    ctx->pc = 0x3103F4u;
    SET_GPR_U32(ctx, 31, 0x3103FCu);
    ctx->pc = 0x3103F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3103F4u;
            // 0x3103f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB00u;
    if (runtime->hasFunction(0x17DB00u)) {
        auto targetFn = runtime->lookupFunction(0x17DB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103FCu; }
        if (ctx->pc != 0x3103FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DB00_0x17db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3103FCu; }
        if (ctx->pc != 0x3103FCu) { return; }
    }
    ctx->pc = 0x3103FCu;
label_3103fc:
    // 0x3103fc: 0xc0c44bc  jal         func_3112F0
    ctx->pc = 0x3103FCu;
    SET_GPR_U32(ctx, 31, 0x310404u);
    ctx->pc = 0x3112F0u;
    if (runtime->hasFunction(0x3112F0u)) {
        auto targetFn = runtime->lookupFunction(0x3112F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310404u; }
        if (ctx->pc != 0x310404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003112F0_0x3112f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310404u; }
        if (ctx->pc != 0x310404u) { return; }
    }
    ctx->pc = 0x310404u;
label_310404:
    // 0x310404: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310408: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x310408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x31040c: 0x9463dab0  lhu         $v1, -0x2550($v1)
    ctx->pc = 0x31040cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x310410: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x310410u;
    {
        const bool branch_taken_0x310410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x310410) {
            ctx->pc = 0x310468u;
            goto label_310468;
        }
    }
    ctx->pc = 0x310418u;
    // 0x310418: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x31041c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31041cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310420: 0x8c84da38  lw          $a0, -0x25C8($a0)
    ctx->pc = 0x310420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957624)));
    // 0x310424: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x310424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x310428: 0x1c80000f  bgtz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x310428u;
    {
        const bool branch_taken_0x310428 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x31042Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310428u;
            // 0x31042c: 0xac64da38  sw          $a0, -0x25C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957624), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310428) {
            ctx->pc = 0x310468u;
            goto label_310468;
        }
    }
    ctx->pc = 0x310430u;
    // 0x310430: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x310430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310434: 0xc05aa2c  jal         func_16A8B0
    ctx->pc = 0x310434u;
    SET_GPR_U32(ctx, 31, 0x31043Cu);
    ctx->pc = 0x310438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310434u;
            // 0x310438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A8B0u;
    if (runtime->hasFunction(0x16A8B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31043Cu; }
        if (ctx->pc != 0x31043Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A8B0_0x16a8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31043Cu; }
        if (ctx->pc != 0x31043Cu) { return; }
    }
    ctx->pc = 0x31043Cu;
label_31043c:
    // 0x31043c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x31043cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x310440: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x310440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x310444: 0xa0404820  sb          $zero, 0x4820($v0)
    ctx->pc = 0x310444u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18464), (uint8_t)GPR_U32(ctx, 0));
    // 0x310448: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x310448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x31044c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x310450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310454: 0x248406e0  addiu       $a0, $a0, 0x6E0
    ctx->pc = 0x310454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
    // 0x310458: 0xc055768  jal         func_155DA0
    ctx->pc = 0x310458u;
    SET_GPR_U32(ctx, 31, 0x310460u);
    ctx->pc = 0x31045Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310458u;
            // 0x31045c: 0xac43da40  sw          $v1, -0x25C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310460u; }
        if (ctx->pc != 0x310460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310460u; }
        if (ctx->pc != 0x310460u) { return; }
    }
    ctx->pc = 0x310460u;
label_310460:
    // 0x310460: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x310460u;
    {
        const bool branch_taken_0x310460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310460u;
            // 0x310464: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310460) {
            ctx->pc = 0x310500u;
            goto label_310500;
        }
    }
    ctx->pc = 0x310468u;
label_310468:
    // 0x310468: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31046c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x31046cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310470: 0x8c65da40  lw          $a1, -0x25C0($v1)
    ctx->pc = 0x310470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957632)));
    // 0x310474: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x310474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x310478: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x310478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x31047c: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x31047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x310480: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x310480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x310484: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x310484u;
    {
        const bool branch_taken_0x310484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x310488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310484u;
            // 0x310488: 0xac85da40  sw          $a1, -0x25C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294957632), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310484) {
            ctx->pc = 0x3104A8u;
            goto label_3104a8;
        }
    }
    ctx->pc = 0x31048Cu;
    // 0x31048c: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31048Cu;
    {
        const bool branch_taken_0x31048c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x31048c) {
            ctx->pc = 0x3104A8u;
            goto label_3104a8;
        }
    }
    ctx->pc = 0x310494u;
    // 0x310494: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x310494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x310498: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x310498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31049c: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x31049cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x3104a0: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3104A0u;
    {
        const bool branch_taken_0x3104a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3104a0) {
            ctx->pc = 0x3104FCu;
            goto label_3104fc;
        }
    }
    ctx->pc = 0x3104A8u;
label_3104a8:
    // 0x3104a8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3104a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3104ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3104acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3104b0: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x3104b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x3104b4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3104B4u;
    {
        const bool branch_taken_0x3104b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3104b4) {
            ctx->pc = 0x3104B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3104B4u;
            // 0x3104b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3104D0u;
            goto label_3104d0;
        }
    }
    ctx->pc = 0x3104BCu;
    // 0x3104bc: 0xc0d4fc8  jal         func_353F20
    ctx->pc = 0x3104BCu;
    SET_GPR_U32(ctx, 31, 0x3104C4u);
    ctx->pc = 0x3104C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3104BCu;
            // 0x3104c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353F20u;
    if (runtime->hasFunction(0x353F20u)) {
        auto targetFn = runtime->lookupFunction(0x353F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104C4u; }
        if (ctx->pc != 0x3104C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353F20_0x353f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104C4u; }
        if (ctx->pc != 0x3104C4u) { return; }
    }
    ctx->pc = 0x3104C4u;
label_3104c4:
    // 0x3104c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3104C4u;
    {
        const bool branch_taken_0x3104c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3104c4) {
            ctx->pc = 0x3104FCu;
            goto label_3104fc;
        }
    }
    ctx->pc = 0x3104CCu;
    // 0x3104cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3104ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3104d0:
    // 0x3104d0: 0xc05aa2c  jal         func_16A8B0
    ctx->pc = 0x3104D0u;
    SET_GPR_U32(ctx, 31, 0x3104D8u);
    ctx->pc = 0x3104D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3104D0u;
            // 0x3104d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A8B0u;
    if (runtime->hasFunction(0x16A8B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104D8u; }
        if (ctx->pc != 0x3104D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A8B0_0x16a8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104D8u; }
        if (ctx->pc != 0x3104D8u) { return; }
    }
    ctx->pc = 0x3104D8u;
label_3104d8:
    // 0x3104d8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3104d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3104dc: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x3104dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x3104e0: 0xa0404820  sb          $zero, 0x4820($v0)
    ctx->pc = 0x3104e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18464), (uint8_t)GPR_U32(ctx, 0));
    // 0x3104e4: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x3104e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3104e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3104e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3104ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3104ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3104f0: 0x248406e0  addiu       $a0, $a0, 0x6E0
    ctx->pc = 0x3104f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
    // 0x3104f4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x3104F4u;
    SET_GPR_U32(ctx, 31, 0x3104FCu);
    ctx->pc = 0x3104F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3104F4u;
            // 0x3104f8: 0xac43da40  sw          $v1, -0x25C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104FCu; }
        if (ctx->pc != 0x3104FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3104FCu; }
        if (ctx->pc != 0x3104FCu) { return; }
    }
    ctx->pc = 0x3104FCu;
label_3104fc:
    // 0x3104fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3104fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_310500:
    // 0x310500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310504: 0x3e00008  jr          $ra
    ctx->pc = 0x310504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310504u;
            // 0x310508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31050Cu;
    // 0x31050c: 0x0  nop
    ctx->pc = 0x31050cu;
    // NOP
    ctx->pc = 0x310510u;
}
