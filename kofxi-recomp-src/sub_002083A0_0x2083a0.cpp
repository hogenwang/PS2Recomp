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

// Function: sub_002083A0
// Address: 0x2083a0 - 0x208bd0
void sub_002083A0_0x2083a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002083A0_0x2083a0");
#endif

    switch (ctx->pc) {
        case 0x208404u: goto label_208404;
        case 0x208410u: goto label_208410;
        case 0x208430u: goto label_208430;
        case 0x208448u: goto label_208448;
        case 0x208454u: goto label_208454;
        case 0x208484u: goto label_208484;
        case 0x208490u: goto label_208490;
        case 0x2084e0u: goto label_2084e0;
        case 0x208524u: goto label_208524;
        case 0x208534u: goto label_208534;
        case 0x20859cu: goto label_20859c;
        case 0x208674u: goto label_208674;
        case 0x208684u: goto label_208684;
        case 0x2086a4u: goto label_2086a4;
        case 0x2086c4u: goto label_2086c4;
        case 0x2086e4u: goto label_2086e4;
        case 0x208704u: goto label_208704;
        case 0x20874cu: goto label_20874c;
        case 0x208758u: goto label_208758;
        case 0x2087d0u: goto label_2087d0;
        case 0x208800u: goto label_208800;
        case 0x208844u: goto label_208844;
        case 0x2088d0u: goto label_2088d0;
        case 0x2088f0u: goto label_2088f0;
        case 0x208930u: goto label_208930;
        case 0x208940u: goto label_208940;
        case 0x208960u: goto label_208960;
        case 0x2089b8u: goto label_2089b8;
        case 0x208a0cu: goto label_208a0c;
        case 0x208a18u: goto label_208a18;
        case 0x208a20u: goto label_208a20;
        case 0x208a3cu: goto label_208a3c;
        case 0x208a44u: goto label_208a44;
        case 0x208a4cu: goto label_208a4c;
        case 0x208a90u: goto label_208a90;
        case 0x208aacu: goto label_208aac;
        case 0x208ab8u: goto label_208ab8;
        case 0x208b04u: goto label_208b04;
        case 0x208b6cu: goto label_208b6c;
        case 0x208b7cu: goto label_208b7c;
        case 0x208b88u: goto label_208b88;
        case 0x208b98u: goto label_208b98;
        case 0x208bb0u: goto label_208bb0;
        default: break;
    }

    ctx->pc = 0x2083a0u;

    // 0x2083a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2083a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2083a4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2083a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2083a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2083a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2083ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2083acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2083b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2083b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2083b4: 0x90449480  lbu         $a0, -0x6B80($v0)
    ctx->pc = 0x2083b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x2083b8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2083b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2083bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x2083bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x2083c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2083c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2083c4: 0x2442ea22  addiu       $v0, $v0, -0x15DE
    ctx->pc = 0x2083c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961698));
    // 0x2083c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2083c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2083cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2083ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2083d0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2083d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2083d4: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2083d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2083d8: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2083D8u;
    {
        const bool branch_taken_0x2083d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2083d8) {
            ctx->pc = 0x2083DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2083D8u;
            // 0x2083dc: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20845Cu;
            goto label_20845c;
        }
    }
    ctx->pc = 0x2083E0u;
    // 0x2083e0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2083e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2083e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2083e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2083e8: 0x8c449bf8  lw          $a0, -0x6408($v0)
    ctx->pc = 0x2083e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2083ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2083ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2083f0: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2083F0u;
    {
        const bool branch_taken_0x2083f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2083f0) {
            ctx->pc = 0x2083F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2083F0u;
            // 0x2083f4: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208418u;
            goto label_208418;
        }
    }
    ctx->pc = 0x2083F8u;
    // 0x2083f8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x2083f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x2083fc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2083FCu;
    SET_GPR_U32(ctx, 31, 0x208404u);
    ctx->pc = 0x208400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083FCu;
    // 0x208400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2083FCu, 0x208404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208404u;
label_208404:
    // 0x208404: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x208404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x208408: 0xc0558e0  jal         func_156380
    ctx->pc = 0x208408u;
    SET_GPR_U32(ctx, 31, 0x208410u);
    ctx->pc = 0x20840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208408u;
    // 0x20840c: 0x248497a0  addiu       $a0, $a0, -0x6860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x208408u, 0x208410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208410u;
label_208410:
    // 0x208410: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x208410u;
    {
        const bool branch_taken_0x208410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208410) {
            ctx->pc = 0x208490u;
            goto label_208490;
        }
    }
    ctx->pc = 0x208418u;
label_208418:
    // 0x208418: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20841c: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x20841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208420: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x208420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x208424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208428: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x208428u;
    SET_GPR_U32(ctx, 31, 0x208430u);
    ctx->pc = 0x20842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208428u;
    // 0x20842c: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x208428u, 0x208430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208430u;
label_208430:
    // 0x208430: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208438: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x208438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x20843c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x20843cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x208440: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x208440u;
    SET_GPR_U32(ctx, 31, 0x208448u);
    ctx->pc = 0x208444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208440u;
    // 0x208444: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x208440u, 0x208448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208448u;
label_208448:
    // 0x208448: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x208448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x20844c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x20844Cu;
    SET_GPR_U32(ctx, 31, 0x208454u);
    ctx->pc = 0x208450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20844Cu;
    // 0x208450: 0x24848660  addiu       $a0, $a0, -0x79A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x20844Cu, 0x208454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208454u;
label_208454:
    // 0x208454: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x208454u;
    {
        const bool branch_taken_0x208454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208454u;
        // 0x208458: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208454) {
            ctx->pc = 0x20864Cu;
            goto label_20864c;
        }
    }
    ctx->pc = 0x20845Cu;
label_20845c:
    // 0x20845c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20845Cu;
    {
        const bool branch_taken_0x20845c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20845c) {
            ctx->pc = 0x208490u;
            goto label_208490;
        }
    }
    ctx->pc = 0x208464u;
    // 0x208464: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208468: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x208468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x20846c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x20846cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x208470: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208470u;
    {
        const bool branch_taken_0x208470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208470) {
            ctx->pc = 0x208490u;
            goto label_208490;
        }
    }
    ctx->pc = 0x208478u;
    // 0x208478: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x208478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x20847c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x20847Cu;
    SET_GPR_U32(ctx, 31, 0x208484u);
    ctx->pc = 0x208480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20847Cu;
    // 0x208480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x20847Cu, 0x208484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208484u;
label_208484:
    // 0x208484: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x208484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x208488: 0xc0558e0  jal         func_156380
    ctx->pc = 0x208488u;
    SET_GPR_U32(ctx, 31, 0x208490u);
    ctx->pc = 0x20848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208488u;
    // 0x20848c: 0x248497a0  addiu       $a0, $a0, -0x6860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x208488u, 0x208490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208490u;
label_208490:
    // 0x208490: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208494: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x208494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x208498: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x208498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x20849c: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x20849cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2084a0: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x2084a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2084a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2084a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2084a8: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2084A8u;
    {
        const bool branch_taken_0x2084a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2084a8) {
            ctx->pc = 0x2084ECu;
            goto label_2084ec;
        }
    }
    ctx->pc = 0x2084B0u;
    // 0x2084b0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2084b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2084b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x2084b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x2084b8: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x2084b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x2084bc: 0x2463ea26  addiu       $v1, $v1, -0x15DA
    ctx->pc = 0x2084bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961702));
    // 0x2084c0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2084c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2084c4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2084c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2084c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2084c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2084cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2084ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2084d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2084d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2084d4: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x2084d4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2084d8: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x2084D8u;
    SET_GPR_U32(ctx, 31, 0x2084E0u);
    ctx->pc = 0x2084DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2084D8u;
    // 0x2084dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x2084D8u, 0x2084E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2084E0u;
label_2084e0:
    // 0x2084e0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2084e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2084e4: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2084e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2084e8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2084e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2084ec:
    // 0x2084ec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2084ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2084f0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2084f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2084f4: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x2084f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x2084f8: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x2084f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2084fc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2084fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x208500: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x208500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x208504: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x208504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x208508: 0x2463ea26  addiu       $v1, $v1, -0x15DA
    ctx->pc = 0x208508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961702));
    // 0x20850c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20850cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x208510: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x208510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208514: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x208514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x208518: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x208518u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20851c: 0xc0d0abc  jal         func_342AF0
    ctx->pc = 0x20851Cu;
    SET_GPR_U32(ctx, 31, 0x208524u);
    ctx->pc = 0x208520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20851Cu;
    // 0x208520: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AF0u, 0x20851Cu, 0x208524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208524u;
label_208524:
    // 0x208524: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208528: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20852c: 0xc082088  jal         func_208220
    ctx->pc = 0x20852Cu;
    SET_GPR_U32(ctx, 31, 0x208534u);
    ctx->pc = 0x208530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20852Cu;
    // 0x208530: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208220u, 0x20852Cu, 0x208534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208534u;
label_208534:
    // 0x208534: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208538: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x208538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20853c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x20853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x208540: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x208540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x208544: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x208544u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x208548: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x208548u;
    {
        const bool branch_taken_0x208548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208548u;
        // 0x20854c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208548) {
            ctx->pc = 0x208608u;
            goto label_208608;
        }
    }
    ctx->pc = 0x208550u;
    // 0x208550: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x208550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x208554: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x208554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x208558: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208558u;
    {
        const bool branch_taken_0x208558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208558) {
            ctx->pc = 0x208578u;
            goto label_208578;
        }
    }
    ctx->pc = 0x208560u;
    // 0x208560: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x208560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x208564: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x208564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x208568: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x208568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x20856c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208570: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x208570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208574: 0xac510018  sw          $s1, 0x18($v0)
    ctx->pc = 0x208574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
label_208578:
    // 0x208578: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20857c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x20857cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x208580: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x208580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208584: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x208584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x208588: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x208588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20858c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x20858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x208590: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x208590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x208594: 0xc081658  jal         func_205960
    ctx->pc = 0x208594u;
    SET_GPR_U32(ctx, 31, 0x20859Cu);
    ctx->pc = 0x208598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208594u;
    // 0x208598: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205960u, 0x208594u, 0x20859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20859Cu;
label_20859c:
    // 0x20859c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x20859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2085a0: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2085A0u;
    {
        const bool branch_taken_0x2085a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2085a0) {
            ctx->pc = 0x2085A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2085A0u;
            // 0x2085a4: 0x30450007  andi        $a1, $v0, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2085CCu;
            goto label_2085cc;
        }
    }
    ctx->pc = 0x2085A8u;
    // 0x2085a8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2085a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2085ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2085acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2085b0: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x2085b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2085b4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2085b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2085b8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2085b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2085bc: 0xaca60014  sw          $a2, 0x14($a1)
    ctx->pc = 0x2085bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
    // 0x2085c0: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2085c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2085c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2085C4u;
    {
        const bool branch_taken_0x2085c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2085C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085C4u;
        // 0x2085c8: 0xac640018  sw          $a0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085c4) {
            ctx->pc = 0x208608u;
            goto label_208608;
        }
    }
    ctx->pc = 0x2085CCu;
label_2085cc:
    // 0x2085cc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2085CCu;
    {
        const bool branch_taken_0x2085cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2085cc) {
            ctx->pc = 0x2085E0u;
            goto label_2085e0;
        }
    }
    ctx->pc = 0x2085D4u;
    // 0x2085d4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2085D4u;
    {
        const bool branch_taken_0x2085d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2085d4) {
            ctx->pc = 0x2085E0u;
            goto label_2085e0;
        }
    }
    ctx->pc = 0x2085DCu;
    // 0x2085dc: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x2085dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_2085e0:
    // 0x2085e0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2085e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2085e4: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x2085e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2085e8: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2085e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2085ec: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2085ECu;
    {
        const bool branch_taken_0x2085ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2085F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085ECu;
        // 0x2085f0: 0xac650014  sw          $a1, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085ec) {
            ctx->pc = 0x2085FCu;
            goto label_2085fc;
        }
    }
    ctx->pc = 0x2085F4u;
    // 0x2085f4: 0x24430007  addiu       $v1, $v0, 0x7
    ctx->pc = 0x2085f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2085f8: 0x320c3  sra         $a0, $v1, 3
    ctx->pc = 0x2085f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
label_2085fc:
    // 0x2085fc: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2085fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208600: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208604: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x208604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_208608:
    // 0x208608: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20860c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x20860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x208610: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x208610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208614: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x208614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x208618: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208618u;
    {
        const bool branch_taken_0x208618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x208618) {
            ctx->pc = 0x20861Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208618u;
            // 0x20861c: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20863Cu;
            goto label_20863c;
        }
    }
    ctx->pc = 0x208620u;
    // 0x208620: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x208620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x208624: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x208624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x208628: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x208628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x20862c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20862cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208630: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208634: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x208634u;
    {
        const bool branch_taken_0x208634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208634u;
        // 0x208638: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208634) {
            ctx->pc = 0x208648u;
            goto label_208648;
        }
    }
    ctx->pc = 0x20863Cu;
label_20863c:
    // 0x20863c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x20863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x208640: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x208640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208644: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x208644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_208648:
    // 0x208648: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x208648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20864c:
    // 0x20864c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20864cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208654: 0x3e00008  jr          $ra
    ctx->pc = 0x208654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208654u;
        // 0x208658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20865Cu;
    // 0x20865c: 0x0  nop
    ctx->pc = 0x20865cu;
    // NOP
    // 0x208660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20866c: 0xc081068  jal         func_2041A0
    ctx->pc = 0x20866Cu;
    SET_GPR_U32(ctx, 31, 0x208674u);
    ctx->pc = 0x208670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20866Cu;
    // 0x208670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2041A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2041A0u, 0x20866Cu, 0x208674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208674u;
label_208674:
    // 0x208674: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x208674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x208678: 0x24050186  addiu       $a1, $zero, 0x186
    ctx->pc = 0x208678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    // 0x20867c: 0xc080e50  jal         func_203940
    ctx->pc = 0x20867Cu;
    SET_GPR_U32(ctx, 31, 0x208684u);
    ctx->pc = 0x208680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20867Cu;
    // 0x208680: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203940u, 0x20867Cu, 0x208684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208684u;
label_208684:
    // 0x208684: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x208684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x208688: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x208688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x20868c: 0x248466a0  addiu       $a0, $a0, 0x66A0
    ctx->pc = 0x20868cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26272));
    // 0x208690: 0x24a5f820  addiu       $a1, $a1, -0x7E0
    ctx->pc = 0x208690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965280));
    // 0x208694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x208694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208698: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20869c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x20869Cu;
    SET_GPR_U32(ctx, 31, 0x2086A4u);
    ctx->pc = 0x2086A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20869Cu;
    // 0x2086a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x20869Cu, 0x2086A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086A4u;
label_2086a4:
    // 0x2086a4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x2086a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x2086a8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2086a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2086ac: 0x24847c70  addiu       $a0, $a0, 0x7C70
    ctx->pc = 0x2086acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31856));
    // 0x2086b0: 0x24a5f820  addiu       $a1, $a1, -0x7E0
    ctx->pc = 0x2086b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965280));
    // 0x2086b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2086b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2086b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086bc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x2086BCu;
    SET_GPR_U32(ctx, 31, 0x2086C4u);
    ctx->pc = 0x2086C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2086BCu;
    // 0x2086c0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x2086BCu, 0x2086C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086C4u;
label_2086c4:
    // 0x2086c4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x2086c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x2086c8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2086c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2086cc: 0x24846530  addiu       $a0, $a0, 0x6530
    ctx->pc = 0x2086ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25904));
    // 0x2086d0: 0x24a5f820  addiu       $a1, $a1, -0x7E0
    ctx->pc = 0x2086d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965280));
    // 0x2086d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2086d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2086d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086dc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x2086DCu;
    SET_GPR_U32(ctx, 31, 0x2086E4u);
    ctx->pc = 0x2086E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2086DCu;
    // 0x2086e0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x2086DCu, 0x2086E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086E4u;
label_2086e4:
    // 0x2086e4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x2086e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x2086e8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2086e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2086ec: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2086ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086f0: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x2086f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x2086f4: 0x24a5f820  addiu       $a1, $a1, -0x7E0
    ctx->pc = 0x2086f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965280));
    // 0x2086f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2086f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086fc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x2086FCu;
    SET_GPR_U32(ctx, 31, 0x208704u);
    ctx->pc = 0x208700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2086FCu;
    // 0x208700: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x2086FCu, 0x208704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208704u;
label_208704:
    // 0x208704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208708: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x208708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x20870c: 0xa043e818  sb          $v1, -0x17E8($v0)
    ctx->pc = 0x20870cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    // 0x208710: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208714: 0x8c439bf8  lw          $v1, -0x6408($v0)
    ctx->pc = 0x208714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x208718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20871c: 0x28410030  slti        $at, $v0, 0x30
    ctx->pc = 0x20871cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x208720: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x208720u;
    {
        const bool branch_taken_0x208720 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x208720) {
            ctx->pc = 0x20872Cu;
            goto label_20872c;
        }
    }
    ctx->pc = 0x208728u;
    // 0x208728: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x208728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20872c:
    // 0x20872c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20872cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208730: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x208730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x208734: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x208734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208738: 0x246398a0  addiu       $v1, $v1, -0x6760
    ctx->pc = 0x208738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940832));
    // 0x20873c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208740: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x208740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208744: 0xc080fa8  jal         func_203EA0
    ctx->pc = 0x208744u;
    SET_GPR_U32(ctx, 31, 0x20874Cu);
    ctx->pc = 0x208748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208744u;
    // 0x208748: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203EA0u, 0x208744u, 0x20874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20874Cu;
label_20874c:
    // 0x20874c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20874cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x208750: 0xc0558e0  jal         func_156380
    ctx->pc = 0x208750u;
    SET_GPR_U32(ctx, 31, 0x208758u);
    ctx->pc = 0x208754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208750u;
    // 0x208754: 0x24848770  addiu       $a0, $a0, -0x7890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x208750u, 0x208758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208758u;
label_208758:
    // 0x208758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20875c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20875cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208760: 0x3e00008  jr          $ra
    ctx->pc = 0x208760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208760u;
        // 0x208764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208768u;
    // 0x208768: 0x0  nop
    ctx->pc = 0x208768u;
    // NOP
    // 0x20876c: 0x0  nop
    ctx->pc = 0x20876cu;
    // NOP
    // 0x208770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208774: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x208774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x208778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20877c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20877cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x208780: 0x90659480  lbu         $a1, -0x6B80($v1)
    ctx->pc = 0x208780u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939776)));
    // 0x208784: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x208784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x208788: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x208788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20878c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x208790: 0x2463ea22  addiu       $v1, $v1, -0x15DE
    ctx->pc = 0x208790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961698));
    // 0x208794: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x208794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x208798: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x208798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20879c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x20879cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2087a0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2087a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2087a4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2087A4u;
    {
        const bool branch_taken_0x2087a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2087a4) {
            ctx->pc = 0x208800u;
            goto label_208800;
        }
    }
    ctx->pc = 0x2087ACu;
    // 0x2087ac: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2087acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2087b0: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2087b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2087b4: 0x24440061  addiu       $a0, $v0, 0x61
    ctx->pc = 0x2087b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
    // 0x2087b8: 0x90420061  lbu         $v0, 0x61($v0)
    ctx->pc = 0x2087b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 97)));
    // 0x2087bc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2087BCu;
    {
        const bool branch_taken_0x2087bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2087bc) {
            ctx->pc = 0x2087C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2087BCu;
            // 0x2087c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2087E0u;
            goto label_2087e0;
        }
    }
    ctx->pc = 0x2087C4u;
    // 0x2087c4: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x2087c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x2087c8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2087C8u;
    SET_GPR_U32(ctx, 31, 0x2087D0u);
    ctx->pc = 0x2087CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087C8u;
    // 0x2087cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2087C8u, 0x2087D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087D0u;
label_2087d0:
    // 0x2087d0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2087d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2087d4: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2087d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2087d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2087D8u;
    {
        const bool branch_taken_0x2087d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2087DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087D8u;
        // 0x2087dc: 0xa0600061  sb          $zero, 0x61($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 97), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087d8) {
            ctx->pc = 0x208800u;
            goto label_208800;
        }
    }
    ctx->pc = 0x2087E0u;
label_2087e0:
    // 0x2087e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2087e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2087e4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2087e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2087e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2087e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087ec: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2087ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2087f0: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x2087f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x2087f4: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2087f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2087f8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2087F8u;
    SET_GPR_U32(ctx, 31, 0x208800u);
    ctx->pc = 0x2087FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087F8u;
    // 0x2087fc: 0xa0430062  sb          $v1, 0x62($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 98), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2087F8u, 0x208800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208800u;
label_208800:
    // 0x208800: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208804: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x208804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208808: 0x90830061  lbu         $v1, 0x61($a0)
    ctx->pc = 0x208808u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 97)));
    // 0x20880c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20880Cu;
    {
        const bool branch_taken_0x20880c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20880c) {
            ctx->pc = 0x208850u;
            goto label_208850;
        }
    }
    ctx->pc = 0x208814u;
    // 0x208814: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x208814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x208818: 0x90850062  lbu         $a1, 0x62($a0)
    ctx->pc = 0x208818u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x20881c: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x20881cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x208820: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x208820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x208824: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x208824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x208828: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x208828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20882c: 0x2442ea22  addiu       $v0, $v0, -0x15DE
    ctx->pc = 0x20882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961698));
    // 0x208830: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x208834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208838: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x208838u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20883c: 0xc0d0abc  jal         func_342AF0
    ctx->pc = 0x20883Cu;
    SET_GPR_U32(ctx, 31, 0x208844u);
    ctx->pc = 0x208840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20883Cu;
    // 0x208840: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AF0u, 0x20883Cu, 0x208844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208844u;
label_208844:
    // 0x208844: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208848: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20884c: 0xa0620062  sb          $v0, 0x62($v1)
    ctx->pc = 0x20884cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 98), (uint8_t)GPR_U32(ctx, 2));
label_208850:
    // 0x208850: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208854: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x208854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x208858: 0x8c679bf8  lw          $a3, -0x6408($v1)
    ctx->pc = 0x208858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20885c: 0x90e50062  lbu         $a1, 0x62($a3)
    ctx->pc = 0x20885cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 98)));
    // 0x208860: 0x50a40097  beql        $a1, $a0, . + 4 + (0x97 << 2)
    ctx->pc = 0x208860u;
    {
        const bool branch_taken_0x208860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x208860) {
            ctx->pc = 0x208864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208860u;
            // 0x208864: 0xa0e004f8  sb          $zero, 0x4F8($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 1272), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208AC0u;
            goto label_208ac0;
        }
    }
    ctx->pc = 0x208868u;
    // 0x208868: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x208868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20886c: 0x50a30079  beql        $a1, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x20886Cu;
    {
        const bool branch_taken_0x20886c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x20886c) {
            ctx->pc = 0x208870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20886Cu;
            // 0x208870: 0xa0e004f8  sb          $zero, 0x4F8($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 1272), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208A54u;
            goto label_208a54;
        }
    }
    ctx->pc = 0x208874u;
    // 0x208874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208878: 0x50a3003c  beql        $a1, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x208878u;
    {
        const bool branch_taken_0x208878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x208878) {
            ctx->pc = 0x20887Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208878u;
            // 0x20887c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20896Cu;
            goto label_20896c;
        }
    }
    ctx->pc = 0x208880u;
    // 0x208880: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x208880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208884: 0x10a30038  beq         $a1, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x208884u;
    {
        const bool branch_taken_0x208884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x208884) {
            ctx->pc = 0x208968u;
            goto label_208968;
        }
    }
    ctx->pc = 0x20888Cu;
    // 0x20888c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20888Cu;
    {
        const bool branch_taken_0x20888c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20888c) {
            ctx->pc = 0x20889Cu;
            goto label_20889c;
        }
    }
    ctx->pc = 0x208894u;
    // 0x208894: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x208894u;
    {
        const bool branch_taken_0x208894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208894u;
        // 0x208898: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208894) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x20889Cu;
label_20889c:
    // 0x20889c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x20889cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2088a0: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x2088a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2088a4: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x2088a4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x2088a8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2088a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2088ac: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2088acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2088b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x2088b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x2088b4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2088b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2088b8: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x2088b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x2088bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2088bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2088c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2088c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2088c4: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x2088c4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2088c8: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x2088C8u;
    SET_GPR_U32(ctx, 31, 0x2088D0u);
    ctx->pc = 0x2088CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2088C8u;
    // 0x2088cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x2088C8u, 0x2088D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2088D0u;
label_2088d0:
    // 0x2088d0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2088d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x2088d4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2088d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2088d8: 0x8c859bf8  lw          $a1, -0x6408($a0)
    ctx->pc = 0x2088d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x2088dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2088dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2088e0: 0x8c629bf8  lw          $v0, -0x6408($v1)
    ctx->pc = 0x2088e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2088e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2088e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2088e8: 0xc081618  jal         func_205860
    ctx->pc = 0x2088E8u;
    SET_GPR_U32(ctx, 31, 0x2088F0u);
    ctx->pc = 0x2088ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2088E8u;
    // 0x2088ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205860u, 0x2088E8u, 0x2088F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2088F0u;
label_2088f0:
    // 0x2088f0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2088f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2088f4: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2088f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2088f8: 0x8c669bf8  lw          $a2, -0x6408($v1)
    ctx->pc = 0x2088f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2088fc: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2088fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x208900: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x208900u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x208904: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208908: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x208908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x20890c: 0xa0a004f1  sb          $zero, 0x4F1($a1)
    ctx->pc = 0x20890cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1265), (uint8_t)GPR_U32(ctx, 0));
    // 0x208910: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x208910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x208914: 0xa08004f8  sb          $zero, 0x4F8($a0)
    ctx->pc = 0x208914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1272), (uint8_t)GPR_U32(ctx, 0));
    // 0x208918: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x208918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20891c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x208920: 0x120300a7  beq         $s0, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x208920u;
    {
        const bool branch_taken_0x208920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x208920) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x208928u;
    // 0x208928: 0xc081068  jal         func_2041A0
    ctx->pc = 0x208928u;
    SET_GPR_U32(ctx, 31, 0x208930u);
    ctx->pc = 0x20892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208928u;
    // 0x20892c: 0xa0800064  sb          $zero, 0x64($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2041A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2041A0u, 0x208928u, 0x208930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208930u;
label_208930:
    // 0x208930: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208934: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x208934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208938: 0xc0818bc  jal         func_2062F0
    ctx->pc = 0x208938u;
    SET_GPR_U32(ctx, 31, 0x208940u);
    ctx->pc = 0x20893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208938u;
    // 0x20893c: 0x8c44005c  lw          $a0, 0x5C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2062F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2062F0u, 0x208938u, 0x208940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208940u;
label_208940:
    // 0x208940: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208944: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x208944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x208948: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x208948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x20894c: 0x246398a0  addiu       $v1, $v1, -0x6760
    ctx->pc = 0x20894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940832));
    // 0x208950: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x208950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208954: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x208954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208958: 0xc080fa8  jal         func_203EA0
    ctx->pc = 0x208958u;
    SET_GPR_U32(ctx, 31, 0x208960u);
    ctx->pc = 0x20895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208958u;
    // 0x20895c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203EA0u, 0x208958u, 0x208960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208960u;
label_208960:
    // 0x208960: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x208960u;
    {
        const bool branch_taken_0x208960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208960) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x208968u;
label_208968:
    // 0x208968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20896c:
    // 0x20896c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x20896cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x208970: 0xa0e304f1  sb          $v1, 0x4F1($a3)
    ctx->pc = 0x208970u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1265), (uint8_t)GPR_U32(ctx, 3));
    // 0x208974: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x208974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x208978: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20897c: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x20897cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208980: 0xa0a604f8  sb          $a2, 0x4F8($a1)
    ctx->pc = 0x208980u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1272), (uint8_t)GPR_U32(ctx, 6));
    // 0x208984: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208988: 0x8c869bf8  lw          $a2, -0x6408($a0)
    ctx->pc = 0x208988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x20898c: 0x90c40062  lbu         $a0, 0x62($a2)
    ctx->pc = 0x20898cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 98)));
    // 0x208990: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x208990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x208994: 0x38840002  xori        $a0, $a0, 0x2
    ctx->pc = 0x208994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x208998: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x208998u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20899c: 0xacc40020  sw          $a0, 0x20($a2)
    ctx->pc = 0x20899cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 4));
    // 0x2089a0: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2089a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2089a4: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x2089a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2089a8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2089A8u;
    {
        const bool branch_taken_0x2089a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2089a8) {
            ctx->pc = 0x2089B8u;
            goto label_2089b8;
        }
    }
    ctx->pc = 0x2089B0u;
    // 0x2089b0: 0xc081484  jal         func_205210
    ctx->pc = 0x2089B0u;
    SET_GPR_U32(ctx, 31, 0x2089B8u);
    ctx->pc = 0x205210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205210u, 0x2089B0u, 0x2089B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089B8u;
label_2089b8:
    // 0x2089b8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x2089b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x2089bc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2089bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2089c0: 0x90659480  lbu         $a1, -0x6B80($v1)
    ctx->pc = 0x2089c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939776)));
    // 0x2089c4: 0x2484ea22  addiu       $a0, $a0, -0x15DE
    ctx->pc = 0x2089c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961698));
    // 0x2089c8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2089c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2089cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2089ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2089d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2089d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2089d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2089d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2089d8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2089d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2089dc: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x2089dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x2089e0: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2089E0u;
    {
        const bool branch_taken_0x2089e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2089e0) {
            ctx->pc = 0x2089E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2089E0u;
            // 0x2089e4: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x208A28u;
            goto label_208a28;
        }
    }
    ctx->pc = 0x2089E8u;
    // 0x2089e8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2089e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2089ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2089ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2089f0: 0x8c439bf8  lw          $v1, -0x6408($v0)
    ctx->pc = 0x2089f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2089f4: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x2089f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x2089f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2089f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2089fc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x2089fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x208a00: 0xa06604f0  sb          $a2, 0x4F0($v1)
    ctx->pc = 0x208a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1264), (uint8_t)GPR_U32(ctx, 6));
    // 0x208a04: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x208A04u;
    SET_GPR_U32(ctx, 31, 0x208A0Cu);
    ctx->pc = 0x208A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A04u;
    // 0x208a08: 0xac40e808  sw          $zero, -0x17F8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x208A04u, 0x208A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A0Cu;
label_208a0c:
    // 0x208a0c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x208a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x208a10: 0xc0558e0  jal         func_156380
    ctx->pc = 0x208A10u;
    SET_GPR_U32(ctx, 31, 0x208A18u);
    ctx->pc = 0x208A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A10u;
    // 0x208a14: 0x24848cf0  addiu       $a0, $a0, -0x7310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x208A10u, 0x208A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A18u;
label_208a18:
    // 0x208a18: 0xc081074  jal         func_2041D0
    ctx->pc = 0x208A18u;
    SET_GPR_U32(ctx, 31, 0x208A20u);
    ctx->pc = 0x208A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A18u;
    // 0x208a1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2041D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2041D0u, 0x208A18u, 0x208A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A20u;
label_208a20:
    // 0x208a20: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x208A20u;
    {
        const bool branch_taken_0x208a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a20) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x208A28u;
label_208a28:
    // 0x208a28: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x208A28u;
    {
        const bool branch_taken_0x208a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a28) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x208A30u;
    // 0x208a30: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x208a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x208a34: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x208A34u;
    SET_GPR_U32(ctx, 31, 0x208A3Cu);
    ctx->pc = 0x208A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A34u;
    // 0x208a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x208A34u, 0x208A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A3Cu;
label_208a3c:
    // 0x208a3c: 0xc0815f0  jal         func_2057C0
    ctx->pc = 0x208A3Cu;
    SET_GPR_U32(ctx, 31, 0x208A44u);
    ctx->pc = 0x2057C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2057C0u, 0x208A3Cu, 0x208A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A44u;
label_208a44:
    // 0x208a44: 0xc081484  jal         func_205210
    ctx->pc = 0x208A44u;
    SET_GPR_U32(ctx, 31, 0x208A4Cu);
    ctx->pc = 0x205210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205210u, 0x208A44u, 0x208A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A4Cu;
label_208a4c:
    // 0x208a4c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x208A4Cu;
    {
        const bool branch_taken_0x208a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a4c) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x208A54u;
label_208a54:
    // 0x208a54: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x208a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x208a58: 0x90659480  lbu         $a1, -0x6B80($v1)
    ctx->pc = 0x208a58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939776)));
    // 0x208a5c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x208a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x208a60: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x208a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x208a64: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x208a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x208a68: 0x2463ea22  addiu       $v1, $v1, -0x15DE
    ctx->pc = 0x208a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961698));
    // 0x208a6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x208a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x208a70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x208a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208a74: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x208a74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208a78: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x208a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x208a7c: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x208A7Cu;
    {
        const bool branch_taken_0x208a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a7c) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x208A84u;
    // 0x208a84: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x208a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x208a88: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x208A88u;
    SET_GPR_U32(ctx, 31, 0x208A90u);
    ctx->pc = 0x208A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A88u;
    // 0x208a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x208A88u, 0x208A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A90u;
label_208a90:
    // 0x208a90: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208a94: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208a98: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208a9c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x208a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x208aa0: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x208aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208aa4: 0xc0818bc  jal         func_2062F0
    ctx->pc = 0x208AA4u;
    SET_GPR_U32(ctx, 31, 0x208AACu);
    ctx->pc = 0x208AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AA4u;
    // 0x208aa8: 0x8c44005c  lw          $a0, 0x5C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2062F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2062F0u, 0x208AA4u, 0x208AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AACu;
label_208aac:
    // 0x208aac: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x208aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x208ab0: 0xc0558e0  jal         func_156380
    ctx->pc = 0x208AB0u;
    SET_GPR_U32(ctx, 31, 0x208AB8u);
    ctx->pc = 0x208AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AB0u;
    // 0x208ab4: 0x24848290  addiu       $a0, $a0, -0x7D70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x208AB0u, 0x208AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AB8u;
label_208ab8:
    // 0x208ab8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x208AB8u;
    {
        const bool branch_taken_0x208ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208ab8) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x208AC0u;
label_208ac0:
    // 0x208ac0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208ac4: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x208ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208ac8: 0x90830061  lbu         $v1, 0x61($a0)
    ctx->pc = 0x208ac8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 97)));
    // 0x208acc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x208ACCu;
    {
        const bool branch_taken_0x208acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208acc) {
            ctx->pc = 0x208B10u;
            goto label_208b10;
        }
    }
    ctx->pc = 0x208AD4u;
    // 0x208ad4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x208ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x208ad8: 0x90850063  lbu         $a1, 0x63($a0)
    ctx->pc = 0x208ad8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 99)));
    // 0x208adc: 0x90469480  lbu         $a2, -0x6B80($v0)
    ctx->pc = 0x208adcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x208ae0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x208ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x208ae4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x208ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x208ae8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x208ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x208aec: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x208aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x208af0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x208af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208af8: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x208af8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208afc: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x208AFCu;
    SET_GPR_U32(ctx, 31, 0x208B04u);
    ctx->pc = 0x208B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AFCu;
    // 0x208b00: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x208AFCu, 0x208B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B04u;
label_208b04:
    // 0x208b04: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208b08: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208b0c: 0xa0620063  sb          $v0, 0x63($v1)
    ctx->pc = 0x208b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 99), (uint8_t)GPR_U32(ctx, 2));
label_208b10:
    // 0x208b10: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x208b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x208b14: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x208b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x208b18: 0x90659480  lbu         $a1, -0x6B80($v1)
    ctx->pc = 0x208b18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939776)));
    // 0x208b1c: 0x2484ea22  addiu       $a0, $a0, -0x15DE
    ctx->pc = 0x208b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961698));
    // 0x208b20: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x208b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x208b24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x208b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x208b28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x208b2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x208b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x208b30: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x208b30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208b34: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x208b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x208b38: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x208B38u;
    {
        const bool branch_taken_0x208b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b38) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x208B40u;
    // 0x208b40: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208b44: 0x8c439bf8  lw          $v1, -0x6408($v0)
    ctx->pc = 0x208b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208b48: 0x90620061  lbu         $v0, 0x61($v1)
    ctx->pc = 0x208b48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 97)));
    // 0x208b4c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x208B4Cu;
    {
        const bool branch_taken_0x208b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b4c) {
            ctx->pc = 0x208B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208B4Cu;
            // 0x208b50: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208BA8u;
            goto label_208ba8;
        }
    }
    ctx->pc = 0x208B54u;
    // 0x208b54: 0x90620063  lbu         $v0, 0x63($v1)
    ctx->pc = 0x208b54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 99)));
    // 0x208b58: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x208B58u;
    {
        const bool branch_taken_0x208b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b58) {
            ctx->pc = 0x208B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208B58u;
            // 0x208b5c: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208B90u;
            goto label_208b90;
        }
    }
    ctx->pc = 0x208B60u;
    // 0x208b60: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x208b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x208b64: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x208B64u;
    SET_GPR_U32(ctx, 31, 0x208B6Cu);
    ctx->pc = 0x208B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B64u;
    // 0x208b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x208B64u, 0x208B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B6Cu;
label_208b6c:
    // 0x208b6c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x208b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x208b70: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x208b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x208b74: 0xc0818bc  jal         func_2062F0
    ctx->pc = 0x208B74u;
    SET_GPR_U32(ctx, 31, 0x208B7Cu);
    ctx->pc = 0x208B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B74u;
    // 0x208b78: 0x8c44005c  lw          $a0, 0x5C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2062F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2062F0u, 0x208B74u, 0x208B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B7Cu;
label_208b7c:
    // 0x208b7c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x208b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x208b80: 0xc0558e0  jal         func_156380
    ctx->pc = 0x208B80u;
    SET_GPR_U32(ctx, 31, 0x208B88u);
    ctx->pc = 0x208B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B80u;
    // 0x208b84: 0x248497a0  addiu       $a0, $a0, -0x6860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x208B80u, 0x208B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B88u;
label_208b88:
    // 0x208b88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x208B88u;
    {
        const bool branch_taken_0x208b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b88) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x208B90u;
label_208b90:
    // 0x208b90: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x208B90u;
    SET_GPR_U32(ctx, 31, 0x208B98u);
    ctx->pc = 0x208B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B90u;
    // 0x208b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x208B90u, 0x208B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B98u;
label_208b98:
    // 0x208b98: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208b9c: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208ba0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x208BA0u;
    {
        const bool branch_taken_0x208ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BA0u;
        // 0x208ba4: 0xa0600061  sb          $zero, 0x61($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 97), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ba0) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x208BA8u;
label_208ba8:
    // 0x208ba8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x208BA8u;
    SET_GPR_U32(ctx, 31, 0x208BB0u);
    ctx->pc = 0x208BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208BA8u;
    // 0x208bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x208BA8u, 0x208BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BB0u;
label_208bb0:
    // 0x208bb0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208bb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208bb8: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208bbc: 0xa0640061  sb          $a0, 0x61($v1)
    ctx->pc = 0x208bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 97), (uint8_t)GPR_U32(ctx, 4));
label_208bc0:
    // 0x208bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_208bc4:
    // 0x208bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x208BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BC8u;
        // 0x208bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208BD0u;
}
