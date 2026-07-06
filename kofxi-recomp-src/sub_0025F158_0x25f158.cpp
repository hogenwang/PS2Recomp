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

// Function: sub_0025F158
// Address: 0x25f158 - 0x25f278
void sub_0025F158_0x25f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F158_0x25f158");
#endif

    switch (ctx->pc) {
        case 0x25f158u: goto label_25f158;
        case 0x25f15cu: goto label_25f15c;
        case 0x25f160u: goto label_25f160;
        case 0x25f164u: goto label_25f164;
        case 0x25f168u: goto label_25f168;
        case 0x25f16cu: goto label_25f16c;
        case 0x25f170u: goto label_25f170;
        case 0x25f174u: goto label_25f174;
        case 0x25f178u: goto label_25f178;
        case 0x25f17cu: goto label_25f17c;
        case 0x25f180u: goto label_25f180;
        case 0x25f184u: goto label_25f184;
        case 0x25f188u: goto label_25f188;
        case 0x25f18cu: goto label_25f18c;
        case 0x25f190u: goto label_25f190;
        case 0x25f194u: goto label_25f194;
        case 0x25f198u: goto label_25f198;
        case 0x25f19cu: goto label_25f19c;
        case 0x25f1a0u: goto label_25f1a0;
        case 0x25f1a4u: goto label_25f1a4;
        case 0x25f1a8u: goto label_25f1a8;
        case 0x25f1acu: goto label_25f1ac;
        case 0x25f1b0u: goto label_25f1b0;
        case 0x25f1b4u: goto label_25f1b4;
        case 0x25f1b8u: goto label_25f1b8;
        case 0x25f1bcu: goto label_25f1bc;
        case 0x25f1c0u: goto label_25f1c0;
        case 0x25f1c4u: goto label_25f1c4;
        case 0x25f1c8u: goto label_25f1c8;
        case 0x25f1ccu: goto label_25f1cc;
        case 0x25f1d0u: goto label_25f1d0;
        case 0x25f1d4u: goto label_25f1d4;
        case 0x25f1d8u: goto label_25f1d8;
        case 0x25f1dcu: goto label_25f1dc;
        case 0x25f1e0u: goto label_25f1e0;
        case 0x25f1e4u: goto label_25f1e4;
        case 0x25f1e8u: goto label_25f1e8;
        case 0x25f1ecu: goto label_25f1ec;
        case 0x25f1f0u: goto label_25f1f0;
        case 0x25f1f4u: goto label_25f1f4;
        case 0x25f1f8u: goto label_25f1f8;
        case 0x25f1fcu: goto label_25f1fc;
        case 0x25f200u: goto label_25f200;
        case 0x25f204u: goto label_25f204;
        case 0x25f208u: goto label_25f208;
        case 0x25f20cu: goto label_25f20c;
        case 0x25f210u: goto label_25f210;
        case 0x25f214u: goto label_25f214;
        case 0x25f218u: goto label_25f218;
        case 0x25f21cu: goto label_25f21c;
        case 0x25f220u: goto label_25f220;
        case 0x25f224u: goto label_25f224;
        case 0x25f228u: goto label_25f228;
        case 0x25f22cu: goto label_25f22c;
        case 0x25f230u: goto label_25f230;
        case 0x25f234u: goto label_25f234;
        case 0x25f238u: goto label_25f238;
        case 0x25f23cu: goto label_25f23c;
        case 0x25f240u: goto label_25f240;
        case 0x25f244u: goto label_25f244;
        case 0x25f248u: goto label_25f248;
        case 0x25f24cu: goto label_25f24c;
        case 0x25f250u: goto label_25f250;
        case 0x25f254u: goto label_25f254;
        case 0x25f258u: goto label_25f258;
        case 0x25f25cu: goto label_25f25c;
        case 0x25f260u: goto label_25f260;
        case 0x25f264u: goto label_25f264;
        case 0x25f268u: goto label_25f268;
        case 0x25f26cu: goto label_25f26c;
        case 0x25f270u: goto label_25f270;
        case 0x25f274u: goto label_25f274;
        default: break;
    }

    ctx->pc = 0x25f158u;

label_25f158:
    // 0x25f158: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x25f158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_25f15c:
    // 0x25f15c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x25f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_25f160:
    // 0x25f160: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x25f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_25f164:
    // 0x25f164: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x25f164u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25f168:
    // 0x25f168: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x25f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_25f16c:
    // 0x25f16c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x25f16cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25f170:
    // 0x25f170: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x25f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_25f174:
    // 0x25f174: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25f174u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25f178:
    // 0x25f178: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x25f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_25f17c:
    // 0x25f17c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25f17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25f180:
    // 0x25f180: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x25f180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_25f184:
    // 0x25f184: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x25f184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25f188:
    // 0x25f188: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x25f188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_25f18c:
    // 0x25f18c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25f18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25f190:
    // 0x25f190: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x25f190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_25f194:
    // 0x25f194: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x25f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_25f198:
    // 0x25f198: 0xc09728e  jal         func_25CA38
label_25f19c:
    if (ctx->pc == 0x25F19Cu) {
        ctx->pc = 0x25F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F198u;
        // 0x25f19c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F1A0u;
        goto label_25f1a0;
    }
    ctx->pc = 0x25F198u;
    SET_GPR_U32(ctx, 31, 0x25F1A0u);
    ctx->pc = 0x25F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F198u;
    // 0x25f19c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25F198u, 0x25F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F1A0u;
label_25f1a0:
    // 0x25f1a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25f1a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f1a4:
    // 0x25f1a4: 0x12600029  beqz        $s3, . + 4 + (0x29 << 2)
label_25f1a8:
    if (ctx->pc == 0x25F1A8u) {
        ctx->pc = 0x25F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1A4u;
        // 0x25f1a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F1ACu;
        goto label_25f1ac;
    }
    ctx->pc = 0x25F1A4u;
    {
        const bool branch_taken_0x25f1a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1A4u;
        // 0x25f1a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1a4) {
            ctx->pc = 0x25F24Cu;
            goto label_25f24c;
        }
    }
    ctx->pc = 0x25F1ACu;
label_25f1ac:
    // 0x25f1ac: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x25f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_25f1b0:
    // 0x25f1b0: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x25f1b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_25f1b4:
    // 0x25f1b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25f1b8:
    if (ctx->pc == 0x25F1B8u) {
        ctx->pc = 0x25F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1B4u;
        // 0x25f1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F1BCu;
        goto label_25f1bc;
    }
    ctx->pc = 0x25F1B4u;
    {
        const bool branch_taken_0x25f1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1B4u;
        // 0x25f1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1b4) {
            ctx->pc = 0x25F1C4u;
            goto label_25f1c4;
        }
    }
    ctx->pc = 0x25F1BCu;
label_25f1bc:
    // 0x25f1bc: 0x10000020  b           . + 4 + (0x20 << 2)
label_25f1c0:
    if (ctx->pc == 0x25F1C0u) {
        ctx->pc = 0x25F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1BCu;
        // 0x25f1c0: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F1C4u;
        goto label_25f1c4;
    }
    ctx->pc = 0x25F1BCu;
    {
        const bool branch_taken_0x25f1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1BCu;
        // 0x25f1c0: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1bc) {
            ctx->pc = 0x25F240u;
            goto label_25f240;
        }
    }
    ctx->pc = 0x25F1C4u;
label_25f1c4:
    // 0x25f1c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25f1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25f1c8:
    // 0x25f1c8: 0xc08b4f8  jal         func_22D3E0
label_25f1cc:
    if (ctx->pc == 0x25F1CCu) {
        ctx->pc = 0x25F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1C8u;
        // 0x25f1cc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F1D0u;
        goto label_25f1d0;
    }
    ctx->pc = 0x25F1C8u;
    SET_GPR_U32(ctx, 31, 0x25F1D0u);
    ctx->pc = 0x25F1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1C8u;
    // 0x25f1cc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25F1C8u, 0x25F1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F1D0u;
label_25f1d0:
    // 0x25f1d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25f1d4:
    // 0x25f1d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25f1d8:
    // 0x25f1d8: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_25f1dc:
    if (ctx->pc == 0x25F1DCu) {
        ctx->pc = 0x25F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1D8u;
        // 0x25f1dc: 0x2410005f  addiu       $s0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F1E0u;
        goto label_25f1e0;
    }
    ctx->pc = 0x25F1D8u;
    {
        const bool branch_taken_0x25f1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1D8u;
        // 0x25f1dc: 0x2410005f  addiu       $s0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1d8) {
            ctx->pc = 0x25F240u;
            goto label_25f240;
        }
    }
    ctx->pc = 0x25F1E0u;
label_25f1e0:
    // 0x25f1e0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x25f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_25f1e4:
    // 0x25f1e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25f1e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f1e8:
    // 0x25f1e8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_25f1ec:
    if (ctx->pc == 0x25F1ECu) {
        ctx->pc = 0x25F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1E8u;
        // 0x25f1ec: 0x24578638  addiu       $s7, $v0, -0x79C8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F1F0u;
        goto label_25f1f0;
    }
    ctx->pc = 0x25F1E8u;
    {
        const bool branch_taken_0x25f1e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1E8u;
        // 0x25f1ec: 0x24578638  addiu       $s7, $v0, -0x79C8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1e8) {
            ctx->pc = 0x25F208u;
            goto label_25f208;
        }
    }
    ctx->pc = 0x25F1F0u;
label_25f1f0:
    // 0x25f1f0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x25f1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_25f1f4:
    // 0x25f1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f1f8:
    // 0x25f1f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25f1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f1fc:
    // 0x25f1fc: 0xc08b4f8  jal         func_22D3E0
label_25f200:
    if (ctx->pc == 0x25F200u) {
        ctx->pc = 0x25F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1FCu;
        // 0x25f200: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F204u;
        goto label_25f204;
    }
    ctx->pc = 0x25F1FCu;
    SET_GPR_U32(ctx, 31, 0x25F204u);
    ctx->pc = 0x25F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F1FCu;
    // 0x25f200: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25F1FCu, 0x25F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F204u;
label_25f204:
    // 0x25f204: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x25f204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f208:
    // 0x25f208: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x25f208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_25f20c:
    // 0x25f20c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25f20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25f210:
    // 0x25f210: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x25f210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25f214:
    // 0x25f214: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x25f214u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25f218:
    // 0x25f218: 0x2e0f809  jalr        $s7
label_25f21c:
    if (ctx->pc == 0x25F21Cu) {
        ctx->pc = 0x25F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F218u;
        // 0x25f21c: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F220u;
        goto label_25f220;
    }
    ctx->pc = 0x25F218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x25F220u);
        ctx->pc = 0x25F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F218u;
        // 0x25f21c: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F218u, 0x25F220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F220u;
label_25f220:
    // 0x25f220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f224:
    // 0x25f224: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_25f228:
    if (ctx->pc == 0x25F228u) {
        ctx->pc = 0x25F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F224u;
        // 0x25f228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F22Cu;
        goto label_25f22c;
    }
    ctx->pc = 0x25F224u;
    {
        const bool branch_taken_0x25f224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F224u;
        // 0x25f228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f224) {
            ctx->pc = 0x25F244u;
            goto label_25f244;
        }
    }
    ctx->pc = 0x25F22Cu;
label_25f22c:
    // 0x25f22c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_25f230:
    if (ctx->pc == 0x25F230u) {
        ctx->pc = 0x25F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F22Cu;
        // 0x25f230: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F234u;
        goto label_25f234;
    }
    ctx->pc = 0x25F22Cu;
    {
        const bool branch_taken_0x25f22c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F22Cu;
        // 0x25f230: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f22c) {
            ctx->pc = 0x25F244u;
            goto label_25f244;
        }
    }
    ctx->pc = 0x25F234u;
label_25f234:
    // 0x25f234: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25f234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_25f238:
    // 0x25f238: 0xc08b4f8  jal         func_22D3E0
label_25f23c:
    if (ctx->pc == 0x25F23Cu) {
        ctx->pc = 0x25F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F238u;
        // 0x25f23c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F240u;
        goto label_25f240;
    }
    ctx->pc = 0x25F238u;
    SET_GPR_U32(ctx, 31, 0x25F240u);
    ctx->pc = 0x25F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F238u;
    // 0x25f23c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25F238u, 0x25F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F240u;
label_25f240:
    // 0x25f240: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f244:
    // 0x25f244: 0xc0972da  jal         func_25CB68
label_25f248:
    if (ctx->pc == 0x25F248u) {
        ctx->pc = 0x25F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F244u;
        // 0x25f248: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F24Cu;
        goto label_25f24c;
    }
    ctx->pc = 0x25F244u;
    SET_GPR_U32(ctx, 31, 0x25F24Cu);
    ctx->pc = 0x25F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F244u;
    // 0x25f248: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25F244u, 0x25F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F24Cu;
label_25f24c:
    // 0x25f24c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x25f24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_25f250:
    // 0x25f250: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x25f250u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_25f254:
    // 0x25f254: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x25f254u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_25f258:
    // 0x25f258: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x25f258u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_25f25c:
    // 0x25f25c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x25f25cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_25f260:
    // 0x25f260: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x25f260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_25f264:
    // 0x25f264: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25f264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25f268:
    // 0x25f268: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x25f268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25f26c:
    // 0x25f26c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x25f26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25f270:
    // 0x25f270: 0x3e00008  jr          $ra
label_25f274:
    if (ctx->pc == 0x25F274u) {
        ctx->pc = 0x25F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F270u;
        // 0x25f274: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F278u;
        goto label_fallthrough_0x25f270;
    }
    ctx->pc = 0x25F270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F270u;
        // 0x25f274: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25f270:
    ctx->pc = 0x25F278u;
}
