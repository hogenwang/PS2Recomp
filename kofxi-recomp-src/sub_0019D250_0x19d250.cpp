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

// Function: sub_0019D250
// Address: 0x19d250 - 0x19eae0
void sub_0019D250_0x19d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D250_0x19d250");
#endif

    switch (ctx->pc) {
        case 0x19d27cu: goto label_19d27c;
        case 0x19d298u: goto label_19d298;
        case 0x19d2d0u: goto label_19d2d0;
        case 0x19d3a4u: goto label_19d3a4;
        case 0x19d3ecu: goto label_19d3ec;
        case 0x19d3fcu: goto label_19d3fc;
        case 0x19d404u: goto label_19d404;
        case 0x19d448u: goto label_19d448;
        case 0x19d450u: goto label_19d450;
        case 0x19d46cu: goto label_19d46c;
        case 0x19d474u: goto label_19d474;
        case 0x19d484u: goto label_19d484;
        case 0x19d4e4u: goto label_19d4e4;
        case 0x19d4f8u: goto label_19d4f8;
        case 0x19d510u: goto label_19d510;
        case 0x19d530u: goto label_19d530;
        case 0x19d548u: goto label_19d548;
        case 0x19d58cu: goto label_19d58c;
        case 0x19d5ccu: goto label_19d5cc;
        case 0x19d5e4u: goto label_19d5e4;
        case 0x19d5f4u: goto label_19d5f4;
        case 0x19d618u: goto label_19d618;
        case 0x19d620u: goto label_19d620;
        case 0x19d630u: goto label_19d630;
        case 0x19d648u: goto label_19d648;
        case 0x19d650u: goto label_19d650;
        case 0x19d658u: goto label_19d658;
        case 0x19d670u: goto label_19d670;
        case 0x19d678u: goto label_19d678;
        case 0x19d680u: goto label_19d680;
        case 0x19d698u: goto label_19d698;
        case 0x19d6b0u: goto label_19d6b0;
        case 0x19d6d0u: goto label_19d6d0;
        case 0x19d6d8u: goto label_19d6d8;
        case 0x19d6f0u: goto label_19d6f0;
        case 0x19d708u: goto label_19d708;
        case 0x19d720u: goto label_19d720;
        case 0x19d758u: goto label_19d758;
        case 0x19d760u: goto label_19d760;
        case 0x19d770u: goto label_19d770;
        case 0x19d7ecu: goto label_19d7ec;
        case 0x19d804u: goto label_19d804;
        case 0x19d8d4u: goto label_19d8d4;
        case 0x19d910u: goto label_19d910;
        case 0x19d928u: goto label_19d928;
        case 0x19d940u: goto label_19d940;
        case 0x19d954u: goto label_19d954;
        case 0x19d964u: goto label_19d964;
        case 0x19d9b0u: goto label_19d9b0;
        case 0x19d9ccu: goto label_19d9cc;
        case 0x19d9e4u: goto label_19d9e4;
        case 0x19d9fcu: goto label_19d9fc;
        case 0x19da10u: goto label_19da10;
        case 0x19da20u: goto label_19da20;
        case 0x19da5cu: goto label_19da5c;
        case 0x19da74u: goto label_19da74;
        case 0x19da8cu: goto label_19da8c;
        case 0x19daa0u: goto label_19daa0;
        case 0x19dab8u: goto label_19dab8;
        case 0x19dac0u: goto label_19dac0;
        case 0x19dac8u: goto label_19dac8;
        case 0x19dae0u: goto label_19dae0;
        case 0x19daf8u: goto label_19daf8;
        case 0x19db48u: goto label_19db48;
        case 0x19db60u: goto label_19db60;
        case 0x19db84u: goto label_19db84;
        case 0x19dba8u: goto label_19dba8;
        case 0x19dbccu: goto label_19dbcc;
        case 0x19dbf0u: goto label_19dbf0;
        case 0x19dc14u: goto label_19dc14;
        case 0x19dc1cu: goto label_19dc1c;
        case 0x19dc24u: goto label_19dc24;
        case 0x19dc48u: goto label_19dc48;
        case 0x19dc6cu: goto label_19dc6c;
        case 0x19dc74u: goto label_19dc74;
        case 0x19dc7cu: goto label_19dc7c;
        case 0x19dca0u: goto label_19dca0;
        case 0x19dcbcu: goto label_19dcbc;
        case 0x19dcccu: goto label_19dccc;
        case 0x19dcd4u: goto label_19dcd4;
        case 0x19dcf8u: goto label_19dcf8;
        case 0x19dd00u: goto label_19dd00;
        case 0x19dd18u: goto label_19dd18;
        case 0x19dd20u: goto label_19dd20;
        case 0x19dd28u: goto label_19dd28;
        case 0x19dd64u: goto label_19dd64;
        case 0x19dd74u: goto label_19dd74;
        case 0x19dd84u: goto label_19dd84;
        case 0x19ddfcu: goto label_19ddfc;
        case 0x19de34u: goto label_19de34;
        case 0x19de9cu: goto label_19de9c;
        case 0x19deb4u: goto label_19deb4;
        case 0x19df10u: goto label_19df10;
        case 0x19df34u: goto label_19df34;
        case 0x19df90u: goto label_19df90;
        case 0x19dfb4u: goto label_19dfb4;
        case 0x19e00cu: goto label_19e00c;
        case 0x19e030u: goto label_19e030;
        case 0x19e054u: goto label_19e054;
        case 0x19e06cu: goto label_19e06c;
        case 0x19e07cu: goto label_19e07c;
        case 0x19e084u: goto label_19e084;
        case 0x19e0a8u: goto label_19e0a8;
        case 0x19e0b0u: goto label_19e0b0;
        case 0x19e0c8u: goto label_19e0c8;
        case 0x19e0d0u: goto label_19e0d0;
        case 0x19e0d8u: goto label_19e0d8;
        case 0x19e0e8u: goto label_19e0e8;
        case 0x19e130u: goto label_19e130;
        case 0x19e168u: goto label_19e168;
        case 0x19e1d0u: goto label_19e1d0;
        case 0x19e1e8u: goto label_19e1e8;
        case 0x19e244u: goto label_19e244;
        case 0x19e268u: goto label_19e268;
        case 0x19e2c4u: goto label_19e2c4;
        case 0x19e2e8u: goto label_19e2e8;
        case 0x19e340u: goto label_19e340;
        case 0x19e364u: goto label_19e364;
        case 0x19e388u: goto label_19e388;
        case 0x19e3a0u: goto label_19e3a0;
        case 0x19e3b0u: goto label_19e3b0;
        case 0x19e3b8u: goto label_19e3b8;
        case 0x19e3f8u: goto label_19e3f8;
        case 0x19e408u: goto label_19e408;
        case 0x19e410u: goto label_19e410;
        case 0x19e43cu: goto label_19e43c;
        case 0x19e444u: goto label_19e444;
        case 0x19e44cu: goto label_19e44c;
        case 0x19e464u: goto label_19e464;
        case 0x19e46cu: goto label_19e46c;
        case 0x19e474u: goto label_19e474;
        case 0x19e48cu: goto label_19e48c;
        case 0x19e4acu: goto label_19e4ac;
        case 0x19e514u: goto label_19e514;
        case 0x19e52cu: goto label_19e52c;
        case 0x19e544u: goto label_19e544;
        case 0x19e5a0u: goto label_19e5a0;
        case 0x19e5a8u: goto label_19e5a8;
        case 0x19e5b0u: goto label_19e5b0;
        case 0x19e5f0u: goto label_19e5f0;
        case 0x19e5f8u: goto label_19e5f8;
        case 0x19e600u: goto label_19e600;
        case 0x19e62cu: goto label_19e62c;
        case 0x19e634u: goto label_19e634;
        case 0x19e63cu: goto label_19e63c;
        case 0x19e654u: goto label_19e654;
        case 0x19e65cu: goto label_19e65c;
        case 0x19e664u: goto label_19e664;
        case 0x19e67cu: goto label_19e67c;
        case 0x19e684u: goto label_19e684;
        case 0x19e68cu: goto label_19e68c;
        case 0x19e6a4u: goto label_19e6a4;
        case 0x19e6bcu: goto label_19e6bc;
        case 0x19e6f0u: goto label_19e6f0;
        case 0x19e6f8u: goto label_19e6f8;
        case 0x19e700u: goto label_19e700;
        case 0x19e710u: goto label_19e710;
        case 0x19e77cu: goto label_19e77c;
        case 0x19e784u: goto label_19e784;
        case 0x19e794u: goto label_19e794;
        case 0x19e7a4u: goto label_19e7a4;
        case 0x19e7acu: goto label_19e7ac;
        case 0x19e7d0u: goto label_19e7d0;
        case 0x19e7d8u: goto label_19e7d8;
        case 0x19e7f0u: goto label_19e7f0;
        case 0x19e7f8u: goto label_19e7f8;
        case 0x19e800u: goto label_19e800;
        case 0x19e810u: goto label_19e810;
        case 0x19e89cu: goto label_19e89c;
        case 0x19e8c0u: goto label_19e8c0;
        case 0x19e91cu: goto label_19e91c;
        case 0x19e940u: goto label_19e940;
        case 0x19e998u: goto label_19e998;
        case 0x19e9bcu: goto label_19e9bc;
        case 0x19e9e0u: goto label_19e9e0;
        case 0x19e9f8u: goto label_19e9f8;
        case 0x19ea08u: goto label_19ea08;
        case 0x19ea10u: goto label_19ea10;
        case 0x19ea34u: goto label_19ea34;
        case 0x19ea3cu: goto label_19ea3c;
        case 0x19ea68u: goto label_19ea68;
        case 0x19ea70u: goto label_19ea70;
        case 0x19ea78u: goto label_19ea78;
        case 0x19ea90u: goto label_19ea90;
        case 0x19ea98u: goto label_19ea98;
        case 0x19eaa0u: goto label_19eaa0;
        case 0x19eab8u: goto label_19eab8;
        case 0x19eac0u: goto label_19eac0;
        case 0x19eac8u: goto label_19eac8;
        default: break;
    }

    ctx->pc = 0x19d250u;

label_19d250:
    // 0x19d250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d254: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19d254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19d258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d25c: 0x9443dab0  lhu         $v1, -0x2550($v0)
    ctx->pc = 0x19d25cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x19d260: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x19d260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x19d264: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D264u;
    {
        const bool branch_taken_0x19d264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d264) {
            ctx->pc = 0x19D274u;
            goto label_19d274;
        }
    }
    ctx->pc = 0x19D26Cu;
    // 0x19d26c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x19D26Cu;
    {
        const bool branch_taken_0x19d26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D26Cu;
        // 0x19d270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d26c) {
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D274u;
label_19d274:
    // 0x19d274: 0xc062870  jal         func_18A1C0
    ctx->pc = 0x19D274u;
    SET_GPR_U32(ctx, 31, 0x19D27Cu);
    ctx->pc = 0x18A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1C0u, 0x19D274u, 0x19D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D27Cu;
label_19d27c:
    // 0x19d27c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19d27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d284: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x19d284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19d288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d28c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19d290: 0x9044db10  lbu         $a0, -0x24F0($v0)
    ctx->pc = 0x19d290u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x19d294: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x19d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_19d298:
    // 0x19d298: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x19d298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x19d29c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x19d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x19d2a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D2A0u;
    {
        const bool branch_taken_0x19d2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d2a0) {
            ctx->pc = 0x19D2C0u;
            goto label_19d2c0;
        }
    }
    ctx->pc = 0x19D2A8u;
    // 0x19d2a8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x19d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19d2ac: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x19d2acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d2b0: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x19d2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19d2b4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19D2B4u;
    {
        const bool branch_taken_0x19d2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d2b4) {
            ctx->pc = 0x19D2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D2B4u;
            // 0x19d2b8: 0x30c200ff  andi        $v0, $a2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19d298;
        }
    }
    ctx->pc = 0x19D2BCu;
    // 0x19d2bc: 0x0  nop
    ctx->pc = 0x19d2bcu;
    // NOP
label_19d2c0:
    // 0x19d2c0: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x19D2C0u;
    {
        const bool branch_taken_0x19d2c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d2c0) {
            ctx->pc = 0x19D39Cu;
            goto label_19d39c;
        }
    }
    ctx->pc = 0x19D2C8u;
    // 0x19d2c8: 0xc062924  jal         func_18A490
    ctx->pc = 0x19D2C8u;
    SET_GPR_U32(ctx, 31, 0x19D2D0u);
    ctx->pc = 0x18A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A490u, 0x19D2C8u, 0x19D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D2D0u;
label_19d2d0:
    // 0x19d2d0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x19d2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d2d4: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x19d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x19d2d8: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x19d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x19d2dc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x19d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x19d2e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19d2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19d2e4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x19D2E4u;
    {
        const bool branch_taken_0x19d2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d2e4) {
            ctx->pc = 0x19D2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D2E4u;
            // 0x19d2e8: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D348u;
            goto label_19d348;
        }
    }
    ctx->pc = 0x19D2ECu;
    // 0x19d2ec: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x19d2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19d2f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d2f4: 0x5062004b  beql        $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x19D2F4u;
    {
        const bool branch_taken_0x19d2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d2f4) {
            ctx->pc = 0x19D2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D2F4u;
            // 0x19d2f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D2FCu;
    // 0x19d2fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d300: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x19D300u;
    {
        const bool branch_taken_0x19d300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d300) {
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D308u;
    // 0x19d308: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D308u;
    {
        const bool branch_taken_0x19d308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d308) {
            ctx->pc = 0x19D318u;
            goto label_19d318;
        }
    }
    ctx->pc = 0x19D310u;
    // 0x19d310: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19D310u;
    {
        const bool branch_taken_0x19d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d310) {
            ctx->pc = 0x19D344u;
            goto label_19d344;
        }
    }
    ctx->pc = 0x19D318u;
label_19d318:
    // 0x19d318: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19d318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19d31c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x19d31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19d320: 0x8063da08  lb          $v1, -0x25F8($v1)
    ctx->pc = 0x19d320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957576)));
    // 0x19d324: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19D324u;
    {
        const bool branch_taken_0x19d324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19d324) {
            ctx->pc = 0x19D330u;
            goto label_19d330;
        }
    }
    ctx->pc = 0x19D32Cu;
    // 0x19d32c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19d330:
    // 0x19d330: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x19D330u;
    {
        const bool branch_taken_0x19d330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d330) {
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D338u;
    // 0x19d338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d33c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x19D33Cu;
    {
        const bool branch_taken_0x19d33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d33c) {
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D344u;
label_19d344:
    // 0x19d344: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x19d344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_19d348:
    // 0x19d348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19d348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d34c: 0x50620035  beql        $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x19D34Cu;
    {
        const bool branch_taken_0x19d34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d34c) {
            ctx->pc = 0x19D350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D34Cu;
            // 0x19d350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D354u;
    // 0x19d354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d358: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x19D358u;
    {
        const bool branch_taken_0x19d358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d358) {
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D360u;
    // 0x19d360: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D360u;
    {
        const bool branch_taken_0x19d360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d360) {
            ctx->pc = 0x19D370u;
            goto label_19d370;
        }
    }
    ctx->pc = 0x19D368u;
    // 0x19d368: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19D368u;
    {
        const bool branch_taken_0x19d368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d368) {
            ctx->pc = 0x19D39Cu;
            goto label_19d39c;
        }
    }
    ctx->pc = 0x19D370u;
label_19d370:
    // 0x19d370: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19d370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19d374: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x19d374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19d378: 0x8063da08  lb          $v1, -0x25F8($v1)
    ctx->pc = 0x19d378u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957576)));
    // 0x19d37c: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19D37Cu;
    {
        const bool branch_taken_0x19d37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19d37c) {
            ctx->pc = 0x19D388u;
            goto label_19d388;
        }
    }
    ctx->pc = 0x19D384u;
    // 0x19d384: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19d388:
    // 0x19d388: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x19D388u;
    {
        const bool branch_taken_0x19d388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d388) {
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D390u;
    // 0x19d390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d394: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x19D394u;
    {
        const bool branch_taken_0x19d394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d394) {
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D39Cu;
label_19d39c:
    // 0x19d39c: 0xc0628bc  jal         func_18A2F0
    ctx->pc = 0x19D39Cu;
    SET_GPR_U32(ctx, 31, 0x19D3A4u);
    ctx->pc = 0x18A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2F0u, 0x19D39Cu, 0x19D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D3A4u;
label_19d3a4:
    // 0x19d3a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d3a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D3A8u;
    {
        const bool branch_taken_0x19d3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d3a8) {
            ctx->pc = 0x19D3B8u;
            goto label_19d3b8;
        }
    }
    ctx->pc = 0x19D3B0u;
    // 0x19d3b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19D3B0u;
    {
        const bool branch_taken_0x19d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3B0u;
        // 0x19d3b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3b0) {
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D3B8u;
label_19d3b8:
    // 0x19d3b8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19d3bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d3c0: 0x90449780  lbu         $a0, -0x6880($v0)
    ctx->pc = 0x19d3c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x19d3c4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D3C4u;
    {
        const bool branch_taken_0x19d3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d3c4) {
            ctx->pc = 0x19D3E4u;
            goto label_19d3e4;
        }
    }
    ctx->pc = 0x19D3CCu;
    // 0x19d3cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19d3d0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D3D0u;
    {
        const bool branch_taken_0x19d3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d3d0) {
            ctx->pc = 0x19D3E4u;
            goto label_19d3e4;
        }
    }
    ctx->pc = 0x19D3D8u;
    // 0x19d3d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19d3dc: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19D3DCu;
    {
        const bool branch_taken_0x19d3dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d3dc) {
            ctx->pc = 0x19D3F4u;
            goto label_19d3f4;
        }
    }
    ctx->pc = 0x19D3E4u;
label_19d3e4:
    // 0x19d3e4: 0xc067abc  jal         func_19EAF0
    ctx->pc = 0x19D3E4u;
    SET_GPR_U32(ctx, 31, 0x19D3ECu);
    ctx->pc = 0x19EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EAF0u, 0x19D3E4u, 0x19D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D3ECu;
label_19d3ec:
    // 0x19d3ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19D3ECu;
    {
        const bool branch_taken_0x19d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3ECu;
        // 0x19d3f0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3ec) {
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D3F4u;
label_19d3f4:
    // 0x19d3f4: 0xc067b00  jal         func_19EC00
    ctx->pc = 0x19D3F4u;
    SET_GPR_U32(ctx, 31, 0x19D3FCu);
    ctx->pc = 0x19EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC00u, 0x19D3F4u, 0x19D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D3FCu;
label_19d3fc:
    // 0x19d3fc: 0xc067b30  jal         func_19ECC0
    ctx->pc = 0x19D3FCu;
    SET_GPR_U32(ctx, 31, 0x19D404u);
    ctx->pc = 0x19ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ECC0u, 0x19D3FCu, 0x19D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D404u;
label_19d404:
    // 0x19d404: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19d404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19d408: 0x9442da88  lhu         $v0, -0x2578($v0)
    ctx->pc = 0x19d408u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957704)));
    // 0x19d40c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19d40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19d410: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D410u;
    {
        const bool branch_taken_0x19d410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d410) {
            ctx->pc = 0x19D414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D410u;
            // 0x19d414: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D418u;
    // 0x19d418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19D418u;
    {
        const bool branch_taken_0x19d418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D418u;
        // 0x19d41c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d418) {
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D420u;
    // 0x19d420: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19d420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19d424:
    // 0x19d424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d428: 0x3e00008  jr          $ra
    ctx->pc = 0x19D428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D428u;
        // 0x19d42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D430u;
    // 0x19d430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d43c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d440: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x19D440u;
    SET_GPR_U32(ctx, 31, 0x19D448u);
    ctx->pc = 0x19D444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D440u;
    // 0x19d444: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x19D440u, 0x19D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D448u;
label_19d448:
    // 0x19d448: 0xc062870  jal         func_18A1C0
    ctx->pc = 0x19D448u;
    SET_GPR_U32(ctx, 31, 0x19D450u);
    ctx->pc = 0x18A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1C0u, 0x19D448u, 0x19D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D450u;
label_19d450:
    // 0x19d450: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19d450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19d454: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x19d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x19d458: 0x9442dab0  lhu         $v0, -0x2550($v0)
    ctx->pc = 0x19d458u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x19d45c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D45Cu;
    {
        const bool branch_taken_0x19d45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d45c) {
            ctx->pc = 0x19D47Cu;
            goto label_19d47c;
        }
    }
    ctx->pc = 0x19D464u;
    // 0x19d464: 0xc055770  jal         func_155DC0
    ctx->pc = 0x19D464u;
    SET_GPR_U32(ctx, 31, 0x19D46Cu);
    ctx->pc = 0x19D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D464u;
    // 0x19d468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x19D464u, 0x19D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D46Cu;
label_19d46c:
    // 0x19d46c: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19D46Cu;
    SET_GPR_U32(ctx, 31, 0x19D474u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19D46Cu, 0x19D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D474u;
label_19d474:
    // 0x19d474: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x19D474u;
    {
        const bool branch_taken_0x19d474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D474u;
        // 0x19d478: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d474) {
            ctx->pc = 0x19D724u;
            goto label_19d724;
        }
    }
    ctx->pc = 0x19D47Cu;
label_19d47c:
    // 0x19d47c: 0xc067494  jal         func_19D250
    ctx->pc = 0x19D47Cu;
    SET_GPR_U32(ctx, 31, 0x19D484u);
    ctx->pc = 0x19D250u;
    goto label_19d250;
    ctx->pc = 0x19D484u;
label_19d484:
    // 0x19d484: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x19d484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d488: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19d488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19d48c: 0x90449780  lbu         $a0, -0x6880($v0)
    ctx->pc = 0x19d48cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x19d490: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x19d490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x19d494: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x19d494u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19d498: 0x5020002e  beql        $at, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x19D498u;
    {
        const bool branch_taken_0x19d498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d498) {
            ctx->pc = 0x19D49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D498u;
            // 0x19d49c: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D554u;
            goto label_19d554;
        }
    }
    ctx->pc = 0x19D4A0u;
    // 0x19d4a0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x19d4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x19d4a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19d4a8: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19D4A8u;
    {
        const bool branch_taken_0x19d4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d4a8) {
            ctx->pc = 0x19D4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D4A8u;
            // 0x19d4ac: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D518u;
            goto label_19d518;
        }
    }
    ctx->pc = 0x19D4B0u;
    // 0x19d4b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d4b4: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D4B4u;
    {
        const bool branch_taken_0x19d4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d4b4) {
            ctx->pc = 0x19D4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D4B4u;
            // 0x19d4b8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D4D4u;
            goto label_19d4d4;
        }
    }
    ctx->pc = 0x19D4BCu;
    // 0x19d4bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d4c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D4C0u;
    {
        const bool branch_taken_0x19d4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d4c0) {
            ctx->pc = 0x19D4D0u;
            goto label_19d4d0;
        }
    }
    ctx->pc = 0x19D4C8u;
    // 0x19d4c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19D4C8u;
    {
        const bool branch_taken_0x19d4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d4c8) {
            ctx->pc = 0x19D550u;
            goto label_19d550;
        }
    }
    ctx->pc = 0x19D4D0u;
label_19d4d0:
    // 0x19d4d0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x19d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_19d4d4:
    // 0x19d4d4: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19D4D4u;
    {
        const bool branch_taken_0x19d4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d4d4) {
            ctx->pc = 0x19D500u;
            goto label_19d500;
        }
    }
    ctx->pc = 0x19D4DCu;
    // 0x19d4dc: 0xc062924  jal         func_18A490
    ctx->pc = 0x19D4DCu;
    SET_GPR_U32(ctx, 31, 0x19D4E4u);
    ctx->pc = 0x18A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A490u, 0x19D4DCu, 0x19D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D4E4u;
label_19d4e4:
    // 0x19d4e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19d4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d4e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x19D4E8u;
    {
        const bool branch_taken_0x19d4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d4e8) {
            ctx->pc = 0x19D550u;
            goto label_19d550;
        }
    }
    ctx->pc = 0x19D4F0u;
    // 0x19d4f0: 0xc0d414c  jal         func_350530
    ctx->pc = 0x19D4F0u;
    SET_GPR_U32(ctx, 31, 0x19D4F8u);
    ctx->pc = 0x350530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350530u, 0x19D4F0u, 0x19D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D4F8u;
label_19d4f8:
    // 0x19d4f8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x19D4F8u;
    {
        const bool branch_taken_0x19d4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d4f8) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D500u;
label_19d500:
    // 0x19d500: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x19d500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x19d504: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d508: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D508u;
    SET_GPR_U32(ctx, 31, 0x19D510u);
    ctx->pc = 0x19D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D508u;
    // 0x19d50c: 0x24841c90  addiu       $a0, $a0, 0x1C90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D508u, 0x19D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D510u;
label_19d510:
    // 0x19d510: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x19D510u;
    {
        const bool branch_taken_0x19d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d510) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D518u;
label_19d518:
    // 0x19d518: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D518u;
    {
        const bool branch_taken_0x19d518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d518) {
            ctx->pc = 0x19D538u;
            goto label_19d538;
        }
    }
    ctx->pc = 0x19D520u;
    // 0x19d520: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x19d520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x19d524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d528: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D528u;
    SET_GPR_U32(ctx, 31, 0x19D530u);
    ctx->pc = 0x19D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D528u;
    // 0x19d52c: 0x24840530  addiu       $a0, $a0, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D528u, 0x19D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D530u;
label_19d530:
    // 0x19d530: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x19D530u;
    {
        const bool branch_taken_0x19d530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d530) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D538u;
label_19d538:
    // 0x19d538: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x19d538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x19d53c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d540: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D540u;
    SET_GPR_U32(ctx, 31, 0x19D548u);
    ctx->pc = 0x19D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D540u;
    // 0x19d544: 0x24841c90  addiu       $a0, $a0, 0x1C90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D540u, 0x19D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D548u;
label_19d548:
    // 0x19d548: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x19D548u;
    {
        const bool branch_taken_0x19d548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d548) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D550u;
label_19d550:
    // 0x19d550: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x19d550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_19d554:
    // 0x19d554: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x19d554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19d558: 0x1020006d  beqz        $at, . + 4 + (0x6D << 2)
    ctx->pc = 0x19D558u;
    {
        const bool branch_taken_0x19d558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d558) {
            ctx->pc = 0x19D710u;
            goto label_19d710;
        }
    }
    ctx->pc = 0x19D560u;
    // 0x19d560: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19d560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19d564: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d568: 0x2463ef80  addiu       $v1, $v1, -0x1080
    ctx->pc = 0x19d568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963072));
    // 0x19d56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d570: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d574: 0x400008  jr          $v0
    ctx->pc = 0x19D574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D57Cu: goto label_19d57c;
            case 0x19D594u: goto label_19d594;
            case 0x19D5ECu: goto label_19d5ec;
            case 0x19D638u: goto label_19d638;
            case 0x19D660u: goto label_19d660;
            case 0x19D688u: goto label_19d688;
            case 0x19D6A0u: goto label_19d6a0;
            case 0x19D6C0u: goto label_19d6c0;
            case 0x19D6E0u: goto label_19d6e0;
            case 0x19D6F8u: goto label_19d6f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D574u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19D57Cu;
label_19d57c:
    // 0x19d57c: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x19d57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x19d580: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d584: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D584u;
    SET_GPR_U32(ctx, 31, 0x19D58Cu);
    ctx->pc = 0x19D588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D584u;
    // 0x19d588: 0x2484d750  addiu       $a0, $a0, -0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D584u, 0x19D58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D58Cu;
label_19d58c:
    // 0x19d58c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x19D58Cu;
    {
        const bool branch_taken_0x19d58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d58c) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D594u;
label_19d594:
    // 0x19d594: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19d598: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19d598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19d59c: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x19d59cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x19d5a0: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19D5A0u;
    {
        const bool branch_taken_0x19d5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d5a0) {
            ctx->pc = 0x19D5D4u;
            goto label_19d5d4;
        }
    }
    ctx->pc = 0x19D5A8u;
    // 0x19d5a8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x19d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x19d5ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19d5b0: 0x8042bed0  lb          $v0, -0x4130($v0)
    ctx->pc = 0x19d5b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950608)));
    // 0x19d5b4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D5B4u;
    {
        const bool branch_taken_0x19d5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d5b4) {
            ctx->pc = 0x19D5D4u;
            goto label_19d5d4;
        }
    }
    ctx->pc = 0x19D5BCu;
    // 0x19d5bc: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19d5c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5c4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D5C4u;
    SET_GPR_U32(ctx, 31, 0x19D5CCu);
    ctx->pc = 0x19D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D5C4u;
    // 0x19d5c8: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D5C4u, 0x19D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D5CCu;
label_19d5cc:
    // 0x19d5cc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x19D5CCu;
    {
        const bool branch_taken_0x19d5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d5cc) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D5D4u;
label_19d5d4:
    // 0x19d5d4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x19d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x19d5d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5dc: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D5DCu;
    SET_GPR_U32(ctx, 31, 0x19D5E4u);
    ctx->pc = 0x19D5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D5DCu;
    // 0x19d5e0: 0x2484da50  addiu       $a0, $a0, -0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D5DCu, 0x19D5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D5E4u;
label_19d5e4:
    // 0x19d5e4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x19D5E4u;
    {
        const bool branch_taken_0x19d5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d5e4) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D5ECu;
label_19d5ec:
    // 0x19d5ec: 0xc0628bc  jal         func_18A2F0
    ctx->pc = 0x19D5ECu;
    SET_GPR_U32(ctx, 31, 0x19D5F4u);
    ctx->pc = 0x18A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2F0u, 0x19D5ECu, 0x19D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D5F4u;
label_19d5f4:
    // 0x19d5f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19d5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d5f8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x19d5f8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x19d5fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19d600: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D600u;
    {
        const bool branch_taken_0x19d600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D600u;
        // 0x19d604: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d600) {
            ctx->pc = 0x19D610u;
            goto label_19d610;
        }
    }
    ctx->pc = 0x19D608u;
    // 0x19d608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d60c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d610:
    // 0x19d610: 0xc067ab8  jal         func_19EAE0
    ctx->pc = 0x19D610u;
    SET_GPR_U32(ctx, 31, 0x19D618u);
    ctx->pc = 0x19EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EAE0u, 0x19D610u, 0x19D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D618u;
label_19d618:
    // 0x19d618: 0xc067acc  jal         func_19EB30
    ctx->pc = 0x19D618u;
    SET_GPR_U32(ctx, 31, 0x19D620u);
    ctx->pc = 0x19D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D618u;
    // 0x19d61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EB30u, 0x19D618u, 0x19D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D620u;
label_19d620:
    // 0x19d620: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x19d620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x19d624: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d628: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D628u;
    SET_GPR_U32(ctx, 31, 0x19D630u);
    ctx->pc = 0x19D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D628u;
    // 0x19d62c: 0x2484db00  addiu       $a0, $a0, -0x2500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D628u, 0x19D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D630u;
label_19d630:
    // 0x19d630: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x19D630u;
    {
        const bool branch_taken_0x19d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d630) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D638u;
label_19d638:
    // 0x19d638: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x19d638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x19d63c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d640: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D640u;
    SET_GPR_U32(ctx, 31, 0x19D648u);
    ctx->pc = 0x19D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D640u;
    // 0x19d644: 0x248409d0  addiu       $a0, $a0, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D640u, 0x19D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D648u;
label_19d648:
    // 0x19d648: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19D648u;
    SET_GPR_U32(ctx, 31, 0x19D650u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19D648u, 0x19D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D650u;
label_19d650:
    // 0x19d650: 0xc068288  jal         func_1A0A20
    ctx->pc = 0x19D650u;
    SET_GPR_U32(ctx, 31, 0x19D658u);
    ctx->pc = 0x1A0A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0A20u, 0x19D650u, 0x19D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D658u;
label_19d658:
    // 0x19d658: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x19D658u;
    {
        const bool branch_taken_0x19d658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d658) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D660u;
label_19d660:
    // 0x19d660: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19d660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19d664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d668: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D668u;
    SET_GPR_U32(ctx, 31, 0x19D670u);
    ctx->pc = 0x19D66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D668u;
    // 0x19d66c: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D668u, 0x19D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D670u;
label_19d670:
    // 0x19d670: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19D670u;
    SET_GPR_U32(ctx, 31, 0x19D678u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19D670u, 0x19D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D678u;
label_19d678:
    // 0x19d678: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19D678u;
    SET_GPR_U32(ctx, 31, 0x19D680u);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19D678u, 0x19D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D680u;
label_19d680:
    // 0x19d680: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19D680u;
    {
        const bool branch_taken_0x19d680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d680) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D688u;
label_19d688:
    // 0x19d688: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x19d688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x19d68c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d690: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D690u;
    SET_GPR_U32(ctx, 31, 0x19D698u);
    ctx->pc = 0x19D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D690u;
    // 0x19d694: 0x2484da50  addiu       $a0, $a0, -0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D690u, 0x19D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D698u;
label_19d698:
    // 0x19d698: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19D698u;
    {
        const bool branch_taken_0x19d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d698) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D6A0u;
label_19d6a0:
    // 0x19d6a0: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19d6a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6a8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D6A8u;
    SET_GPR_U32(ctx, 31, 0x19D6B0u);
    ctx->pc = 0x19D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D6A8u;
    // 0x19d6ac: 0x2484b040  addiu       $a0, $a0, -0x4FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D6A8u, 0x19D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D6B0u;
label_19d6b0:
    // 0x19d6b0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x19d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x19d6b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19d6b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19D6B8u;
    {
        const bool branch_taken_0x19d6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6B8u;
        // 0x19d6bc: 0xa064da08  sb          $a0, -0x25F8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294957576), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6b8) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D6C0u;
label_19d6c0:
    // 0x19d6c0: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19d6c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6c8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D6C8u;
    SET_GPR_U32(ctx, 31, 0x19D6D0u);
    ctx->pc = 0x19D6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D6C8u;
    // 0x19d6cc: 0x2484bf20  addiu       $a0, $a0, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D6C8u, 0x19D6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D6D0u;
label_19d6d0:
    // 0x19d6d0: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19D6D0u;
    SET_GPR_U32(ctx, 31, 0x19D6D8u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19D6D0u, 0x19D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D6D8u;
label_19d6d8:
    // 0x19d6d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19D6D8u;
    {
        const bool branch_taken_0x19d6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d6d8) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D6E0u;
label_19d6e0:
    // 0x19d6e0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19d6e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6e8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D6E8u;
    SET_GPR_U32(ctx, 31, 0x19D6F0u);
    ctx->pc = 0x19D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D6E8u;
    // 0x19d6ec: 0x24840ee0  addiu       $a0, $a0, 0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D6E8u, 0x19D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D6F0u;
label_19d6f0:
    // 0x19d6f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19D6F0u;
    {
        const bool branch_taken_0x19d6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d6f0) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D6F8u;
label_19d6f8:
    // 0x19d6f8: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19d6fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d700: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D700u;
    SET_GPR_U32(ctx, 31, 0x19D708u);
    ctx->pc = 0x19D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D700u;
    // 0x19d704: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D700u, 0x19D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D708u;
label_19d708:
    // 0x19d708: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19D708u;
    {
        const bool branch_taken_0x19d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d708) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D710u;
label_19d710:
    // 0x19d710: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x19d710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x19d714: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d718: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D718u;
    SET_GPR_U32(ctx, 31, 0x19D720u);
    ctx->pc = 0x19D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D718u;
    // 0x19d71c: 0x2484da50  addiu       $a0, $a0, -0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D718u, 0x19D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D720u;
label_19d720:
    // 0x19d720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19d724:
    // 0x19d724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d72c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D72Cu;
        // 0x19d730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D734u;
    // 0x19d734: 0x0  nop
    ctx->pc = 0x19d734u;
    // NOP
    // 0x19d738: 0x0  nop
    ctx->pc = 0x19d738u;
    // NOP
    // 0x19d73c: 0x0  nop
    ctx->pc = 0x19d73cu;
    // NOP
    // 0x19d740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d74c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d750: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x19D750u;
    SET_GPR_U32(ctx, 31, 0x19D758u);
    ctx->pc = 0x19D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D750u;
    // 0x19d754: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x19D750u, 0x19D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D758u;
label_19d758:
    // 0x19d758: 0xc062870  jal         func_18A1C0
    ctx->pc = 0x19D758u;
    SET_GPR_U32(ctx, 31, 0x19D760u);
    ctx->pc = 0x18A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1C0u, 0x19D758u, 0x19D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D760u;
label_19d760:
    // 0x19d760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19d760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19d764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d768: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x19d768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19d76c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d770:
    // 0x19d770: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x19d770u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19d774: 0x2041004  sllv        $v0, $a0, $s0
    ctx->pc = 0x19d774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x19d778: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19d77c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D77Cu;
    {
        const bool branch_taken_0x19d77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d77c) {
            ctx->pc = 0x19D798u;
            goto label_19d798;
        }
    }
    ctx->pc = 0x19D784u;
    // 0x19d784: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x19d784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19d788: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x19d788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d78c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x19d78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19d790: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19D790u;
    {
        const bool branch_taken_0x19d790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D790u;
        // 0x19d794: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d790) {
            ctx->pc = 0x19D770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19d770;
        }
    }
    ctx->pc = 0x19D798u;
label_19d798:
    // 0x19d798: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19d798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19d79c: 0x9446dab0  lhu         $a2, -0x2550($v0)
    ctx->pc = 0x19d79cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x19d7a0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19d7a4: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x19d7a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x19d7a8: 0x2444fff3  addiu       $a0, $v0, -0xD
    ctx->pc = 0x19d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
    // 0x19d7ac: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x19d7acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19d7b0: 0x50200017  beql        $at, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x19D7B0u;
    {
        const bool branch_taken_0x19d7b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d7b0) {
            ctx->pc = 0x19D7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D7B0u;
            // 0x19d7b4: 0x30c5ffff  andi        $a1, $a2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D810u;
            goto label_19d810;
        }
    }
    ctx->pc = 0x19D7B8u;
    // 0x19d7b8: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x19d7b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x19d7bc: 0x2404030a  addiu       $a0, $zero, 0x30A
    ctx->pc = 0x19d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x19d7c0: 0x10a4000c  beq         $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x19D7C0u;
    {
        const bool branch_taken_0x19d7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d7c0) {
            ctx->pc = 0x19D7F4u;
            goto label_19d7f4;
        }
    }
    ctx->pc = 0x19D7C8u;
    // 0x19d7c8: 0x24040308  addiu       $a0, $zero, 0x308
    ctx->pc = 0x19d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
    // 0x19d7cc: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D7CCu;
    {
        const bool branch_taken_0x19d7cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d7cc) {
            ctx->pc = 0x19D7DCu;
            goto label_19d7dc;
        }
    }
    ctx->pc = 0x19D7D4u;
    // 0x19d7d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19D7D4u;
    {
        const bool branch_taken_0x19d7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d7d4) {
            ctx->pc = 0x19D80Cu;
            goto label_19d80c;
        }
    }
    ctx->pc = 0x19D7DCu;
label_19d7dc:
    // 0x19d7dc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x19d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x19d7e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7e4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D7E4u;
    SET_GPR_U32(ctx, 31, 0x19D7ECu);
    ctx->pc = 0x19D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D7E4u;
    // 0x19d7e8: 0x2484d4d0  addiu       $a0, $a0, -0x2B30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D7E4u, 0x19D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D7ECu;
label_19d7ec:
    // 0x19d7ec: 0x100004b7  b           . + 4 + (0x4B7 << 2)
    ctx->pc = 0x19D7ECu;
    {
        const bool branch_taken_0x19d7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7ECu;
        // 0x19d7f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7ec) {
            ctx->pc = 0x19EACCu;
            goto label_19eacc;
        }
    }
    ctx->pc = 0x19D7F4u;
label_19d7f4:
    // 0x19d7f4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x19d7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x19d7f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7fc: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D7FCu;
    SET_GPR_U32(ctx, 31, 0x19D804u);
    ctx->pc = 0x19D800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D7FCu;
    // 0x19d800: 0x24840740  addiu       $a0, $a0, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D7FCu, 0x19D804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D804u;
label_19d804:
    // 0x19d804: 0x100004b0  b           . + 4 + (0x4B0 << 2)
    ctx->pc = 0x19D804u;
    {
        const bool branch_taken_0x19d804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d804) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19D80Cu;
label_19d80c:
    // 0x19d80c: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x19d80cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_19d810:
    // 0x19d810: 0x2404030f  addiu       $a0, $zero, 0x30F
    ctx->pc = 0x19d810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x19d814: 0x10a403ab  beq         $a1, $a0, . + 4 + (0x3AB << 2)
    ctx->pc = 0x19D814u;
    {
        const bool branch_taken_0x19d814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d814) {
            ctx->pc = 0x19E6C4u;
            goto label_19e6c4;
        }
    }
    ctx->pc = 0x19D81Cu;
    // 0x19d81c: 0x2404030e  addiu       $a0, $zero, 0x30E
    ctx->pc = 0x19d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 782));
    // 0x19d820: 0x10a403a2  beq         $a1, $a0, . + 4 + (0x3A2 << 2)
    ctx->pc = 0x19D820u;
    {
        const bool branch_taken_0x19d820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d820) {
            ctx->pc = 0x19E6ACu;
            goto label_19e6ac;
        }
    }
    ctx->pc = 0x19D828u;
    // 0x19d828: 0x2404030d  addiu       $a0, $zero, 0x30D
    ctx->pc = 0x19d828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 781));
    // 0x19d82c: 0x10a40399  beq         $a1, $a0, . + 4 + (0x399 << 2)
    ctx->pc = 0x19D82Cu;
    {
        const bool branch_taken_0x19d82c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d82c) {
            ctx->pc = 0x19E694u;
            goto label_19e694;
        }
    }
    ctx->pc = 0x19D834u;
    // 0x19d834: 0x2404030c  addiu       $a0, $zero, 0x30C
    ctx->pc = 0x19d834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    // 0x19d838: 0x10a40344  beq         $a1, $a0, . + 4 + (0x344 << 2)
    ctx->pc = 0x19D838u;
    {
        const bool branch_taken_0x19d838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d838) {
            ctx->pc = 0x19E54Cu;
            goto label_19e54c;
        }
    }
    ctx->pc = 0x19D840u;
    // 0x19d840: 0x2404030b  addiu       $a0, $zero, 0x30B
    ctx->pc = 0x19d840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 779));
    // 0x19d844: 0x10a4033b  beq         $a1, $a0, . + 4 + (0x33B << 2)
    ctx->pc = 0x19D844u;
    {
        const bool branch_taken_0x19d844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d844) {
            ctx->pc = 0x19E534u;
            goto label_19e534;
        }
    }
    ctx->pc = 0x19D84Cu;
    // 0x19d84c: 0x2404030a  addiu       $a0, $zero, 0x30A
    ctx->pc = 0x19d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x19d850: 0x10a40310  beq         $a1, $a0, . + 4 + (0x310 << 2)
    ctx->pc = 0x19D850u;
    {
        const bool branch_taken_0x19d850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d850) {
            ctx->pc = 0x19E494u;
            goto label_19e494;
        }
    }
    ctx->pc = 0x19D858u;
    // 0x19d858: 0x24040309  addiu       $a0, $zero, 0x309
    ctx->pc = 0x19d858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
    // 0x19d85c: 0x10a40307  beq         $a1, $a0, . + 4 + (0x307 << 2)
    ctx->pc = 0x19D85Cu;
    {
        const bool branch_taken_0x19d85c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d85c) {
            ctx->pc = 0x19E47Cu;
            goto label_19e47c;
        }
    }
    ctx->pc = 0x19D864u;
    // 0x19d864: 0x24040308  addiu       $a0, $zero, 0x308
    ctx->pc = 0x19d864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
    // 0x19d868: 0x10a40131  beq         $a1, $a0, . + 4 + (0x131 << 2)
    ctx->pc = 0x19D868u;
    {
        const bool branch_taken_0x19d868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d868) {
            ctx->pc = 0x19DD30u;
            goto label_19dd30;
        }
    }
    ctx->pc = 0x19D870u;
    // 0x19d870: 0x24040307  addiu       $a0, $zero, 0x307
    ctx->pc = 0x19d870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 775));
    // 0x19d874: 0x10a400a2  beq         $a1, $a0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x19D874u;
    {
        const bool branch_taken_0x19d874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d874) {
            ctx->pc = 0x19DB00u;
            goto label_19db00;
        }
    }
    ctx->pc = 0x19D87Cu;
    // 0x19d87c: 0x24020306  addiu       $v0, $zero, 0x306
    ctx->pc = 0x19d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    // 0x19d880: 0x10a20099  beq         $a1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x19D880u;
    {
        const bool branch_taken_0x19d880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d880) {
            ctx->pc = 0x19DAE8u;
            goto label_19dae8;
        }
    }
    ctx->pc = 0x19D888u;
    // 0x19d888: 0x24020305  addiu       $v0, $zero, 0x305
    ctx->pc = 0x19d888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    // 0x19d88c: 0x10a20090  beq         $a1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x19D88Cu;
    {
        const bool branch_taken_0x19d88c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d88c) {
            ctx->pc = 0x19DAD0u;
            goto label_19dad0;
        }
    }
    ctx->pc = 0x19D894u;
    // 0x19d894: 0x24020304  addiu       $v0, $zero, 0x304
    ctx->pc = 0x19d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
    // 0x19d898: 0x10a20083  beq         $a1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x19D898u;
    {
        const bool branch_taken_0x19d898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d898) {
            ctx->pc = 0x19DAA8u;
            goto label_19daa8;
        }
    }
    ctx->pc = 0x19D8A0u;
    // 0x19d8a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x19d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19d8a4: 0x10a2005c  beq         $a1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x19D8A4u;
    {
        const bool branch_taken_0x19d8a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d8a4) {
            ctx->pc = 0x19DA18u;
            goto label_19da18;
        }
    }
    ctx->pc = 0x19D8ACu;
    // 0x19d8ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19d8b0: 0x10a2002a  beq         $a1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x19D8B0u;
    {
        const bool branch_taken_0x19d8b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d8b0) {
            ctx->pc = 0x19D95Cu;
            goto label_19d95c;
        }
    }
    ctx->pc = 0x19D8B8u;
    // 0x19d8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d8bc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D8BCu;
    {
        const bool branch_taken_0x19d8bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d8bc) {
            ctx->pc = 0x19D8CCu;
            goto label_19d8cc;
        }
    }
    ctx->pc = 0x19D8C4u;
    // 0x19d8c4: 0x10000478  b           . + 4 + (0x478 << 2)
    ctx->pc = 0x19D8C4u;
    {
        const bool branch_taken_0x19d8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d8c4) {
            ctx->pc = 0x19EAA8u;
            goto label_19eaa8;
        }
    }
    ctx->pc = 0x19D8CCu;
label_19d8cc:
    // 0x19d8cc: 0xc05d310  jal         func_174C40
    ctx->pc = 0x19D8CCu;
    SET_GPR_U32(ctx, 31, 0x19D8D4u);
    ctx->pc = 0x174C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174C40u, 0x19D8CCu, 0x19D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D8D4u;
label_19d8d4:
    // 0x19d8d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19d8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d8d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d8dc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19D8DCu;
    {
        const bool branch_taken_0x19d8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d8dc) {
            ctx->pc = 0x19D930u;
            goto label_19d930;
        }
    }
    ctx->pc = 0x19D8E4u;
    // 0x19d8e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d8e8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19D8E8u;
    {
        const bool branch_taken_0x19d8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d8e8) {
            ctx->pc = 0x19D918u;
            goto label_19d918;
        }
    }
    ctx->pc = 0x19D8F0u;
    // 0x19d8f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D8F0u;
    {
        const bool branch_taken_0x19d8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d8f0) {
            ctx->pc = 0x19D900u;
            goto label_19d900;
        }
    }
    ctx->pc = 0x19D8F8u;
    // 0x19d8f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19D8F8u;
    {
        const bool branch_taken_0x19d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8F8u;
        // 0x19d8fc: 0x3c040013  lui         $a0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8f8) {
            ctx->pc = 0x19D948u;
            goto label_19d948;
        }
    }
    ctx->pc = 0x19D900u;
label_19d900:
    // 0x19d900: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19d900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19d904: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d908: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D908u;
    SET_GPR_U32(ctx, 31, 0x19D910u);
    ctx->pc = 0x19D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D908u;
    // 0x19d90c: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D908u, 0x19D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D910u;
label_19d910:
    // 0x19d910: 0x1000046d  b           . + 4 + (0x46D << 2)
    ctx->pc = 0x19D910u;
    {
        const bool branch_taken_0x19d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d910) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19D918u;
label_19d918:
    // 0x19d918: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19d918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19d91c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d920: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D920u;
    SET_GPR_U32(ctx, 31, 0x19D928u);
    ctx->pc = 0x19D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D920u;
    // 0x19d924: 0x2484b4e0  addiu       $a0, $a0, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D920u, 0x19D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D928u;
label_19d928:
    // 0x19d928: 0x10000467  b           . + 4 + (0x467 << 2)
    ctx->pc = 0x19D928u;
    {
        const bool branch_taken_0x19d928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d928) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19D930u;
label_19d930:
    // 0x19d930: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19d930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19d934: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d938: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D938u;
    SET_GPR_U32(ctx, 31, 0x19D940u);
    ctx->pc = 0x19D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D938u;
    // 0x19d93c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D938u, 0x19D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D940u;
label_19d940:
    // 0x19d940: 0x10000461  b           . + 4 + (0x461 << 2)
    ctx->pc = 0x19D940u;
    {
        const bool branch_taken_0x19d940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d940) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19D948u;
label_19d948:
    // 0x19d948: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d94c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D94Cu;
    SET_GPR_U32(ctx, 31, 0x19D954u);
    ctx->pc = 0x19D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D94Cu;
    // 0x19d950: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D94Cu, 0x19D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D954u;
label_19d954:
    // 0x19d954: 0x1000045c  b           . + 4 + (0x45C << 2)
    ctx->pc = 0x19D954u;
    {
        const bool branch_taken_0x19d954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d954) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19D95Cu;
label_19d95c:
    // 0x19d95c: 0xc05d310  jal         func_174C40
    ctx->pc = 0x19D95Cu;
    SET_GPR_U32(ctx, 31, 0x19D964u);
    ctx->pc = 0x174C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174C40u, 0x19D95Cu, 0x19D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D964u;
label_19d964:
    // 0x19d964: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19d964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d968: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d96c: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19D96Cu;
    {
        const bool branch_taken_0x19d96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d96c) {
            ctx->pc = 0x19D9ECu;
            goto label_19d9ec;
        }
    }
    ctx->pc = 0x19D974u;
    // 0x19d974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d978: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19D978u;
    {
        const bool branch_taken_0x19d978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d978) {
            ctx->pc = 0x19D9D4u;
            goto label_19d9d4;
        }
    }
    ctx->pc = 0x19D980u;
    // 0x19d980: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D980u;
    {
        const bool branch_taken_0x19d980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d980) {
            ctx->pc = 0x19D990u;
            goto label_19d990;
        }
    }
    ctx->pc = 0x19D988u;
    // 0x19d988: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19D988u;
    {
        const bool branch_taken_0x19d988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D988u;
        // 0x19d98c: 0x3c040013  lui         $a0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d988) {
            ctx->pc = 0x19DA04u;
            goto label_19da04;
        }
    }
    ctx->pc = 0x19D990u;
label_19d990:
    // 0x19d990: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19d990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19d994: 0x94429718  lhu         $v0, -0x68E8($v0)
    ctx->pc = 0x19d994u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294940440)));
    // 0x19d998: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D998u;
    {
        const bool branch_taken_0x19d998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d998) {
            ctx->pc = 0x19D9B8u;
            goto label_19d9b8;
        }
    }
    ctx->pc = 0x19D9A0u;
    // 0x19d9a0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19d9a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9a8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D9A8u;
    SET_GPR_U32(ctx, 31, 0x19D9B0u);
    ctx->pc = 0x19D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9A8u;
    // 0x19d9ac: 0x24848030  addiu       $a0, $a0, -0x7FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D9A8u, 0x19D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D9B0u;
label_19d9b0:
    // 0x19d9b0: 0x10000445  b           . + 4 + (0x445 << 2)
    ctx->pc = 0x19D9B0u;
    {
        const bool branch_taken_0x19d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d9b0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19D9B8u;
label_19d9b8:
    // 0x19d9b8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x19d9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x19d9bc: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x19d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x19d9c0: 0x2484f690  addiu       $a0, $a0, -0x970
    ctx->pc = 0x19d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
    // 0x19d9c4: 0xc0558d4  jal         func_156350
    ctx->pc = 0x19D9C4u;
    SET_GPR_U32(ctx, 31, 0x19D9CCu);
    ctx->pc = 0x19D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9C4u;
    // 0x19d9c8: 0x24a5b6b0  addiu       $a1, $a1, -0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x19D9C4u, 0x19D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D9CCu;
label_19d9cc:
    // 0x19d9cc: 0x1000043e  b           . + 4 + (0x43E << 2)
    ctx->pc = 0x19D9CCu;
    {
        const bool branch_taken_0x19d9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d9cc) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19D9D4u;
label_19d9d4:
    // 0x19d9d4: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19d9d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9dc: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D9DCu;
    SET_GPR_U32(ctx, 31, 0x19D9E4u);
    ctx->pc = 0x19D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9DCu;
    // 0x19d9e0: 0x2484b4e0  addiu       $a0, $a0, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D9DCu, 0x19D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D9E4u;
label_19d9e4:
    // 0x19d9e4: 0x10000438  b           . + 4 + (0x438 << 2)
    ctx->pc = 0x19D9E4u;
    {
        const bool branch_taken_0x19d9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d9e4) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19D9ECu;
label_19d9ec:
    // 0x19d9ec: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19d9f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9f4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19D9F4u;
    SET_GPR_U32(ctx, 31, 0x19D9FCu);
    ctx->pc = 0x19D9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9F4u;
    // 0x19d9f8: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19D9F4u, 0x19D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D9FCu;
label_19d9fc:
    // 0x19d9fc: 0x10000432  b           . + 4 + (0x432 << 2)
    ctx->pc = 0x19D9FCu;
    {
        const bool branch_taken_0x19d9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d9fc) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DA04u;
label_19da04:
    // 0x19da04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19da04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da08: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DA08u;
    SET_GPR_U32(ctx, 31, 0x19DA10u);
    ctx->pc = 0x19DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA08u;
    // 0x19da0c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DA08u, 0x19DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA10u;
label_19da10:
    // 0x19da10: 0x1000042d  b           . + 4 + (0x42D << 2)
    ctx->pc = 0x19DA10u;
    {
        const bool branch_taken_0x19da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19da10) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DA18u;
label_19da18:
    // 0x19da18: 0xc05d310  jal         func_174C40
    ctx->pc = 0x19DA18u;
    SET_GPR_U32(ctx, 31, 0x19DA20u);
    ctx->pc = 0x174C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174C40u, 0x19DA18u, 0x19DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA20u;
label_19da20:
    // 0x19da20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19da20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19da24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19da28: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19DA28u;
    {
        const bool branch_taken_0x19da28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19da28) {
            ctx->pc = 0x19DA7Cu;
            goto label_19da7c;
        }
    }
    ctx->pc = 0x19DA30u;
    // 0x19da30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19da30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19da34: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19DA34u;
    {
        const bool branch_taken_0x19da34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19da34) {
            ctx->pc = 0x19DA64u;
            goto label_19da64;
        }
    }
    ctx->pc = 0x19DA3Cu;
    // 0x19da3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DA3Cu;
    {
        const bool branch_taken_0x19da3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19da3c) {
            ctx->pc = 0x19DA4Cu;
            goto label_19da4c;
        }
    }
    ctx->pc = 0x19DA44u;
    // 0x19da44: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19DA44u;
    {
        const bool branch_taken_0x19da44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA44u;
        // 0x19da48: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da44) {
            ctx->pc = 0x19DA94u;
            goto label_19da94;
        }
    }
    ctx->pc = 0x19DA4Cu;
label_19da4c:
    // 0x19da4c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19da50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19da50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da54: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DA54u;
    SET_GPR_U32(ctx, 31, 0x19DA5Cu);
    ctx->pc = 0x19DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA54u;
    // 0x19da58: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DA54u, 0x19DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA5Cu;
label_19da5c:
    // 0x19da5c: 0x1000041a  b           . + 4 + (0x41A << 2)
    ctx->pc = 0x19DA5Cu;
    {
        const bool branch_taken_0x19da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19da5c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DA64u;
label_19da64:
    // 0x19da64: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19da64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19da68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19da68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da6c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DA6Cu;
    SET_GPR_U32(ctx, 31, 0x19DA74u);
    ctx->pc = 0x19DA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA6Cu;
    // 0x19da70: 0x2484b4e0  addiu       $a0, $a0, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DA6Cu, 0x19DA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA74u;
label_19da74:
    // 0x19da74: 0x10000414  b           . + 4 + (0x414 << 2)
    ctx->pc = 0x19DA74u;
    {
        const bool branch_taken_0x19da74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19da74) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DA7Cu;
label_19da7c:
    // 0x19da7c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x19da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x19da80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19da80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da84: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DA84u;
    SET_GPR_U32(ctx, 31, 0x19DA8Cu);
    ctx->pc = 0x19DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA84u;
    // 0x19da88: 0x24843b80  addiu       $a0, $a0, 0x3B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DA84u, 0x19DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA8Cu;
label_19da8c:
    // 0x19da8c: 0x1000040e  b           . + 4 + (0x40E << 2)
    ctx->pc = 0x19DA8Cu;
    {
        const bool branch_taken_0x19da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19da8c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DA94u;
label_19da94:
    // 0x19da94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19da94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da98: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DA98u;
    SET_GPR_U32(ctx, 31, 0x19DAA0u);
    ctx->pc = 0x19DA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA98u;
    // 0x19da9c: 0x24843b80  addiu       $a0, $a0, 0x3B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DA98u, 0x19DAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAA0u;
label_19daa0:
    // 0x19daa0: 0x10000409  b           . + 4 + (0x409 << 2)
    ctx->pc = 0x19DAA0u;
    {
        const bool branch_taken_0x19daa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19daa0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DAA8u;
label_19daa8:
    // 0x19daa8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19daac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19daacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dab0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DAB0u;
    SET_GPR_U32(ctx, 31, 0x19DAB8u);
    ctx->pc = 0x19DAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAB0u;
    // 0x19dab4: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DAB0u, 0x19DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAB8u;
label_19dab8:
    // 0x19dab8: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19DAB8u;
    SET_GPR_U32(ctx, 31, 0x19DAC0u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19DAB8u, 0x19DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAC0u;
label_19dac0:
    // 0x19dac0: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19DAC0u;
    SET_GPR_U32(ctx, 31, 0x19DAC8u);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19DAC0u, 0x19DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAC8u;
label_19dac8:
    // 0x19dac8: 0x100003ff  b           . + 4 + (0x3FF << 2)
    ctx->pc = 0x19DAC8u;
    {
        const bool branch_taken_0x19dac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dac8) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DAD0u;
label_19dad0:
    // 0x19dad0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19dad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dad8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DAD8u;
    SET_GPR_U32(ctx, 31, 0x19DAE0u);
    ctx->pc = 0x19DADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAD8u;
    // 0x19dadc: 0x24840ee0  addiu       $a0, $a0, 0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DAD8u, 0x19DAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAE0u;
label_19dae0:
    // 0x19dae0: 0x100003f9  b           . + 4 + (0x3F9 << 2)
    ctx->pc = 0x19DAE0u;
    {
        const bool branch_taken_0x19dae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dae0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DAE8u;
label_19dae8:
    // 0x19dae8: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x19dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x19daec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19daecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19daf0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DAF0u;
    SET_GPR_U32(ctx, 31, 0x19DAF8u);
    ctx->pc = 0x19DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAF0u;
    // 0x19daf4: 0x24840660  addiu       $a0, $a0, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DAF0u, 0x19DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAF8u;
label_19daf8:
    // 0x19daf8: 0x100003f3  b           . + 4 + (0x3F3 << 2)
    ctx->pc = 0x19DAF8u;
    {
        const bool branch_taken_0x19daf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19daf8) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DB00u;
label_19db00:
    // 0x19db00: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19db00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19db04: 0x8084da08  lb          $a0, -0x25F8($a0)
    ctx->pc = 0x19db04u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294957576)));
    // 0x19db08: 0x2c810011  sltiu       $at, $a0, 0x11
    ctx->pc = 0x19db08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19db0c: 0x10200088  beqz        $at, . + 4 + (0x88 << 2)
    ctx->pc = 0x19DB0Cu;
    {
        const bool branch_taken_0x19db0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19db0c) {
            ctx->pc = 0x19DD30u;
            goto label_19dd30;
        }
    }
    ctx->pc = 0x19DB14u;
    // 0x19db14: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x19db14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x19db18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19db18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19db1c: 0x24a5f2c0  addiu       $a1, $a1, -0xD40
    ctx->pc = 0x19db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    // 0x19db20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19db20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19db24: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x19db24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19db28: 0x800008  jr          $a0
    ctx->pc = 0x19DB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DB30u: goto label_19db30;
            case 0x19DB38u: goto label_19db38;
            case 0x19DB50u: goto label_19db50;
            case 0x19DB68u: goto label_19db68;
            case 0x19DB8Cu: goto label_19db8c;
            case 0x19DBB0u: goto label_19dbb0;
            case 0x19DBD4u: goto label_19dbd4;
            case 0x19DBF8u: goto label_19dbf8;
            case 0x19DC50u: goto label_19dc50;
            case 0x19DCC4u: goto label_19dcc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DB28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19DB30u;
label_19db30:
    // 0x19db30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19db30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19db34: 0xa040da08  sb          $zero, -0x25F8($v0)
    ctx->pc = 0x19db34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 0));
label_19db38:
    // 0x19db38: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19db38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19db3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19db3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db40: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DB40u;
    SET_GPR_U32(ctx, 31, 0x19DB48u);
    ctx->pc = 0x19DB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB40u;
    // 0x19db44: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DB40u, 0x19DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB48u;
label_19db48:
    // 0x19db48: 0x100003df  b           . + 4 + (0x3DF << 2)
    ctx->pc = 0x19DB48u;
    {
        const bool branch_taken_0x19db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19db48) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DB50u;
label_19db50:
    // 0x19db50: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19db50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19db54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19db54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db58: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DB58u;
    SET_GPR_U32(ctx, 31, 0x19DB60u);
    ctx->pc = 0x19DB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB58u;
    // 0x19db5c: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DB58u, 0x19DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB60u;
label_19db60:
    // 0x19db60: 0x100003d9  b           . + 4 + (0x3D9 << 2)
    ctx->pc = 0x19DB60u;
    {
        const bool branch_taken_0x19db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19db60) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DB68u;
label_19db68:
    // 0x19db68: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19db68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19db6c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19db70: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19db70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19db74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19db74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db78: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19db78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19db7c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DB7Cu;
    SET_GPR_U32(ctx, 31, 0x19DB84u);
    ctx->pc = 0x19DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB7Cu;
    // 0x19db80: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DB7Cu, 0x19DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB84u;
label_19db84:
    // 0x19db84: 0x100003d0  b           . + 4 + (0x3D0 << 2)
    ctx->pc = 0x19DB84u;
    {
        const bool branch_taken_0x19db84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19db84) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DB8Cu;
label_19db8c:
    // 0x19db8c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19db90: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19db90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19db94: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19db94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19db98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19db98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db9c: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19dba0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DBA0u;
    SET_GPR_U32(ctx, 31, 0x19DBA8u);
    ctx->pc = 0x19DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DBA0u;
    // 0x19dba4: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DBA0u, 0x19DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DBA8u;
label_19dba8:
    // 0x19dba8: 0x100003c7  b           . + 4 + (0x3C7 << 2)
    ctx->pc = 0x19DBA8u;
    {
        const bool branch_taken_0x19dba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dba8) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DBB0u;
label_19dbb0:
    // 0x19dbb0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19dbb4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19dbb8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19dbbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dbc0: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19dbc4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DBC4u;
    SET_GPR_U32(ctx, 31, 0x19DBCCu);
    ctx->pc = 0x19DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DBC4u;
    // 0x19dbc8: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DBC4u, 0x19DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DBCCu;
label_19dbcc:
    // 0x19dbcc: 0x100003be  b           . + 4 + (0x3BE << 2)
    ctx->pc = 0x19DBCCu;
    {
        const bool branch_taken_0x19dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dbcc) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DBD4u;
label_19dbd4:
    // 0x19dbd4: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19dbd8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x19dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x19dbdc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19dbe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dbe4: 0x2484b890  addiu       $a0, $a0, -0x4770
    ctx->pc = 0x19dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    // 0x19dbe8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DBE8u;
    SET_GPR_U32(ctx, 31, 0x19DBF0u);
    ctx->pc = 0x19DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DBE8u;
    // 0x19dbec: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DBE8u, 0x19DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DBF0u;
label_19dbf0:
    // 0x19dbf0: 0x100003b5  b           . + 4 + (0x3B5 << 2)
    ctx->pc = 0x19DBF0u;
    {
        const bool branch_taken_0x19dbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dbf0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DBF8u;
label_19dbf8:
    // 0x19dbf8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x19dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19dbfc: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19DBFCu;
    {
        const bool branch_taken_0x19dbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19dbfc) {
            ctx->pc = 0x19DC2Cu;
            goto label_19dc2c;
        }
    }
    ctx->pc = 0x19DC04u;
    // 0x19dc04: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x19dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x19dc08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc0c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DC0Cu;
    SET_GPR_U32(ctx, 31, 0x19DC14u);
    ctx->pc = 0x19DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC0Cu;
    // 0x19dc10: 0x24842680  addiu       $a0, $a0, 0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DC0Cu, 0x19DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC14u;
label_19dc14:
    // 0x19dc14: 0xc053318  jal         func_14CC60
    ctx->pc = 0x19DC14u;
    SET_GPR_U32(ctx, 31, 0x19DC1Cu);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x19DC14u, 0x19DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC1Cu;
label_19dc1c:
    // 0x19dc1c: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19DC1Cu;
    SET_GPR_U32(ctx, 31, 0x19DC24u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19DC1Cu, 0x19DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC24u;
label_19dc24:
    // 0x19dc24: 0x100003a8  b           . + 4 + (0x3A8 << 2)
    ctx->pc = 0x19DC24u;
    {
        const bool branch_taken_0x19dc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dc24) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DC2Cu;
label_19dc2c:
    // 0x19dc2c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19dc30: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x19dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19dc34: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19dc38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc3c: 0x2484bd10  addiu       $a0, $a0, -0x42F0
    ctx->pc = 0x19dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950160));
    // 0x19dc40: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DC40u;
    SET_GPR_U32(ctx, 31, 0x19DC48u);
    ctx->pc = 0x19DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC40u;
    // 0x19dc44: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DC40u, 0x19DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC48u;
label_19dc48:
    // 0x19dc48: 0x1000039f  b           . + 4 + (0x39F << 2)
    ctx->pc = 0x19DC48u;
    {
        const bool branch_taken_0x19dc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dc48) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DC50u;
label_19dc50:
    // 0x19dc50: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x19dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19dc54: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19DC54u;
    {
        const bool branch_taken_0x19dc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19dc54) {
            ctx->pc = 0x19DC84u;
            goto label_19dc84;
        }
    }
    ctx->pc = 0x19DC5Cu;
    // 0x19dc5c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x19dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x19dc60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc64: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DC64u;
    SET_GPR_U32(ctx, 31, 0x19DC6Cu);
    ctx->pc = 0x19DC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC64u;
    // 0x19dc68: 0x24842680  addiu       $a0, $a0, 0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DC64u, 0x19DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC6Cu;
label_19dc6c:
    // 0x19dc6c: 0xc053318  jal         func_14CC60
    ctx->pc = 0x19DC6Cu;
    SET_GPR_U32(ctx, 31, 0x19DC74u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x19DC6Cu, 0x19DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC74u;
label_19dc74:
    // 0x19dc74: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19DC74u;
    SET_GPR_U32(ctx, 31, 0x19DC7Cu);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19DC74u, 0x19DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC7Cu;
label_19dc7c:
    // 0x19dc7c: 0x10000392  b           . + 4 + (0x392 << 2)
    ctx->pc = 0x19DC7Cu;
    {
        const bool branch_taken_0x19dc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dc7c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DC84u;
label_19dc84:
    // 0x19dc84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DC84u;
    {
        const bool branch_taken_0x19dc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dc84) {
            ctx->pc = 0x19DC98u;
            goto label_19dc98;
        }
    }
    ctx->pc = 0x19DC8Cu;
    // 0x19dc8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19dc90: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DC90u;
    {
        const bool branch_taken_0x19dc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19dc90) {
            ctx->pc = 0x19DCA0u;
            goto label_19dca0;
        }
    }
    ctx->pc = 0x19DC98u;
label_19dc98:
    // 0x19dc98: 0xc0d09dc  jal         func_342770
    ctx->pc = 0x19DC98u;
    SET_GPR_U32(ctx, 31, 0x19DCA0u);
    ctx->pc = 0x342770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342770u, 0x19DC98u, 0x19DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCA0u;
label_19dca0:
    // 0x19dca0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19dca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19dca4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x19dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19dca8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19dcac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcb0: 0x24848c70  addiu       $a0, $a0, -0x7390
    ctx->pc = 0x19dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937712));
    // 0x19dcb4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DCB4u;
    SET_GPR_U32(ctx, 31, 0x19DCBCu);
    ctx->pc = 0x19DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCB4u;
    // 0x19dcb8: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DCB4u, 0x19DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCBCu;
label_19dcbc:
    // 0x19dcbc: 0x10000382  b           . + 4 + (0x382 << 2)
    ctx->pc = 0x19DCBCu;
    {
        const bool branch_taken_0x19dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dcbc) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DCC4u;
label_19dcc4:
    // 0x19dcc4: 0xc067b00  jal         func_19EC00
    ctx->pc = 0x19DCC4u;
    SET_GPR_U32(ctx, 31, 0x19DCCCu);
    ctx->pc = 0x19EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC00u, 0x19DCC4u, 0x19DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCCCu;
label_19dccc:
    // 0x19dccc: 0xc067b30  jal         func_19ECC0
    ctx->pc = 0x19DCCCu;
    SET_GPR_U32(ctx, 31, 0x19DCD4u);
    ctx->pc = 0x19ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ECC0u, 0x19DCCCu, 0x19DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCD4u;
label_19dcd4:
    // 0x19dcd4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19dcd8: 0x9442da88  lhu         $v0, -0x2578($v0)
    ctx->pc = 0x19dcd8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957704)));
    // 0x19dcdc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19dcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19dce0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19DCE0u;
    {
        const bool branch_taken_0x19dce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dce0) {
            ctx->pc = 0x19DD08u;
            goto label_19dd08;
        }
    }
    ctx->pc = 0x19DCE8u;
    // 0x19dce8: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19dcec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcf0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DCF0u;
    SET_GPR_U32(ctx, 31, 0x19DCF8u);
    ctx->pc = 0x19DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCF0u;
    // 0x19dcf4: 0x2484bf20  addiu       $a0, $a0, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DCF0u, 0x19DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCF8u;
label_19dcf8:
    // 0x19dcf8: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19DCF8u;
    SET_GPR_U32(ctx, 31, 0x19DD00u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19DCF8u, 0x19DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD00u;
label_19dd00:
    // 0x19dd00: 0x10000371  b           . + 4 + (0x371 << 2)
    ctx->pc = 0x19DD00u;
    {
        const bool branch_taken_0x19dd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd00) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DD08u;
label_19dd08:
    // 0x19dd08: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19dd0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd10: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DD10u;
    SET_GPR_U32(ctx, 31, 0x19DD18u);
    ctx->pc = 0x19DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD10u;
    // 0x19dd14: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DD10u, 0x19DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD18u;
label_19dd18:
    // 0x19dd18: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19DD18u;
    SET_GPR_U32(ctx, 31, 0x19DD20u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19DD18u, 0x19DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD20u;
label_19dd20:
    // 0x19dd20: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19DD20u;
    SET_GPR_U32(ctx, 31, 0x19DD28u);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19DD20u, 0x19DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD28u;
label_19dd28:
    // 0x19dd28: 0x10000367  b           . + 4 + (0x367 << 2)
    ctx->pc = 0x19DD28u;
    {
        const bool branch_taken_0x19dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd28) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DD30u;
label_19dd30:
    // 0x19dd30: 0x146000eb  bnez        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x19DD30u;
    {
        const bool branch_taken_0x19dd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dd30) {
            ctx->pc = 0x19E0E0u;
            goto label_19e0e0;
        }
    }
    ctx->pc = 0x19DD38u;
    // 0x19dd38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dd3c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19DD3Cu;
    {
        const bool branch_taken_0x19dd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19dd3c) {
            ctx->pc = 0x19DD5Cu;
            goto label_19dd5c;
        }
    }
    ctx->pc = 0x19DD44u;
    // 0x19dd44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19dd48: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DD48u;
    {
        const bool branch_taken_0x19dd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19dd48) {
            ctx->pc = 0x19DD5Cu;
            goto label_19dd5c;
        }
    }
    ctx->pc = 0x19DD50u;
    // 0x19dd50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19dd54: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19DD54u;
    {
        const bool branch_taken_0x19dd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19dd54) {
            ctx->pc = 0x19DD7Cu;
            goto label_19dd7c;
        }
    }
    ctx->pc = 0x19DD5Cu;
label_19dd5c:
    // 0x19dd5c: 0xc067abc  jal         func_19EAF0
    ctx->pc = 0x19DD5Cu;
    SET_GPR_U32(ctx, 31, 0x19DD64u);
    ctx->pc = 0x19EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EAF0u, 0x19DD5Cu, 0x19DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD64u;
label_19dd64:
    // 0x19dd64: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19dd68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd6c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DD6Cu;
    SET_GPR_U32(ctx, 31, 0x19DD74u);
    ctx->pc = 0x19DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD6Cu;
    // 0x19dd70: 0x24840ee0  addiu       $a0, $a0, 0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DD6Cu, 0x19DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD74u;
label_19dd74:
    // 0x19dd74: 0x10000354  b           . + 4 + (0x354 << 2)
    ctx->pc = 0x19DD74u;
    {
        const bool branch_taken_0x19dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd74) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DD7Cu;
label_19dd7c:
    // 0x19dd7c: 0xc0628bc  jal         func_18A2F0
    ctx->pc = 0x19DD7Cu;
    SET_GPR_U32(ctx, 31, 0x19DD84u);
    ctx->pc = 0x18A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2F0u, 0x19DD7Cu, 0x19DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD84u;
label_19dd84:
    // 0x19dd84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19dd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19dd88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19dd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19dd8c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DD8Cu;
    {
        const bool branch_taken_0x19dd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD8Cu;
        // 0x19dd90: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd8c) {
            ctx->pc = 0x19DD98u;
            goto label_19dd98;
        }
    }
    ctx->pc = 0x19DD94u;
    // 0x19dd94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19dd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dd98:
    // 0x19dd98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19dd9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19dda0: 0x8445da18  lh          $a1, -0x25E8($v0)
    ctx->pc = 0x19dda0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957592)));
    // 0x19dda4: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19DDA4u;
    {
        const bool branch_taken_0x19dda4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x19dda4) {
            ctx->pc = 0x19DDE0u;
            goto label_19dde0;
        }
    }
    ctx->pc = 0x19DDACu;
    // 0x19ddac: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x19ddacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19ddb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ddb4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x19ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19ddb8: 0x2442db64  addiu       $v0, $v0, -0x249C
    ctx->pc = 0x19ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957924));
    // 0x19ddbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ddc0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ddc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ddc8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ddcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ddd0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x19ddd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ddd4: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x19ddd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x19ddd8: 0x102000a6  beqz        $at, . + 4 + (0xA6 << 2)
    ctx->pc = 0x19DDD8u;
    {
        const bool branch_taken_0x19ddd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ddd8) {
            ctx->pc = 0x19E074u;
            goto label_19e074;
        }
    }
    ctx->pc = 0x19DDE0u;
label_19dde0:
    // 0x19dde0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19dde4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19dde8: 0x8045d9f8  lb          $a1, -0x2608($v0)
    ctx->pc = 0x19dde8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x19ddec: 0x54a30033  bnel        $a1, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x19DDECu;
    {
        const bool branch_taken_0x19ddec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x19ddec) {
            ctx->pc = 0x19DDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DDECu;
            // 0x19ddf0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DEBCu;
            goto label_19debc;
        }
    }
    ctx->pc = 0x19DDF4u;
    // 0x19ddf4: 0xc067bc4  jal         func_19EF10
    ctx->pc = 0x19DDF4u;
    SET_GPR_U32(ctx, 31, 0x19DDFCu);
    ctx->pc = 0x19DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DDF4u;
    // 0x19ddf8: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF10u, 0x19DDF4u, 0x19DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDFCu;
label_19ddfc:
    // 0x19ddfc: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x19ddfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x19de00: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x19DE00u;
    {
        const bool branch_taken_0x19de00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19de00) {
            ctx->pc = 0x19DE8Cu;
            goto label_19de8c;
        }
    }
    ctx->pc = 0x19DE08u;
    // 0x19de08: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19de08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19de0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19de10: 0x2463f2a0  addiu       $v1, $v1, -0xD60
    ctx->pc = 0x19de10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963872));
    // 0x19de14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19de14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19de18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19de1c: 0x400008  jr          $v0
    ctx->pc = 0x19DE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DE24u: goto label_19de24;
            case 0x19DE3Cu: goto label_19de3c;
            case 0x19DE4Cu: goto label_19de4c;
            case 0x19DE5Cu: goto label_19de5c;
            case 0x19DE6Cu: goto label_19de6c;
            case 0x19DE7Cu: goto label_19de7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DE1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19DE24u;
label_19de24:
    // 0x19de24: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19de24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19de28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19de28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de2c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DE2Cu;
    SET_GPR_U32(ctx, 31, 0x19DE34u);
    ctx->pc = 0x19DE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE2Cu;
    // 0x19de30: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DE2Cu, 0x19DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE34u;
label_19de34:
    // 0x19de34: 0x10000324  b           . + 4 + (0x324 << 2)
    ctx->pc = 0x19DE34u;
    {
        const bool branch_taken_0x19de34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19de34) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DE3Cu;
label_19de3c:
    // 0x19de3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19de40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19de40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19de44: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x19DE44u;
    {
        const bool branch_taken_0x19de44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE44u;
        // 0x19de48: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de44) {
            ctx->pc = 0x19DEA4u;
            goto label_19dea4;
        }
    }
    ctx->pc = 0x19DE4Cu;
label_19de4c:
    // 0x19de4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19de4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19de50: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19de50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19de54: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19DE54u;
    {
        const bool branch_taken_0x19de54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE54u;
        // 0x19de58: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de54) {
            ctx->pc = 0x19DEA4u;
            goto label_19dea4;
        }
    }
    ctx->pc = 0x19DE5Cu;
label_19de5c:
    // 0x19de5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19de60: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19de60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19de64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19DE64u;
    {
        const bool branch_taken_0x19de64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE64u;
        // 0x19de68: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de64) {
            ctx->pc = 0x19DEA4u;
            goto label_19dea4;
        }
    }
    ctx->pc = 0x19DE6Cu;
label_19de6c:
    // 0x19de6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19de70: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19de70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19de74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19DE74u;
    {
        const bool branch_taken_0x19de74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE74u;
        // 0x19de78: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de74) {
            ctx->pc = 0x19DEA4u;
            goto label_19dea4;
        }
    }
    ctx->pc = 0x19DE7Cu;
label_19de7c:
    // 0x19de7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19de80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19de80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19de84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19DE84u;
    {
        const bool branch_taken_0x19de84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE84u;
        // 0x19de88: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de84) {
            ctx->pc = 0x19DEA4u;
            goto label_19dea4;
        }
    }
    ctx->pc = 0x19DE8Cu;
label_19de8c:
    // 0x19de8c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19de90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19de90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de94: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DE94u;
    SET_GPR_U32(ctx, 31, 0x19DE9Cu);
    ctx->pc = 0x19DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE94u;
    // 0x19de98: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DE94u, 0x19DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE9Cu;
label_19de9c:
    // 0x19de9c: 0x1000030a  b           . + 4 + (0x30A << 2)
    ctx->pc = 0x19DE9Cu;
    {
        const bool branch_taken_0x19de9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19de9c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DEA4u;
label_19dea4:
    // 0x19dea4: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x19dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x19dea8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19deac: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DEACu;
    SET_GPR_U32(ctx, 31, 0x19DEB4u);
    ctx->pc = 0x19DEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DEACu;
    // 0x19deb0: 0x24843980  addiu       $a0, $a0, 0x3980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DEACu, 0x19DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEB4u;
label_19deb4:
    // 0x19deb4: 0x10000304  b           . + 4 + (0x304 << 2)
    ctx->pc = 0x19DEB4u;
    {
        const bool branch_taken_0x19deb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19deb4) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DEBCu;
label_19debc:
    // 0x19debc: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19DEBCu;
    {
        const bool branch_taken_0x19debc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19debc) {
            ctx->pc = 0x19DEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DEBCu;
            // 0x19dec0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DF3Cu;
            goto label_19df3c;
        }
    }
    ctx->pc = 0x19DEC4u;
    // 0x19dec4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19dec8: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x19dec8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x19decc: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x19deccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19ded0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x19DED0u;
    {
        const bool branch_taken_0x19ded0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ded0) {
            ctx->pc = 0x19DF18u;
            goto label_19df18;
        }
    }
    ctx->pc = 0x19DED8u;
    // 0x19ded8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19dedc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19dee0: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x19dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x19dee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19dee8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19deec: 0x400008  jr          $v0
    ctx->pc = 0x19DEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DEF4u: goto label_19def4;
            case 0x19DF18u: goto label_19df18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DEECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19DEF4u;
label_19def4:
    // 0x19def4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19def4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19def8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x19def8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19defc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19defcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19df00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19df00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df04: 0x24849420  addiu       $a0, $a0, -0x6BE0
    ctx->pc = 0x19df04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939680));
    // 0x19df08: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DF08u;
    SET_GPR_U32(ctx, 31, 0x19DF10u);
    ctx->pc = 0x19DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF08u;
    // 0x19df0c: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DF08u, 0x19DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF10u;
label_19df10:
    // 0x19df10: 0x100002ed  b           . + 4 + (0x2ED << 2)
    ctx->pc = 0x19DF10u;
    {
        const bool branch_taken_0x19df10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19df10) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DF18u;
label_19df18:
    // 0x19df18: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19df18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19df1c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19df20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19df20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19df24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19df24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df28: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19df28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19df2c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DF2Cu;
    SET_GPR_U32(ctx, 31, 0x19DF34u);
    ctx->pc = 0x19DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF2Cu;
    // 0x19df30: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DF2Cu, 0x19DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF34u;
label_19df34:
    // 0x19df34: 0x100002e4  b           . + 4 + (0x2E4 << 2)
    ctx->pc = 0x19DF34u;
    {
        const bool branch_taken_0x19df34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19df34) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DF3Cu;
label_19df3c:
    // 0x19df3c: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19DF3Cu;
    {
        const bool branch_taken_0x19df3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19df3c) {
            ctx->pc = 0x19DF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DF3Cu;
            // 0x19df40: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DFBCu;
            goto label_19dfbc;
        }
    }
    ctx->pc = 0x19DF44u;
    // 0x19df44: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19df44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19df48: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x19df48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x19df4c: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x19df4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19df50: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x19DF50u;
    {
        const bool branch_taken_0x19df50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19df50) {
            ctx->pc = 0x19DF98u;
            goto label_19df98;
        }
    }
    ctx->pc = 0x19DF58u;
    // 0x19df58: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19df58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19df5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19df60: 0x2463f200  addiu       $v1, $v1, -0xE00
    ctx->pc = 0x19df60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963712));
    // 0x19df64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19df64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19df68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19df6c: 0x400008  jr          $v0
    ctx->pc = 0x19DF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DF74u: goto label_19df74;
            case 0x19DF98u: goto label_19df98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DF6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19DF74u;
label_19df74:
    // 0x19df74: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19df74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19df78: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x19df78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19df7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19df80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19df80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df84: 0x248491d0  addiu       $a0, $a0, -0x6E30
    ctx->pc = 0x19df84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939088));
    // 0x19df88: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DF88u;
    SET_GPR_U32(ctx, 31, 0x19DF90u);
    ctx->pc = 0x19DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF88u;
    // 0x19df8c: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DF88u, 0x19DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF90u;
label_19df90:
    // 0x19df90: 0x100002cd  b           . + 4 + (0x2CD << 2)
    ctx->pc = 0x19DF90u;
    {
        const bool branch_taken_0x19df90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19df90) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DF98u;
label_19df98:
    // 0x19df98: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19df98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19df9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19dfa0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19dfa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfa8: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19dfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19dfac: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19DFACu;
    SET_GPR_U32(ctx, 31, 0x19DFB4u);
    ctx->pc = 0x19DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFACu;
    // 0x19dfb0: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19DFACu, 0x19DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFB4u;
label_19dfb4:
    // 0x19dfb4: 0x100002c4  b           . + 4 + (0x2C4 << 2)
    ctx->pc = 0x19DFB4u;
    {
        const bool branch_taken_0x19dfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dfb4) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19DFBCu;
label_19dfbc:
    // 0x19dfbc: 0x14a40027  bne         $a1, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x19DFBCu;
    {
        const bool branch_taken_0x19dfbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x19dfbc) {
            ctx->pc = 0x19E05Cu;
            goto label_19e05c;
        }
    }
    ctx->pc = 0x19DFC4u;
    // 0x19dfc4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19dfc8: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x19dfc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x19dfcc: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x19dfccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19dfd0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x19DFD0u;
    {
        const bool branch_taken_0x19dfd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dfd0) {
            ctx->pc = 0x19E038u;
            goto label_19e038;
        }
    }
    ctx->pc = 0x19DFD8u;
    // 0x19dfd8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19dfdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19dfe0: 0x2463f1b0  addiu       $v1, $v1, -0xE50
    ctx->pc = 0x19dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963632));
    // 0x19dfe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19dfe8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19dfec: 0x400008  jr          $v0
    ctx->pc = 0x19DFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DFF4u: goto label_19dff4;
            case 0x19E014u: goto label_19e014;
            case 0x19E038u: goto label_19e038;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DFECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19DFF4u;
label_19dff4:
    // 0x19dff4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19dff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dffc: 0xa044da08  sb          $a0, -0x25F8($v0)
    ctx->pc = 0x19dffcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 4));
    // 0x19e000: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e004: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E004u;
    SET_GPR_U32(ctx, 31, 0x19E00Cu);
    ctx->pc = 0x19E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E004u;
    // 0x19e008: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E004u, 0x19E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E00Cu;
label_19e00c:
    // 0x19e00c: 0x100002ae  b           . + 4 + (0x2AE << 2)
    ctx->pc = 0x19E00Cu;
    {
        const bool branch_taken_0x19e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e00c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E014u;
label_19e014:
    // 0x19e014: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19e014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19e018: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x19e018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19e01c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e024: 0x2484b290  addiu       $a0, $a0, -0x4D70
    ctx->pc = 0x19e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947472));
    // 0x19e028: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E028u;
    SET_GPR_U32(ctx, 31, 0x19E030u);
    ctx->pc = 0x19E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E028u;
    // 0x19e02c: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E028u, 0x19E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E030u;
label_19e030:
    // 0x19e030: 0x100002a5  b           . + 4 + (0x2A5 << 2)
    ctx->pc = 0x19E030u;
    {
        const bool branch_taken_0x19e030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e030) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E038u;
label_19e038:
    // 0x19e038: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e03c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19e040: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e044: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e048: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19e048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19e04c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E04Cu;
    SET_GPR_U32(ctx, 31, 0x19E054u);
    ctx->pc = 0x19E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E04Cu;
    // 0x19e050: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E04Cu, 0x19E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E054u;
label_19e054:
    // 0x19e054: 0x1000029c  b           . + 4 + (0x29C << 2)
    ctx->pc = 0x19E054u;
    {
        const bool branch_taken_0x19e054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e054) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E05Cu;
label_19e05c:
    // 0x19e05c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e060: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e064: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E064u;
    SET_GPR_U32(ctx, 31, 0x19E06Cu);
    ctx->pc = 0x19E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E064u;
    // 0x19e068: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E064u, 0x19E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E06Cu;
label_19e06c:
    // 0x19e06c: 0x10000296  b           . + 4 + (0x296 << 2)
    ctx->pc = 0x19E06Cu;
    {
        const bool branch_taken_0x19e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e06c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E074u;
label_19e074:
    // 0x19e074: 0xc067b00  jal         func_19EC00
    ctx->pc = 0x19E074u;
    SET_GPR_U32(ctx, 31, 0x19E07Cu);
    ctx->pc = 0x19EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC00u, 0x19E074u, 0x19E07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E07Cu;
label_19e07c:
    // 0x19e07c: 0xc067b30  jal         func_19ECC0
    ctx->pc = 0x19E07Cu;
    SET_GPR_U32(ctx, 31, 0x19E084u);
    ctx->pc = 0x19ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ECC0u, 0x19E07Cu, 0x19E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E084u;
label_19e084:
    // 0x19e084: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e088: 0x9442da88  lhu         $v0, -0x2578($v0)
    ctx->pc = 0x19e088u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957704)));
    // 0x19e08c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19e08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19e090: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E090u;
    {
        const bool branch_taken_0x19e090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e090) {
            ctx->pc = 0x19E0B8u;
            goto label_19e0b8;
        }
    }
    ctx->pc = 0x19E098u;
    // 0x19e098: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19e098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19e09c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0a0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E0A0u;
    SET_GPR_U32(ctx, 31, 0x19E0A8u);
    ctx->pc = 0x19E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E0A0u;
    // 0x19e0a4: 0x2484bf20  addiu       $a0, $a0, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E0A0u, 0x19E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0A8u;
label_19e0a8:
    // 0x19e0a8: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E0A8u;
    SET_GPR_U32(ctx, 31, 0x19E0B0u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E0A8u, 0x19E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0B0u;
label_19e0b0:
    // 0x19e0b0: 0x10000285  b           . + 4 + (0x285 << 2)
    ctx->pc = 0x19E0B0u;
    {
        const bool branch_taken_0x19e0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e0b0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E0B8u;
label_19e0b8:
    // 0x19e0b8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e0bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0c0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E0C0u;
    SET_GPR_U32(ctx, 31, 0x19E0C8u);
    ctx->pc = 0x19E0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E0C0u;
    // 0x19e0c4: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E0C0u, 0x19E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0C8u;
label_19e0c8:
    // 0x19e0c8: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E0C8u;
    SET_GPR_U32(ctx, 31, 0x19E0D0u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E0C8u, 0x19E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0D0u;
label_19e0d0:
    // 0x19e0d0: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19E0D0u;
    SET_GPR_U32(ctx, 31, 0x19E0D8u);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19E0D0u, 0x19E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0D8u;
label_19e0d8:
    // 0x19e0d8: 0x1000027b  b           . + 4 + (0x27B << 2)
    ctx->pc = 0x19E0D8u;
    {
        const bool branch_taken_0x19e0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e0d8) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E0E0u;
label_19e0e0:
    // 0x19e0e0: 0xc062924  jal         func_18A490
    ctx->pc = 0x19E0E0u;
    SET_GPR_U32(ctx, 31, 0x19E0E8u);
    ctx->pc = 0x18A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A490u, 0x19E0E0u, 0x19E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0E8u;
label_19e0e8:
    // 0x19e0e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19e0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e0ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e0f0: 0x106200ad  beq         $v1, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x19E0F0u;
    {
        const bool branch_taken_0x19e0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19e0f0) {
            ctx->pc = 0x19E3A8u;
            goto label_19e3a8;
        }
    }
    ctx->pc = 0x19E0F8u;
    // 0x19e0f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e0fc: 0x106200aa  beq         $v1, $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x19E0FCu;
    {
        const bool branch_taken_0x19e0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19e0fc) {
            ctx->pc = 0x19E3A8u;
            goto label_19e3a8;
        }
    }
    ctx->pc = 0x19E104u;
    // 0x19e104: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E104u;
    {
        const bool branch_taken_0x19e104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e104) {
            ctx->pc = 0x19E114u;
            goto label_19e114;
        }
    }
    ctx->pc = 0x19E10Cu;
    // 0x19e10c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x19E10Cu;
    {
        const bool branch_taken_0x19e10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e10c) {
            ctx->pc = 0x19E47Cu;
            goto label_19e47c;
        }
    }
    ctx->pc = 0x19E114u;
label_19e114:
    // 0x19e114: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e118: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19e118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19e11c: 0x8045d9f8  lb          $a1, -0x2608($v0)
    ctx->pc = 0x19e11cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x19e120: 0x54a30033  bnel        $a1, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x19E120u;
    {
        const bool branch_taken_0x19e120 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x19e120) {
            ctx->pc = 0x19E124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E120u;
            // 0x19e124: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E1F0u;
            goto label_19e1f0;
        }
    }
    ctx->pc = 0x19E128u;
    // 0x19e128: 0xc067bc4  jal         func_19EF10
    ctx->pc = 0x19E128u;
    SET_GPR_U32(ctx, 31, 0x19E130u);
    ctx->pc = 0x19E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E128u;
    // 0x19e12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF10u, 0x19E128u, 0x19E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E130u;
label_19e130:
    // 0x19e130: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x19e130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x19e134: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x19E134u;
    {
        const bool branch_taken_0x19e134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e134) {
            ctx->pc = 0x19E1C0u;
            goto label_19e1c0;
        }
    }
    ctx->pc = 0x19E13Cu;
    // 0x19e13c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19e140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19e140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e144: 0x2463f190  addiu       $v1, $v1, -0xE70
    ctx->pc = 0x19e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x19e148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e14c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e150: 0x400008  jr          $v0
    ctx->pc = 0x19E150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E158u: goto label_19e158;
            case 0x19E170u: goto label_19e170;
            case 0x19E180u: goto label_19e180;
            case 0x19E190u: goto label_19e190;
            case 0x19E1A0u: goto label_19e1a0;
            case 0x19E1B0u: goto label_19e1b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E150u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19E158u;
label_19e158:
    // 0x19e158: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e15c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e160: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E160u;
    SET_GPR_U32(ctx, 31, 0x19E168u);
    ctx->pc = 0x19E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E160u;
    // 0x19e164: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E160u, 0x19E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E168u;
label_19e168:
    // 0x19e168: 0x10000257  b           . + 4 + (0x257 << 2)
    ctx->pc = 0x19E168u;
    {
        const bool branch_taken_0x19e168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e168) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E170u;
label_19e170:
    // 0x19e170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e174: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e178: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x19E178u;
    {
        const bool branch_taken_0x19e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E178u;
        // 0x19e17c: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e178) {
            ctx->pc = 0x19E1D8u;
            goto label_19e1d8;
        }
    }
    ctx->pc = 0x19E180u;
label_19e180:
    // 0x19e180: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19e180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e184: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e188: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19E188u;
    {
        const bool branch_taken_0x19e188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E188u;
        // 0x19e18c: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e188) {
            ctx->pc = 0x19E1D8u;
            goto label_19e1d8;
        }
    }
    ctx->pc = 0x19E190u;
label_19e190:
    // 0x19e190: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19e190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19e194: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e198: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19E198u;
    {
        const bool branch_taken_0x19e198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E198u;
        // 0x19e19c: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e198) {
            ctx->pc = 0x19E1D8u;
            goto label_19e1d8;
        }
    }
    ctx->pc = 0x19E1A0u;
label_19e1a0:
    // 0x19e1a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19e1a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e1a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19E1A8u;
    {
        const bool branch_taken_0x19e1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1A8u;
        // 0x19e1ac: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1a8) {
            ctx->pc = 0x19E1D8u;
            goto label_19e1d8;
        }
    }
    ctx->pc = 0x19E1B0u;
label_19e1b0:
    // 0x19e1b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19e1b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e1b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19E1B8u;
    {
        const bool branch_taken_0x19e1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1B8u;
        // 0x19e1bc: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1b8) {
            ctx->pc = 0x19E1D8u;
            goto label_19e1d8;
        }
    }
    ctx->pc = 0x19E1C0u;
label_19e1c0:
    // 0x19e1c0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e1c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1c8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E1C8u;
    SET_GPR_U32(ctx, 31, 0x19E1D0u);
    ctx->pc = 0x19E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1C8u;
    // 0x19e1cc: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E1C8u, 0x19E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1D0u;
label_19e1d0:
    // 0x19e1d0: 0x1000023d  b           . + 4 + (0x23D << 2)
    ctx->pc = 0x19E1D0u;
    {
        const bool branch_taken_0x19e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e1d0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E1D8u;
label_19e1d8:
    // 0x19e1d8: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x19e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x19e1dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1e0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E1E0u;
    SET_GPR_U32(ctx, 31, 0x19E1E8u);
    ctx->pc = 0x19E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1E0u;
    // 0x19e1e4: 0x24843980  addiu       $a0, $a0, 0x3980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E1E0u, 0x19E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1E8u;
label_19e1e8:
    // 0x19e1e8: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x19E1E8u;
    {
        const bool branch_taken_0x19e1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e1e8) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E1F0u;
label_19e1f0:
    // 0x19e1f0: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19E1F0u;
    {
        const bool branch_taken_0x19e1f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e1f0) {
            ctx->pc = 0x19E1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E1F0u;
            // 0x19e1f4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E270u;
            goto label_19e270;
        }
    }
    ctx->pc = 0x19E1F8u;
    // 0x19e1f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e1fc: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x19e1fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x19e200: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x19e200u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19e204: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x19E204u;
    {
        const bool branch_taken_0x19e204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e204) {
            ctx->pc = 0x19E24Cu;
            goto label_19e24c;
        }
    }
    ctx->pc = 0x19E20Cu;
    // 0x19e20c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19e210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19e210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e214: 0x2463f140  addiu       $v1, $v1, -0xEC0
    ctx->pc = 0x19e214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x19e218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e21c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e220: 0x400008  jr          $v0
    ctx->pc = 0x19E220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E228u: goto label_19e228;
            case 0x19E24Cu: goto label_19e24c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E220u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19E228u;
label_19e228:
    // 0x19e228: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e22c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x19e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19e230: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e234: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e238: 0x24849420  addiu       $a0, $a0, -0x6BE0
    ctx->pc = 0x19e238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939680));
    // 0x19e23c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E23Cu;
    SET_GPR_U32(ctx, 31, 0x19E244u);
    ctx->pc = 0x19E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E23Cu;
    // 0x19e240: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E23Cu, 0x19E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E244u;
label_19e244:
    // 0x19e244: 0x10000220  b           . + 4 + (0x220 << 2)
    ctx->pc = 0x19E244u;
    {
        const bool branch_taken_0x19e244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e244) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E24Cu;
label_19e24c:
    // 0x19e24c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e250: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19e250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19e254: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e25c: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19e260: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E260u;
    SET_GPR_U32(ctx, 31, 0x19E268u);
    ctx->pc = 0x19E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E260u;
    // 0x19e264: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E260u, 0x19E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E268u;
label_19e268:
    // 0x19e268: 0x10000217  b           . + 4 + (0x217 << 2)
    ctx->pc = 0x19E268u;
    {
        const bool branch_taken_0x19e268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e268) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E270u;
label_19e270:
    // 0x19e270: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19E270u;
    {
        const bool branch_taken_0x19e270 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e270) {
            ctx->pc = 0x19E274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E270u;
            // 0x19e274: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E2F0u;
            goto label_19e2f0;
        }
    }
    ctx->pc = 0x19E278u;
    // 0x19e278: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e27c: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x19e27cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x19e280: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x19e280u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19e284: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x19E284u;
    {
        const bool branch_taken_0x19e284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e284) {
            ctx->pc = 0x19E2CCu;
            goto label_19e2cc;
        }
    }
    ctx->pc = 0x19E28Cu;
    // 0x19e28c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19e290: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19e290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e294: 0x2463f0f0  addiu       $v1, $v1, -0xF10
    ctx->pc = 0x19e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19e298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e29c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e2a0: 0x400008  jr          $v0
    ctx->pc = 0x19E2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E2A8u: goto label_19e2a8;
            case 0x19E2CCu: goto label_19e2cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E2A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19E2A8u;
label_19e2a8:
    // 0x19e2a8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e2ac: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x19e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19e2b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e2b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2b8: 0x248491d0  addiu       $a0, $a0, -0x6E30
    ctx->pc = 0x19e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939088));
    // 0x19e2bc: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E2BCu;
    SET_GPR_U32(ctx, 31, 0x19E2C4u);
    ctx->pc = 0x19E2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E2BCu;
    // 0x19e2c0: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E2BCu, 0x19E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2C4u;
label_19e2c4:
    // 0x19e2c4: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x19E2C4u;
    {
        const bool branch_taken_0x19e2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e2c4) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E2CCu;
label_19e2cc:
    // 0x19e2cc: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e2d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19e2d4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e2d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2dc: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19e2e0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E2E0u;
    SET_GPR_U32(ctx, 31, 0x19E2E8u);
    ctx->pc = 0x19E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E2E0u;
    // 0x19e2e4: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E2E0u, 0x19E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2E8u;
label_19e2e8:
    // 0x19e2e8: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x19E2E8u;
    {
        const bool branch_taken_0x19e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e2e8) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E2F0u;
label_19e2f0:
    // 0x19e2f0: 0x14a40027  bne         $a1, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x19E2F0u;
    {
        const bool branch_taken_0x19e2f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x19e2f0) {
            ctx->pc = 0x19E390u;
            goto label_19e390;
        }
    }
    ctx->pc = 0x19E2F8u;
    // 0x19e2f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e2fc: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x19e2fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x19e300: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x19e300u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19e304: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x19E304u;
    {
        const bool branch_taken_0x19e304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e304) {
            ctx->pc = 0x19E36Cu;
            goto label_19e36c;
        }
    }
    ctx->pc = 0x19E30Cu;
    // 0x19e30c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19e310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19e310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e314: 0x2463f0a0  addiu       $v1, $v1, -0xF60
    ctx->pc = 0x19e314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963360));
    // 0x19e318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e31c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e320: 0x400008  jr          $v0
    ctx->pc = 0x19E320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E328u: goto label_19e328;
            case 0x19E348u: goto label_19e348;
            case 0x19E36Cu: goto label_19e36c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E320u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19E328u;
label_19e328:
    // 0x19e328: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e32c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e330: 0xa044da08  sb          $a0, -0x25F8($v0)
    ctx->pc = 0x19e330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 4));
    // 0x19e334: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e338: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E338u;
    SET_GPR_U32(ctx, 31, 0x19E340u);
    ctx->pc = 0x19E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E338u;
    // 0x19e33c: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E338u, 0x19E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E340u;
label_19e340:
    // 0x19e340: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x19E340u;
    {
        const bool branch_taken_0x19e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e340) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E348u;
label_19e348:
    // 0x19e348: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19e348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19e34c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x19e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19e350: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e354: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e358: 0x2484b290  addiu       $a0, $a0, -0x4D70
    ctx->pc = 0x19e358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947472));
    // 0x19e35c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E35Cu;
    SET_GPR_U32(ctx, 31, 0x19E364u);
    ctx->pc = 0x19E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E35Cu;
    // 0x19e360: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E35Cu, 0x19E364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E364u;
label_19e364:
    // 0x19e364: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x19E364u;
    {
        const bool branch_taken_0x19e364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e364) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E36Cu;
label_19e36c:
    // 0x19e36c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e370: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19e370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19e374: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e37c: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19e37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19e380: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E380u;
    SET_GPR_U32(ctx, 31, 0x19E388u);
    ctx->pc = 0x19E384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E380u;
    // 0x19e384: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E380u, 0x19E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E388u;
label_19e388:
    // 0x19e388: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x19E388u;
    {
        const bool branch_taken_0x19e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e388) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E390u;
label_19e390:
    // 0x19e390: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e394: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e398: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E398u;
    SET_GPR_U32(ctx, 31, 0x19E3A0u);
    ctx->pc = 0x19E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E398u;
    // 0x19e39c: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E398u, 0x19E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3A0u;
label_19e3a0:
    // 0x19e3a0: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x19E3A0u;
    {
        const bool branch_taken_0x19e3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e3a0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E3A8u;
label_19e3a8:
    // 0x19e3a8: 0xc067b00  jal         func_19EC00
    ctx->pc = 0x19E3A8u;
    SET_GPR_U32(ctx, 31, 0x19E3B0u);
    ctx->pc = 0x19EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC00u, 0x19E3A8u, 0x19E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3B0u;
label_19e3b0:
    // 0x19e3b0: 0xc067b30  jal         func_19ECC0
    ctx->pc = 0x19E3B0u;
    SET_GPR_U32(ctx, 31, 0x19E3B8u);
    ctx->pc = 0x19ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ECC0u, 0x19E3B0u, 0x19E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3B8u;
label_19e3b8:
    // 0x19e3b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e3bc: 0x9442da88  lhu         $v0, -0x2578($v0)
    ctx->pc = 0x19e3bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957704)));
    // 0x19e3c0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19e3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19e3c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19E3C4u;
    {
        const bool branch_taken_0x19e3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e3c4) {
            ctx->pc = 0x19E418u;
            goto label_19e418;
        }
    }
    ctx->pc = 0x19E3CCu;
    // 0x19e3cc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19e3d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19e3d4: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x19e3d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x19e3d8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E3D8u;
    {
        const bool branch_taken_0x19e3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19e3d8) {
            ctx->pc = 0x19E3F8u;
            goto label_19e3f8;
        }
    }
    ctx->pc = 0x19E3E0u;
    // 0x19e3e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19e3e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e3e8: 0x9463ec44  lhu         $v1, -0x13BC($v1)
    ctx->pc = 0x19e3e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962244)));
    // 0x19e3ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19e3f0: 0xc0d5fe4  jal         func_357F90
    ctx->pc = 0x19E3F0u;
    SET_GPR_U32(ctx, 31, 0x19E3F8u);
    ctx->pc = 0x19E3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3F0u;
    // 0x19e3f4: 0xa443ec44  sh          $v1, -0x13BC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294962244), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357F90u, 0x19E3F0u, 0x19E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3F8u;
label_19e3f8:
    // 0x19e3f8: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19e3fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e400: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E400u;
    SET_GPR_U32(ctx, 31, 0x19E408u);
    ctx->pc = 0x19E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E400u;
    // 0x19e404: 0x2484bf20  addiu       $a0, $a0, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E400u, 0x19E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E408u;
label_19e408:
    // 0x19e408: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E408u;
    SET_GPR_U32(ctx, 31, 0x19E410u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E408u, 0x19E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E410u;
label_19e410:
    // 0x19e410: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x19E410u;
    {
        const bool branch_taken_0x19e410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e410) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E418u;
label_19e418:
    // 0x19e418: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x19e418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x19e41c: 0x9042f364  lbu         $v0, -0xC9C($v0)
    ctx->pc = 0x19e41cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964068)));
    // 0x19e420: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19e420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19e424: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19E424u;
    {
        const bool branch_taken_0x19e424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e424) {
            ctx->pc = 0x19E454u;
            goto label_19e454;
        }
    }
    ctx->pc = 0x19E42Cu;
    // 0x19e42c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x19e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x19e430: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e434: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E434u;
    SET_GPR_U32(ctx, 31, 0x19E43Cu);
    ctx->pc = 0x19E438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E434u;
    // 0x19e438: 0x248409d0  addiu       $a0, $a0, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E434u, 0x19E43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E43Cu;
label_19e43c:
    // 0x19e43c: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E43Cu;
    SET_GPR_U32(ctx, 31, 0x19E444u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E43Cu, 0x19E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E444u;
label_19e444:
    // 0x19e444: 0xc068288  jal         func_1A0A20
    ctx->pc = 0x19E444u;
    SET_GPR_U32(ctx, 31, 0x19E44Cu);
    ctx->pc = 0x1A0A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0A20u, 0x19E444u, 0x19E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E44Cu;
label_19e44c:
    // 0x19e44c: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x19E44Cu;
    {
        const bool branch_taken_0x19e44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e44c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E454u;
label_19e454:
    // 0x19e454: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e45c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E45Cu;
    SET_GPR_U32(ctx, 31, 0x19E464u);
    ctx->pc = 0x19E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E45Cu;
    // 0x19e460: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E45Cu, 0x19E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E464u;
label_19e464:
    // 0x19e464: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E464u;
    SET_GPR_U32(ctx, 31, 0x19E46Cu);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E464u, 0x19E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E46Cu;
label_19e46c:
    // 0x19e46c: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19E46Cu;
    SET_GPR_U32(ctx, 31, 0x19E474u);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19E46Cu, 0x19E474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E474u;
label_19e474:
    // 0x19e474: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x19E474u;
    {
        const bool branch_taken_0x19e474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e474) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E47Cu;
label_19e47c:
    // 0x19e47c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e480: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e484: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E484u;
    SET_GPR_U32(ctx, 31, 0x19E48Cu);
    ctx->pc = 0x19E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E484u;
    // 0x19e488: 0x24840ee0  addiu       $a0, $a0, 0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E484u, 0x19E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E48Cu;
label_19e48c:
    // 0x19e48c: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x19E48Cu;
    {
        const bool branch_taken_0x19e48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e48c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E494u;
label_19e494:
    // 0x19e494: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19e498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e49c: 0x9045db10  lbu         $a1, -0x24F0($v0)
    ctx->pc = 0x19e49cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x19e4a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19e4a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e4a8: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x19e4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_19e4ac:
    // 0x19e4ac: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x19e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x19e4b0: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x19e4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x19e4b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E4B4u;
    {
        const bool branch_taken_0x19e4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e4b4) {
            ctx->pc = 0x19E4C8u;
            goto label_19e4c8;
        }
    }
    ctx->pc = 0x19E4BCu;
    // 0x19e4bc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x19e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19e4c0: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x19e4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x19e4c4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x19e4c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19e4c8:
    // 0x19e4c8: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x19e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19e4cc: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x19e4ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e4d0: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x19e4d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19e4d4: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x19E4D4u;
    {
        const bool branch_taken_0x19e4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e4d4) {
            ctx->pc = 0x19E4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E4D4u;
            // 0x19e4d8: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E4ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e4ac;
        }
    }
    ctx->pc = 0x19E4DCu;
    // 0x19e4dc: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x19e4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19e4e0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19e4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19e4e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19E4E4u;
    {
        const bool branch_taken_0x19e4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e4e4) {
            ctx->pc = 0x19E51Cu;
            goto label_19e51c;
        }
    }
    ctx->pc = 0x19E4ECu;
    // 0x19e4ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e4f0: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x19e4f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x19e4f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19e4f8: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x19e4f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x19e4fc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E4FCu;
    {
        const bool branch_taken_0x19e4fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e4fc) {
            ctx->pc = 0x19E51Cu;
            goto label_19e51c;
        }
    }
    ctx->pc = 0x19E504u;
    // 0x19e504: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e50c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E50Cu;
    SET_GPR_U32(ctx, 31, 0x19E514u);
    ctx->pc = 0x19E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E50Cu;
    // 0x19e510: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E50Cu, 0x19E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E514u;
label_19e514:
    // 0x19e514: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x19E514u;
    {
        const bool branch_taken_0x19e514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e514) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E51Cu;
label_19e51c:
    // 0x19e51c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e520: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e524: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E524u;
    SET_GPR_U32(ctx, 31, 0x19E52Cu);
    ctx->pc = 0x19E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E524u;
    // 0x19e528: 0x24840ee0  addiu       $a0, $a0, 0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E524u, 0x19E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E52Cu;
label_19e52c:
    // 0x19e52c: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x19E52Cu;
    {
        const bool branch_taken_0x19e52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e52c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E534u;
label_19e534:
    // 0x19e534: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e53c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E53Cu;
    SET_GPR_U32(ctx, 31, 0x19E544u);
    ctx->pc = 0x19E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E53Cu;
    // 0x19e540: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E53Cu, 0x19E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E544u;
label_19e544:
    // 0x19e544: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x19E544u;
    {
        const bool branch_taken_0x19e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e544) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E54Cu;
label_19e54c:
    // 0x19e54c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x19e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x19e550: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19e550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19e554: 0x9042f364  lbu         $v0, -0xC9C($v0)
    ctx->pc = 0x19e554u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964068)));
    // 0x19e558: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19e558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19e55c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x19E55Cu;
    {
        const bool branch_taken_0x19e55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E55Cu;
        // 0x19e560: 0xa460da88  sh          $zero, -0x2578($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294957704), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e55c) {
            ctx->pc = 0x19E66Cu;
            goto label_19e66c;
        }
    }
    ctx->pc = 0x19E564u;
    // 0x19e564: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e568: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x19e568u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x19e56c: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x19e56cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x19e570: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x19E570u;
    {
        const bool branch_taken_0x19e570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e570) {
            ctx->pc = 0x19E66Cu;
            goto label_19e66c;
        }
    }
    ctx->pc = 0x19E578u;
    // 0x19e578: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e57c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19e580: 0x9042db00  lbu         $v0, -0x2500($v0)
    ctx->pc = 0x19e580u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957824)));
    // 0x19e584: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19e584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19e588: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19E588u;
    {
        const bool branch_taken_0x19e588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19e588) {
            ctx->pc = 0x19E5B8u;
            goto label_19e5b8;
        }
    }
    ctx->pc = 0x19E590u;
    // 0x19e590: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e594: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e598: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E598u;
    SET_GPR_U32(ctx, 31, 0x19E5A0u);
    ctx->pc = 0x19E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E598u;
    // 0x19e59c: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E598u, 0x19E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5A0u;
label_19e5a0:
    // 0x19e5a0: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E5A0u;
    SET_GPR_U32(ctx, 31, 0x19E5A8u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E5A0u, 0x19E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5A8u;
label_19e5a8:
    // 0x19e5a8: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19E5A8u;
    SET_GPR_U32(ctx, 31, 0x19E5B0u);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19E5A8u, 0x19E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5B0u;
label_19e5b0:
    // 0x19e5b0: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x19E5B0u;
    {
        const bool branch_taken_0x19e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5b0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E5B8u;
label_19e5b8:
    // 0x19e5b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e5bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19e5c0: 0x8444da18  lh          $a0, -0x25E8($v0)
    ctx->pc = 0x19e5c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957592)));
    // 0x19e5c4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x19E5C4u;
    {
        const bool branch_taken_0x19e5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19e5c4) {
            ctx->pc = 0x19E644u;
            goto label_19e644;
        }
    }
    ctx->pc = 0x19E5CCu;
    // 0x19e5cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e5d0: 0x9442db64  lhu         $v0, -0x249C($v0)
    ctx->pc = 0x19e5d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957924)));
    // 0x19e5d4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x19e5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19e5d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19E5D8u;
    {
        const bool branch_taken_0x19e5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e5d8) {
            ctx->pc = 0x19E608u;
            goto label_19e608;
        }
    }
    ctx->pc = 0x19E5E0u;
    // 0x19e5e0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e5e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5e8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E5E8u;
    SET_GPR_U32(ctx, 31, 0x19E5F0u);
    ctx->pc = 0x19E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5E8u;
    // 0x19e5ec: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E5E8u, 0x19E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5F0u;
label_19e5f0:
    // 0x19e5f0: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E5F0u;
    SET_GPR_U32(ctx, 31, 0x19E5F8u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E5F0u, 0x19E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5F8u;
label_19e5f8:
    // 0x19e5f8: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19E5F8u;
    SET_GPR_U32(ctx, 31, 0x19E600u);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19E5F8u, 0x19E600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E600u;
label_19e600:
    // 0x19e600: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x19E600u;
    {
        const bool branch_taken_0x19e600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e600) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E608u;
label_19e608:
    // 0x19e608: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e60c: 0x9442ddac  lhu         $v0, -0x2254($v0)
    ctx->pc = 0x19e60cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958508)));
    // 0x19e610: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x19e610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19e614: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19E614u;
    {
        const bool branch_taken_0x19e614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e614) {
            ctx->pc = 0x19E644u;
            goto label_19e644;
        }
    }
    ctx->pc = 0x19E61Cu;
    // 0x19e61c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e624: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E624u;
    SET_GPR_U32(ctx, 31, 0x19E62Cu);
    ctx->pc = 0x19E628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E624u;
    // 0x19e628: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E624u, 0x19E62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E62Cu;
label_19e62c:
    // 0x19e62c: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E62Cu;
    SET_GPR_U32(ctx, 31, 0x19E634u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E62Cu, 0x19E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E634u;
label_19e634:
    // 0x19e634: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19E634u;
    SET_GPR_U32(ctx, 31, 0x19E63Cu);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19E634u, 0x19E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E63Cu;
label_19e63c:
    // 0x19e63c: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x19E63Cu;
    {
        const bool branch_taken_0x19e63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e63c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E644u;
label_19e644:
    // 0x19e644: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x19e644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x19e648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e64c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E64Cu;
    SET_GPR_U32(ctx, 31, 0x19E654u);
    ctx->pc = 0x19E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E64Cu;
    // 0x19e650: 0x248409d0  addiu       $a0, $a0, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E64Cu, 0x19E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E654u;
label_19e654:
    // 0x19e654: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E654u;
    SET_GPR_U32(ctx, 31, 0x19E65Cu);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E654u, 0x19E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E65Cu;
label_19e65c:
    // 0x19e65c: 0xc068288  jal         func_1A0A20
    ctx->pc = 0x19E65Cu;
    SET_GPR_U32(ctx, 31, 0x19E664u);
    ctx->pc = 0x1A0A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0A20u, 0x19E65Cu, 0x19E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E664u;
label_19e664:
    // 0x19e664: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x19E664u;
    {
        const bool branch_taken_0x19e664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e664) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E66Cu;
label_19e66c:
    // 0x19e66c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e674: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E674u;
    SET_GPR_U32(ctx, 31, 0x19E67Cu);
    ctx->pc = 0x19E678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E674u;
    // 0x19e678: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E674u, 0x19E67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E67Cu;
label_19e67c:
    // 0x19e67c: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E67Cu;
    SET_GPR_U32(ctx, 31, 0x19E684u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E67Cu, 0x19E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E684u;
label_19e684:
    // 0x19e684: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19E684u;
    SET_GPR_U32(ctx, 31, 0x19E68Cu);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19E684u, 0x19E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E68Cu;
label_19e68c:
    // 0x19e68c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x19E68Cu;
    {
        const bool branch_taken_0x19e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e68c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E694u;
label_19e694:
    // 0x19e694: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e698: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e69c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E69Cu;
    SET_GPR_U32(ctx, 31, 0x19E6A4u);
    ctx->pc = 0x19E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E69Cu;
    // 0x19e6a0: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E69Cu, 0x19E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6A4u;
label_19e6a4:
    // 0x19e6a4: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x19E6A4u;
    {
        const bool branch_taken_0x19e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e6a4) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E6ACu;
label_19e6ac:
    // 0x19e6ac: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e6b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6b4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E6B4u;
    SET_GPR_U32(ctx, 31, 0x19E6BCu);
    ctx->pc = 0x19E6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6B4u;
    // 0x19e6b8: 0x24840ee0  addiu       $a0, $a0, 0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E6B4u, 0x19E6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6BCu;
label_19e6bc:
    // 0x19e6bc: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x19E6BCu;
    {
        const bool branch_taken_0x19e6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e6bc) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E6C4u;
label_19e6c4:
    // 0x19e6c4: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x19E6C4u;
    {
        const bool branch_taken_0x19e6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e6c4) {
            ctx->pc = 0x19E808u;
            goto label_19e808;
        }
    }
    ctx->pc = 0x19E6CCu;
    // 0x19e6cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e6d0: 0x24030308  addiu       $v1, $zero, 0x308
    ctx->pc = 0x19e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
    // 0x19e6d4: 0x9442daa8  lhu         $v0, -0x2558($v0)
    ctx->pc = 0x19e6d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957736)));
    // 0x19e6d8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19E6D8u;
    {
        const bool branch_taken_0x19e6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19e6d8) {
            ctx->pc = 0x19E708u;
            goto label_19e708;
        }
    }
    ctx->pc = 0x19E6E0u;
    // 0x19e6e0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e6e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6e8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E6E8u;
    SET_GPR_U32(ctx, 31, 0x19E6F0u);
    ctx->pc = 0x19E6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6E8u;
    // 0x19e6ec: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E6E8u, 0x19E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6F0u;
label_19e6f0:
    // 0x19e6f0: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E6F0u;
    SET_GPR_U32(ctx, 31, 0x19E6F8u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E6F0u, 0x19E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6F8u;
label_19e6f8:
    // 0x19e6f8: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19E6F8u;
    SET_GPR_U32(ctx, 31, 0x19E700u);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19E6F8u, 0x19E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E700u;
label_19e700:
    // 0x19e700: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x19E700u;
    {
        const bool branch_taken_0x19e700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e700) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E708u;
label_19e708:
    // 0x19e708: 0xc0628bc  jal         func_18A2F0
    ctx->pc = 0x19E708u;
    SET_GPR_U32(ctx, 31, 0x19E710u);
    ctx->pc = 0x18A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2F0u, 0x19E708u, 0x19E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E710u;
label_19e710:
    // 0x19e710: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e714: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x19e714u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x19e718: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19e718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19e71c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E71Cu;
    {
        const bool branch_taken_0x19e71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E71Cu;
        // 0x19e720: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e71c) {
            ctx->pc = 0x19E72Cu;
            goto label_19e72c;
        }
    }
    ctx->pc = 0x19E724u;
    // 0x19e724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e728: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19e728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e72c:
    // 0x19e72c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e730: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19e730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19e734: 0x8446da18  lh          $a2, -0x25E8($v0)
    ctx->pc = 0x19e734u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957592)));
    // 0x19e738: 0x10c3000e  beq         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19E738u;
    {
        const bool branch_taken_0x19e738 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19e738) {
            ctx->pc = 0x19E774u;
            goto label_19e774;
        }
    }
    ctx->pc = 0x19E740u;
    // 0x19e740: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x19e740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19e744: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e748: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x19e748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19e74c: 0x2442db64  addiu       $v0, $v0, -0x249C
    ctx->pc = 0x19e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957924));
    // 0x19e750: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19e754: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19e754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19e758: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19e75c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19e760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e764: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x19e764u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e768: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x19e768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x19e76c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x19E76Cu;
    {
        const bool branch_taken_0x19e76c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e76c) {
            ctx->pc = 0x19E79Cu;
            goto label_19e79c;
        }
    }
    ctx->pc = 0x19E774u;
label_19e774:
    // 0x19e774: 0xc067ab8  jal         func_19EAE0
    ctx->pc = 0x19E774u;
    SET_GPR_U32(ctx, 31, 0x19E77Cu);
    ctx->pc = 0x19EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EAE0u, 0x19E774u, 0x19E77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E77Cu;
label_19e77c:
    // 0x19e77c: 0xc067acc  jal         func_19EB30
    ctx->pc = 0x19E77Cu;
    SET_GPR_U32(ctx, 31, 0x19E784u);
    ctx->pc = 0x19E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E77Cu;
    // 0x19e780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EB30u, 0x19E77Cu, 0x19E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E784u;
label_19e784:
    // 0x19e784: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e788: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e78c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E78Cu;
    SET_GPR_U32(ctx, 31, 0x19E794u);
    ctx->pc = 0x19E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E78Cu;
    // 0x19e790: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E78Cu, 0x19E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E794u;
label_19e794:
    // 0x19e794: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x19E794u;
    {
        const bool branch_taken_0x19e794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e794) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E79Cu;
label_19e79c:
    // 0x19e79c: 0xc067b00  jal         func_19EC00
    ctx->pc = 0x19E79Cu;
    SET_GPR_U32(ctx, 31, 0x19E7A4u);
    ctx->pc = 0x19EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC00u, 0x19E79Cu, 0x19E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7A4u;
label_19e7a4:
    // 0x19e7a4: 0xc067b30  jal         func_19ECC0
    ctx->pc = 0x19E7A4u;
    SET_GPR_U32(ctx, 31, 0x19E7ACu);
    ctx->pc = 0x19ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ECC0u, 0x19E7A4u, 0x19E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7ACu;
label_19e7ac:
    // 0x19e7ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e7b0: 0x9442da88  lhu         $v0, -0x2578($v0)
    ctx->pc = 0x19e7b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957704)));
    // 0x19e7b4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19e7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19e7b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E7B8u;
    {
        const bool branch_taken_0x19e7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e7b8) {
            ctx->pc = 0x19E7E0u;
            goto label_19e7e0;
        }
    }
    ctx->pc = 0x19E7C0u;
    // 0x19e7c0: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19e7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19e7c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e7c8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E7C8u;
    SET_GPR_U32(ctx, 31, 0x19E7D0u);
    ctx->pc = 0x19E7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7C8u;
    // 0x19e7cc: 0x2484bf20  addiu       $a0, $a0, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E7C8u, 0x19E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7D0u;
label_19e7d0:
    // 0x19e7d0: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E7D0u;
    SET_GPR_U32(ctx, 31, 0x19E7D8u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E7D0u, 0x19E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7D8u;
label_19e7d8:
    // 0x19e7d8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x19E7D8u;
    {
        const bool branch_taken_0x19e7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e7d8) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E7E0u;
label_19e7e0:
    // 0x19e7e0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e7e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e7e8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E7E8u;
    SET_GPR_U32(ctx, 31, 0x19E7F0u);
    ctx->pc = 0x19E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7E8u;
    // 0x19e7ec: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E7E8u, 0x19E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7F0u;
label_19e7f0:
    // 0x19e7f0: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19E7F0u;
    SET_GPR_U32(ctx, 31, 0x19E7F8u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19E7F0u, 0x19E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7F8u;
label_19e7f8:
    // 0x19e7f8: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19E7F8u;
    SET_GPR_U32(ctx, 31, 0x19E800u);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19E7F8u, 0x19E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E800u;
label_19e800:
    // 0x19e800: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x19E800u;
    {
        const bool branch_taken_0x19e800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e800) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E808u;
label_19e808:
    // 0x19e808: 0xc062924  jal         func_18A490
    ctx->pc = 0x19E808u;
    SET_GPR_U32(ctx, 31, 0x19E810u);
    ctx->pc = 0x18A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A490u, 0x19E808u, 0x19E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E810u;
label_19e810:
    // 0x19e810: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19e810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e814: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19e814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e818: 0x10620079  beq         $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x19E818u;
    {
        const bool branch_taken_0x19e818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19e818) {
            ctx->pc = 0x19EA00u;
            goto label_19ea00;
        }
    }
    ctx->pc = 0x19E820u;
    // 0x19e820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e824: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x19E824u;
    {
        const bool branch_taken_0x19e824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19e824) {
            ctx->pc = 0x19EA00u;
            goto label_19ea00;
        }
    }
    ctx->pc = 0x19E82Cu;
    // 0x19e82c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E82Cu;
    {
        const bool branch_taken_0x19e82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e82c) {
            ctx->pc = 0x19E83Cu;
            goto label_19e83c;
        }
    }
    ctx->pc = 0x19E834u;
    // 0x19e834: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x19E834u;
    {
        const bool branch_taken_0x19e834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e834) {
            ctx->pc = 0x19EAA8u;
            goto label_19eaa8;
        }
    }
    ctx->pc = 0x19E83Cu;
label_19e83c:
    // 0x19e83c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e840: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19e844: 0x8045d9f8  lb          $a1, -0x2608($v0)
    ctx->pc = 0x19e844u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x19e848: 0x54a3001f  bnel        $a1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x19E848u;
    {
        const bool branch_taken_0x19e848 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x19e848) {
            ctx->pc = 0x19E84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E848u;
            // 0x19e84c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E8C8u;
            goto label_19e8c8;
        }
    }
    ctx->pc = 0x19E850u;
    // 0x19e850: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e854: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x19e854u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x19e858: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x19e858u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19e85c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x19E85Cu;
    {
        const bool branch_taken_0x19e85c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e85c) {
            ctx->pc = 0x19E8A4u;
            goto label_19e8a4;
        }
    }
    ctx->pc = 0x19E864u;
    // 0x19e864: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19e864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19e868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19e868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e86c: 0x2463f050  addiu       $v1, $v1, -0xFB0
    ctx->pc = 0x19e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963280));
    // 0x19e870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e874: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e878: 0x400008  jr          $v0
    ctx->pc = 0x19E878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E880u: goto label_19e880;
            case 0x19E8A4u: goto label_19e8a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E878u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19E880u;
label_19e880:
    // 0x19e880: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e884: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x19e884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19e888: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e88c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e890: 0x24849420  addiu       $a0, $a0, -0x6BE0
    ctx->pc = 0x19e890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939680));
    // 0x19e894: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E894u;
    SET_GPR_U32(ctx, 31, 0x19E89Cu);
    ctx->pc = 0x19E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E894u;
    // 0x19e898: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E894u, 0x19E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E89Cu;
label_19e89c:
    // 0x19e89c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x19E89Cu;
    {
        const bool branch_taken_0x19e89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e89c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E8A4u;
label_19e8a4:
    // 0x19e8a4: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e8a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19e8ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e8b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8b4: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19e8b8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E8B8u;
    SET_GPR_U32(ctx, 31, 0x19E8C0u);
    ctx->pc = 0x19E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8B8u;
    // 0x19e8bc: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E8B8u, 0x19E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8C0u;
label_19e8c0:
    // 0x19e8c0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x19E8C0u;
    {
        const bool branch_taken_0x19e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e8c0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E8C8u;
label_19e8c8:
    // 0x19e8c8: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19E8C8u;
    {
        const bool branch_taken_0x19e8c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e8c8) {
            ctx->pc = 0x19E8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E8C8u;
            // 0x19e8cc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E948u;
            goto label_19e948;
        }
    }
    ctx->pc = 0x19E8D0u;
    // 0x19e8d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e8d4: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x19e8d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x19e8d8: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x19e8d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19e8dc: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x19E8DCu;
    {
        const bool branch_taken_0x19e8dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e8dc) {
            ctx->pc = 0x19E924u;
            goto label_19e924;
        }
    }
    ctx->pc = 0x19E8E4u;
    // 0x19e8e4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19e8e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e8ec: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x19e8f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e8f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e8f8: 0x400008  jr          $v0
    ctx->pc = 0x19E8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E900u: goto label_19e900;
            case 0x19E924u: goto label_19e924;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E8F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19E900u;
label_19e900:
    // 0x19e900: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19e900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19e904: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x19e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19e908: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e90c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e910: 0x248491d0  addiu       $a0, $a0, -0x6E30
    ctx->pc = 0x19e910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939088));
    // 0x19e914: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E914u;
    SET_GPR_U32(ctx, 31, 0x19E91Cu);
    ctx->pc = 0x19E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E914u;
    // 0x19e918: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E914u, 0x19E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E91Cu;
label_19e91c:
    // 0x19e91c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x19E91Cu;
    {
        const bool branch_taken_0x19e91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e91c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E924u;
label_19e924:
    // 0x19e924: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e928: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19e928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19e92c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e930: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e934: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19e938: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E938u;
    SET_GPR_U32(ctx, 31, 0x19E940u);
    ctx->pc = 0x19E93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E938u;
    // 0x19e93c: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E938u, 0x19E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E940u;
label_19e940:
    // 0x19e940: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x19E940u;
    {
        const bool branch_taken_0x19e940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e940) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E948u;
label_19e948:
    // 0x19e948: 0x14a40027  bne         $a1, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x19E948u;
    {
        const bool branch_taken_0x19e948 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x19e948) {
            ctx->pc = 0x19E9E8u;
            goto label_19e9e8;
        }
    }
    ctx->pc = 0x19E950u;
    // 0x19e950: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e954: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x19e954u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x19e958: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x19e958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x19e95c: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x19E95Cu;
    {
        const bool branch_taken_0x19e95c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e95c) {
            ctx->pc = 0x19E9C4u;
            goto label_19e9c4;
        }
    }
    ctx->pc = 0x19E964u;
    // 0x19e964: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19e964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19e968: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19e968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e96c: 0x2463efb0  addiu       $v1, $v1, -0x1050
    ctx->pc = 0x19e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963120));
    // 0x19e970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e978: 0x400008  jr          $v0
    ctx->pc = 0x19E978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E980u: goto label_19e980;
            case 0x19E9A0u: goto label_19e9a0;
            case 0x19E9C4u: goto label_19e9c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E978u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19E980u;
label_19e980:
    // 0x19e980: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e988: 0xa044da08  sb          $a0, -0x25F8($v0)
    ctx->pc = 0x19e988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 4));
    // 0x19e98c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e990: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E990u;
    SET_GPR_U32(ctx, 31, 0x19E998u);
    ctx->pc = 0x19E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E990u;
    // 0x19e994: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E990u, 0x19E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E998u;
label_19e998:
    // 0x19e998: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x19E998u;
    {
        const bool branch_taken_0x19e998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e998) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E9A0u;
label_19e9a0:
    // 0x19e9a0: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19e9a4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x19e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19e9a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e9ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e9b0: 0x2484b290  addiu       $a0, $a0, -0x4D70
    ctx->pc = 0x19e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947472));
    // 0x19e9b4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E9B4u;
    SET_GPR_U32(ctx, 31, 0x19E9BCu);
    ctx->pc = 0x19E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9B4u;
    // 0x19e9b8: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E9B4u, 0x19E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9BCu;
label_19e9bc:
    // 0x19e9bc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x19E9BCu;
    {
        const bool branch_taken_0x19e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e9bc) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E9C4u;
label_19e9c4:
    // 0x19e9c4: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e9c8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19e9cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19e9d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e9d4: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x19e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x19e9d8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E9D8u;
    SET_GPR_U32(ctx, 31, 0x19E9E0u);
    ctx->pc = 0x19E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9D8u;
    // 0x19e9dc: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E9D8u, 0x19E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9E0u;
label_19e9e0:
    // 0x19e9e0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x19E9E0u;
    {
        const bool branch_taken_0x19e9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e9e0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19E9E8u;
label_19e9e8:
    // 0x19e9e8: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x19e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x19e9ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e9f0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19E9F0u;
    SET_GPR_U32(ctx, 31, 0x19E9F8u);
    ctx->pc = 0x19E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9F0u;
    // 0x19e9f4: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19E9F0u, 0x19E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9F8u;
label_19e9f8:
    // 0x19e9f8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x19E9F8u;
    {
        const bool branch_taken_0x19e9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e9f8) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19EA00u;
label_19ea00:
    // 0x19ea00: 0xc067b00  jal         func_19EC00
    ctx->pc = 0x19EA00u;
    SET_GPR_U32(ctx, 31, 0x19EA08u);
    ctx->pc = 0x19EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC00u, 0x19EA00u, 0x19EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA08u;
label_19ea08:
    // 0x19ea08: 0xc067b30  jal         func_19ECC0
    ctx->pc = 0x19EA08u;
    SET_GPR_U32(ctx, 31, 0x19EA10u);
    ctx->pc = 0x19ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ECC0u, 0x19EA08u, 0x19EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA10u;
label_19ea10:
    // 0x19ea10: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ea14: 0x9442da88  lhu         $v0, -0x2578($v0)
    ctx->pc = 0x19ea14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957704)));
    // 0x19ea18: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19ea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19ea1c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19EA1Cu;
    {
        const bool branch_taken_0x19ea1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea1c) {
            ctx->pc = 0x19EA44u;
            goto label_19ea44;
        }
    }
    ctx->pc = 0x19EA24u;
    // 0x19ea24: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x19ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x19ea28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ea28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea2c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19EA2Cu;
    SET_GPR_U32(ctx, 31, 0x19EA34u);
    ctx->pc = 0x19EA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA2Cu;
    // 0x19ea30: 0x2484bf20  addiu       $a0, $a0, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19EA2Cu, 0x19EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA34u;
label_19ea34:
    // 0x19ea34: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19EA34u;
    SET_GPR_U32(ctx, 31, 0x19EA3Cu);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19EA34u, 0x19EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA3Cu;
label_19ea3c:
    // 0x19ea3c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19EA3Cu;
    {
        const bool branch_taken_0x19ea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea3c) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19EA44u;
label_19ea44:
    // 0x19ea44: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x19ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x19ea48: 0x9042f364  lbu         $v0, -0xC9C($v0)
    ctx->pc = 0x19ea48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964068)));
    // 0x19ea4c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19ea50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19EA50u;
    {
        const bool branch_taken_0x19ea50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea50) {
            ctx->pc = 0x19EA80u;
            goto label_19ea80;
        }
    }
    ctx->pc = 0x19EA58u;
    // 0x19ea58: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x19ea58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x19ea5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ea5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea60: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19EA60u;
    SET_GPR_U32(ctx, 31, 0x19EA68u);
    ctx->pc = 0x19EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA60u;
    // 0x19ea64: 0x248409d0  addiu       $a0, $a0, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19EA60u, 0x19EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA68u;
label_19ea68:
    // 0x19ea68: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19EA68u;
    SET_GPR_U32(ctx, 31, 0x19EA70u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19EA68u, 0x19EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA70u;
label_19ea70:
    // 0x19ea70: 0xc068288  jal         func_1A0A20
    ctx->pc = 0x19EA70u;
    SET_GPR_U32(ctx, 31, 0x19EA78u);
    ctx->pc = 0x1A0A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0A20u, 0x19EA70u, 0x19EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA78u;
label_19ea78:
    // 0x19ea78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19EA78u;
    {
        const bool branch_taken_0x19ea78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea78) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19EA80u;
label_19ea80:
    // 0x19ea80: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19ea84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ea84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea88: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19EA88u;
    SET_GPR_U32(ctx, 31, 0x19EA90u);
    ctx->pc = 0x19EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA88u;
    // 0x19ea8c: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19EA88u, 0x19EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA90u;
label_19ea90:
    // 0x19ea90: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19EA90u;
    SET_GPR_U32(ctx, 31, 0x19EA98u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19EA90u, 0x19EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA98u;
label_19ea98:
    // 0x19ea98: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19EA98u;
    SET_GPR_U32(ctx, 31, 0x19EAA0u);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19EA98u, 0x19EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAA0u;
label_19eaa0:
    // 0x19eaa0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19EAA0u;
    {
        const bool branch_taken_0x19eaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eaa0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19EAA8u;
label_19eaa8:
    // 0x19eaa8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x19eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19eaac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19eaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eab0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x19EAB0u;
    SET_GPR_U32(ctx, 31, 0x19EAB8u);
    ctx->pc = 0x19EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAB0u;
    // 0x19eab4: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x19EAB0u, 0x19EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAB8u;
label_19eab8:
    // 0x19eab8: 0xc068244  jal         func_1A0910
    ctx->pc = 0x19EAB8u;
    SET_GPR_U32(ctx, 31, 0x19EAC0u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x19EAB8u, 0x19EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAC0u;
label_19eac0:
    // 0x19eac0: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x19EAC0u;
    SET_GPR_U32(ctx, 31, 0x19EAC8u);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x19EAC0u, 0x19EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAC8u;
label_19eac8:
    // 0x19eac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19eac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19eacc:
    // 0x19eacc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19eaccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ead0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ead0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ead4: 0x3e00008  jr          $ra
    ctx->pc = 0x19EAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAD4u;
        // 0x19ead8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EADCu;
    // 0x19eadc: 0x0  nop
    ctx->pc = 0x19eadcu;
    // NOP
}
