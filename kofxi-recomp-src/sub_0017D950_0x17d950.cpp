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

// Function: sub_0017D950
// Address: 0x17d950 - 0x17dac0
void sub_0017D950_0x17d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D950_0x17d950");
#endif

    switch (ctx->pc) {
        case 0x17d950u: goto label_17d950;
        case 0x17d954u: goto label_17d954;
        case 0x17d958u: goto label_17d958;
        case 0x17d95cu: goto label_17d95c;
        case 0x17d960u: goto label_17d960;
        case 0x17d964u: goto label_17d964;
        case 0x17d968u: goto label_17d968;
        case 0x17d96cu: goto label_17d96c;
        case 0x17d970u: goto label_17d970;
        case 0x17d974u: goto label_17d974;
        case 0x17d978u: goto label_17d978;
        case 0x17d97cu: goto label_17d97c;
        case 0x17d980u: goto label_17d980;
        case 0x17d984u: goto label_17d984;
        case 0x17d988u: goto label_17d988;
        case 0x17d98cu: goto label_17d98c;
        case 0x17d990u: goto label_17d990;
        case 0x17d994u: goto label_17d994;
        case 0x17d998u: goto label_17d998;
        case 0x17d99cu: goto label_17d99c;
        case 0x17d9a0u: goto label_17d9a0;
        case 0x17d9a4u: goto label_17d9a4;
        case 0x17d9a8u: goto label_17d9a8;
        case 0x17d9acu: goto label_17d9ac;
        case 0x17d9b0u: goto label_17d9b0;
        case 0x17d9b4u: goto label_17d9b4;
        case 0x17d9b8u: goto label_17d9b8;
        case 0x17d9bcu: goto label_17d9bc;
        case 0x17d9c0u: goto label_17d9c0;
        case 0x17d9c4u: goto label_17d9c4;
        case 0x17d9c8u: goto label_17d9c8;
        case 0x17d9ccu: goto label_17d9cc;
        case 0x17d9d0u: goto label_17d9d0;
        case 0x17d9d4u: goto label_17d9d4;
        case 0x17d9d8u: goto label_17d9d8;
        case 0x17d9dcu: goto label_17d9dc;
        case 0x17d9e0u: goto label_17d9e0;
        case 0x17d9e4u: goto label_17d9e4;
        case 0x17d9e8u: goto label_17d9e8;
        case 0x17d9ecu: goto label_17d9ec;
        case 0x17d9f0u: goto label_17d9f0;
        case 0x17d9f4u: goto label_17d9f4;
        case 0x17d9f8u: goto label_17d9f8;
        case 0x17d9fcu: goto label_17d9fc;
        case 0x17da00u: goto label_17da00;
        case 0x17da04u: goto label_17da04;
        case 0x17da08u: goto label_17da08;
        case 0x17da0cu: goto label_17da0c;
        case 0x17da10u: goto label_17da10;
        case 0x17da14u: goto label_17da14;
        case 0x17da18u: goto label_17da18;
        case 0x17da1cu: goto label_17da1c;
        case 0x17da20u: goto label_17da20;
        case 0x17da24u: goto label_17da24;
        case 0x17da28u: goto label_17da28;
        case 0x17da2cu: goto label_17da2c;
        case 0x17da30u: goto label_17da30;
        case 0x17da34u: goto label_17da34;
        case 0x17da38u: goto label_17da38;
        case 0x17da3cu: goto label_17da3c;
        case 0x17da40u: goto label_17da40;
        case 0x17da44u: goto label_17da44;
        case 0x17da48u: goto label_17da48;
        case 0x17da4cu: goto label_17da4c;
        case 0x17da50u: goto label_17da50;
        case 0x17da54u: goto label_17da54;
        case 0x17da58u: goto label_17da58;
        case 0x17da5cu: goto label_17da5c;
        case 0x17da60u: goto label_17da60;
        case 0x17da64u: goto label_17da64;
        case 0x17da68u: goto label_17da68;
        case 0x17da6cu: goto label_17da6c;
        case 0x17da70u: goto label_17da70;
        case 0x17da74u: goto label_17da74;
        case 0x17da78u: goto label_17da78;
        case 0x17da7cu: goto label_17da7c;
        case 0x17da80u: goto label_17da80;
        case 0x17da84u: goto label_17da84;
        case 0x17da88u: goto label_17da88;
        case 0x17da8cu: goto label_17da8c;
        case 0x17da90u: goto label_17da90;
        case 0x17da94u: goto label_17da94;
        case 0x17da98u: goto label_17da98;
        case 0x17da9cu: goto label_17da9c;
        case 0x17daa0u: goto label_17daa0;
        case 0x17daa4u: goto label_17daa4;
        case 0x17daa8u: goto label_17daa8;
        case 0x17daacu: goto label_17daac;
        case 0x17dab0u: goto label_17dab0;
        case 0x17dab4u: goto label_17dab4;
        case 0x17dab8u: goto label_17dab8;
        case 0x17dabcu: goto label_17dabc;
        default: break;
    }

    ctx->pc = 0x17d950u;

label_17d950:
    // 0x17d950: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_17d954:
    // 0x17d954: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17d958:
    // 0x17d958: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17d958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_17d95c:
    // 0x17d95c: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x17d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
label_17d960:
    // 0x17d960: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17d960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_17d964:
    // 0x17d964: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17d964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17d968:
    // 0x17d968: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17d96c:
    // 0x17d96c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17d96cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17d970:
    // 0x17d970: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17d974:
    // 0x17d974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17d978:
    // 0x17d978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17d97c:
    // 0x17d97c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17d980:
    // 0x17d980: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x17d980u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_17d984:
    // 0x17d984: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17d984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17d988:
    // 0x17d988: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17d98c:
    // 0x17d98c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17d990:
    // 0x17d990: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17d990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17d994:
    // 0x17d994: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17d994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17d998:
    // 0x17d998: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17d99c:
    // 0x17d99c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x17d99cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_17d9a0:
    // 0x17d9a0: 0x1860003b  blez        $v1, . + 4 + (0x3B << 2)
label_17d9a4:
    if (ctx->pc == 0x17D9A4u) {
        ctx->pc = 0x17D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9A0u;
        // 0x17d9a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D9A8u;
        goto label_17d9a8;
    }
    ctx->pc = 0x17D9A0u;
    {
        const bool branch_taken_0x17d9a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9A0u;
        // 0x17d9a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9a0) {
            ctx->pc = 0x17DA90u;
            goto label_17da90;
        }
    }
    ctx->pc = 0x17D9A8u;
label_17d9a8:
    // 0x17d9a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17d9a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d9ac:
    // 0x17d9ac: 0x2b49021  addu        $s2, $s5, $s4
    ctx->pc = 0x17d9acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_17d9b0:
    // 0x17d9b0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x17d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_17d9b4:
    // 0x17d9b4: 0x9251000a  lbu         $s1, 0xA($s2)
    ctx->pc = 0x17d9b4u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
label_17d9b8:
    // 0x17d9b8: 0x12230027  beq         $s1, $v1, . + 4 + (0x27 << 2)
label_17d9bc:
    if (ctx->pc == 0x17D9BCu) {
        ctx->pc = 0x17D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9B8u;
        // 0x17d9bc: 0x2656000a  addiu       $s6, $s2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D9C0u;
        goto label_17d9c0;
    }
    ctx->pc = 0x17D9B8u;
    {
        const bool branch_taken_0x17d9b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x17D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9B8u;
        // 0x17d9bc: 0x2656000a  addiu       $s6, $s2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9b8) {
            ctx->pc = 0x17DA58u;
            goto label_17da58;
        }
    }
    ctx->pc = 0x17D9C0u;
label_17d9c0:
    // 0x17d9c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17d9c4:
    // 0x17d9c4: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x17d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
label_17d9c8:
    // 0x17d9c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17d9cc:
    // 0x17d9cc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x17d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_17d9d0:
    // 0x17d9d0: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x17d9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_17d9d4:
    // 0x17d9d4: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
label_17d9d8:
    if (ctx->pc == 0x17D9D8u) {
        ctx->pc = 0x17D9DCu;
        goto label_17d9dc;
    }
    ctx->pc = 0x17D9D4u;
    {
        const bool branch_taken_0x17d9d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d9d4) {
            ctx->pc = 0x17DA58u;
            goto label_17da58;
        }
    }
    ctx->pc = 0x17D9DCu;
label_17d9dc:
    // 0x17d9dc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_17d9e0:
    // 0x17d9e0: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x17d9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17d9e4:
    // 0x17d9e4: 0x24423bc0  addiu       $v0, $v0, 0x3BC0
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15296));
label_17d9e8:
    // 0x17d9e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_17d9ec:
    // 0x17d9ec: 0xc055768  jal         func_155DA0
label_17d9f0:
    if (ctx->pc == 0x17D9F0u) {
        ctx->pc = 0x17D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9ECu;
        // 0x17d9f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D9F4u;
        goto label_17d9f4;
    }
    ctx->pc = 0x17D9ECu;
    SET_GPR_U32(ctx, 31, 0x17D9F4u);
    ctx->pc = 0x17D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9ECu;
    // 0x17d9f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17D9ECu, 0x17D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9F4u;
label_17d9f4:
    // 0x17d9f4: 0x92a50000  lbu         $a1, 0x0($s5)
    ctx->pc = 0x17d9f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_17d9f8:
    // 0x17d9f8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17d9fc:
    // 0x17d9fc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_17da00:
    // 0x17da00: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x17da00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
label_17da04:
    // 0x17da04: 0x24423b40  addiu       $v0, $v0, 0x3B40
    ctx->pc = 0x17da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15168));
label_17da08:
    // 0x17da08: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17da08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17da0c:
    // 0x17da0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_17da10:
    // 0x17da10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17da10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17da14:
    // 0x17da14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17da18:
    // 0x17da18: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17da18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17da1c:
    // 0x17da1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17da1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17da20:
    // 0x17da20: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17da20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17da24:
    // 0x17da24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17da24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17da28:
    // 0x17da28: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x17da28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_17da2c:
    // 0x17da2c: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x17da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_17da30:
    // 0x17da30: 0x40f809  jalr        $v0
label_17da34:
    if (ctx->pc == 0x17DA34u) {
        ctx->pc = 0x17DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA30u;
        // 0x17da34: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA38u;
        goto label_17da38;
    }
    ctx->pc = 0x17DA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17DA38u);
        ctx->pc = 0x17DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA30u;
        // 0x17da34: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DA30u, 0x17DA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DA38u;
label_17da38:
    // 0x17da38: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x17da38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_17da3c:
    // 0x17da3c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x17da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_17da40:
    // 0x17da40: 0xa2440007  sb          $a0, 0x7($s2)
    ctx->pc = 0x17da40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 4));
label_17da44:
    // 0x17da44: 0xa2510004  sb          $s1, 0x4($s2)
    ctx->pc = 0x17da44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 17));
label_17da48:
    // 0x17da48: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x17da48u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_17da4c:
    // 0x17da4c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x17da4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_17da50:
    // 0x17da50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17da50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17da54:
    // 0x17da54: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x17da54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
label_17da58:
    // 0x17da58: 0x92a50000  lbu         $a1, 0x0($s5)
    ctx->pc = 0x17da58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_17da5c:
    // 0x17da5c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17da60:
    // 0x17da60: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17da60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_17da64:
    // 0x17da64: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x17da64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
label_17da68:
    // 0x17da68: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17da68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17da6c:
    // 0x17da6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17da70:
    // 0x17da70: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17da70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17da74:
    // 0x17da74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17da74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17da78:
    // 0x17da78: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17da78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17da7c:
    // 0x17da7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17da80:
    // 0x17da80: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x17da80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_17da84:
    // 0x17da84: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x17da84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17da88:
    // 0x17da88: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_17da8c:
    if (ctx->pc == 0x17DA8Cu) {
        ctx->pc = 0x17DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA88u;
        // 0x17da8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA90u;
        goto label_17da90;
    }
    ctx->pc = 0x17DA88u;
    {
        const bool branch_taken_0x17da88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA88u;
        // 0x17da8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da88) {
            ctx->pc = 0x17D9ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d9ac;
        }
    }
    ctx->pc = 0x17DA90u;
label_17da90:
    // 0x17da90: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17da90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17da94:
    // 0x17da94: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17da94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17da98:
    // 0x17da98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17da98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17da9c:
    // 0x17da9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17da9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17daa0:
    // 0x17daa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17daa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17daa4:
    // 0x17daa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17daa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17daa8:
    // 0x17daa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17daa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17daac:
    // 0x17daac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17daacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17dab0:
    // 0x17dab0: 0x3e00008  jr          $ra
label_17dab4:
    if (ctx->pc == 0x17DAB4u) {
        ctx->pc = 0x17DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAB0u;
        // 0x17dab4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DAB8u;
        goto label_17dab8;
    }
    ctx->pc = 0x17DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAB0u;
        // 0x17dab4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DAB8u;
label_17dab8:
    // 0x17dab8: 0x0  nop
    ctx->pc = 0x17dab8u;
    // NOP
label_17dabc:
    // 0x17dabc: 0x0  nop
    ctx->pc = 0x17dabcu;
    // NOP
}
