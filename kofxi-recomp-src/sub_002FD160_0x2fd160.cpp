#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FD160
// Address: 0x2fd160 - 0x2fd260
void sub_002FD160_0x2fd160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD160_0x2fd160");
#endif

    switch (ctx->pc) {
        case 0x2fd188u: goto label_2fd188;
        case 0x2fd1acu: goto label_2fd1ac;
        case 0x2fd1d4u: goto label_2fd1d4;
        case 0x2fd1fcu: goto label_2fd1fc;
        case 0x2fd224u: goto label_2fd224;
        case 0x2fd248u: goto label_2fd248;
        default: break;
    }

    ctx->pc = 0x2fd160u;

    // 0x2fd160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fd160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fd164: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fd168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fd16c: 0x24a5b288  addiu       $a1, $a1, -0x4D78
    ctx->pc = 0x2fd16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947464));
    // 0x2fd170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fd174: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fd174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd178: 0x3c100116  lui         $s0, 0x116
    ctx->pc = 0x2fd178u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)278 << 16));
    // 0x2fd17c: 0x2610f080  addiu       $s0, $s0, -0xF80
    ctx->pc = 0x2fd17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
    // 0x2fd180: 0xc0c056c  jal         func_3015B0
    ctx->pc = 0x2FD180u;
    SET_GPR_U32(ctx, 31, 0x2FD188u);
    ctx->pc = 0x2FD184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD180u;
            // 0x2fd184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3015B0u;
    if (runtime->hasFunction(0x3015B0u)) {
        auto targetFn = runtime->lookupFunction(0x3015B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD188u; }
        if (ctx->pc != 0x2FD188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003015B0_0x3015b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD188u; }
        if (ctx->pc != 0x2FD188u) { return; }
    }
    ctx->pc = 0x2FD188u;
label_2fd188:
    // 0x2fd188: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD188u;
    {
        const bool branch_taken_0x2fd188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd188) {
            ctx->pc = 0x2FD198u;
            goto label_2fd198;
        }
    }
    ctx->pc = 0x2FD190u;
    // 0x2fd190: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2FD190u;
    {
        const bool branch_taken_0x2fd190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD190u;
            // 0x2fd194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd190) {
            ctx->pc = 0x2FD24Cu;
            goto label_2fd24c;
        }
    }
    ctx->pc = 0x2FD198u;
label_2fd198:
    // 0x2fd198: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2fd198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2fd19c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2fd19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd1a0: 0x2484f240  addiu       $a0, $a0, -0xDC0
    ctx->pc = 0x2fd1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963776));
    // 0x2fd1a4: 0xc0c056c  jal         func_3015B0
    ctx->pc = 0x2FD1A4u;
    SET_GPR_U32(ctx, 31, 0x2FD1ACu);
    ctx->pc = 0x2FD1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1A4u;
            // 0x2fd1a8: 0x3406c000  ori         $a2, $zero, 0xC000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3015B0u;
    if (runtime->hasFunction(0x3015B0u)) {
        auto targetFn = runtime->lookupFunction(0x3015B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1ACu; }
        if (ctx->pc != 0x2FD1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003015B0_0x3015b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1ACu; }
        if (ctx->pc != 0x2FD1ACu) { return; }
    }
    ctx->pc = 0x2FD1ACu;
label_2fd1ac:
    // 0x2fd1ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD1ACu;
    {
        const bool branch_taken_0x2fd1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd1ac) {
            ctx->pc = 0x2FD1BCu;
            goto label_2fd1bc;
        }
    }
    ctx->pc = 0x2FD1B4u;
    // 0x2fd1b4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2FD1B4u;
    {
        const bool branch_taken_0x2fd1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1B4u;
            // 0x2fd1b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1b4) {
            ctx->pc = 0x2FD24Cu;
            goto label_2fd24c;
        }
    }
    ctx->pc = 0x2FD1BCu;
label_2fd1bc:
    // 0x2fd1bc: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x2fd1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x2fd1c0: 0x3401c001  ori         $at, $zero, 0xC001
    ctx->pc = 0x2fd1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49153);
    // 0x2fd1c4: 0x2484b280  addiu       $a0, $a0, -0x4D80
    ctx->pc = 0x2fd1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947456));
    // 0x2fd1c8: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd1cc: 0xc0c056c  jal         func_3015B0
    ctx->pc = 0x2FD1CCu;
    SET_GPR_U32(ctx, 31, 0x2FD1D4u);
    ctx->pc = 0x2FD1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1CCu;
            // 0x2fd1d0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3015B0u;
    if (runtime->hasFunction(0x3015B0u)) {
        auto targetFn = runtime->lookupFunction(0x3015B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1D4u; }
        if (ctx->pc != 0x2FD1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003015B0_0x3015b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1D4u; }
        if (ctx->pc != 0x2FD1D4u) { return; }
    }
    ctx->pc = 0x2FD1D4u;
label_2fd1d4:
    // 0x2fd1d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD1D4u;
    {
        const bool branch_taken_0x2fd1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd1d4) {
            ctx->pc = 0x2FD1E4u;
            goto label_2fd1e4;
        }
    }
    ctx->pc = 0x2FD1DCu;
    // 0x2fd1dc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2FD1DCu;
    {
        const bool branch_taken_0x2fd1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1DCu;
            // 0x2fd1e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1dc) {
            ctx->pc = 0x2FD24Cu;
            goto label_2fd24c;
        }
    }
    ctx->pc = 0x2FD1E4u;
label_2fd1e4:
    // 0x2fd1e4: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x2fd1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x2fd1e8: 0x3401c008  ori         $at, $zero, 0xC008
    ctx->pc = 0x2fd1e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49160);
    // 0x2fd1ec: 0x2484b270  addiu       $a0, $a0, -0x4D90
    ctx->pc = 0x2fd1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947440));
    // 0x2fd1f0: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd1f4: 0xc0c056c  jal         func_3015B0
    ctx->pc = 0x2FD1F4u;
    SET_GPR_U32(ctx, 31, 0x2FD1FCu);
    ctx->pc = 0x2FD1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1F4u;
            // 0x2fd1f8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3015B0u;
    if (runtime->hasFunction(0x3015B0u)) {
        auto targetFn = runtime->lookupFunction(0x3015B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1FCu; }
        if (ctx->pc != 0x2FD1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003015B0_0x3015b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1FCu; }
        if (ctx->pc != 0x2FD1FCu) { return; }
    }
    ctx->pc = 0x2FD1FCu;
label_2fd1fc:
    // 0x2fd1fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD1FCu;
    {
        const bool branch_taken_0x2fd1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd1fc) {
            ctx->pc = 0x2FD20Cu;
            goto label_2fd20c;
        }
    }
    ctx->pc = 0x2FD204u;
    // 0x2fd204: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2FD204u;
    {
        const bool branch_taken_0x2fd204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD204u;
            // 0x2fd208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd204) {
            ctx->pc = 0x2FD24Cu;
            goto label_2fd24c;
        }
    }
    ctx->pc = 0x2FD20Cu;
label_2fd20c:
    // 0x2fd20c: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x2fd20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x2fd210: 0x3401c013  ori         $at, $zero, 0xC013
    ctx->pc = 0x2fd210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49171);
    // 0x2fd214: 0x2484b268  addiu       $a0, $a0, -0x4D98
    ctx->pc = 0x2fd214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947432));
    // 0x2fd218: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd21c: 0xc0c056c  jal         func_3015B0
    ctx->pc = 0x2FD21Cu;
    SET_GPR_U32(ctx, 31, 0x2FD224u);
    ctx->pc = 0x2FD220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD21Cu;
            // 0x2fd220: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3015B0u;
    if (runtime->hasFunction(0x3015B0u)) {
        auto targetFn = runtime->lookupFunction(0x3015B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD224u; }
        if (ctx->pc != 0x2FD224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003015B0_0x3015b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD224u; }
        if (ctx->pc != 0x2FD224u) { return; }
    }
    ctx->pc = 0x2FD224u;
label_2fd224:
    // 0x2fd224: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD224u;
    {
        const bool branch_taken_0x2fd224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd224) {
            ctx->pc = 0x2FD228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD224u;
            // 0x2fd228: 0x3401c017  ori         $at, $zero, 0xC017 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49175);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD234u;
            goto label_2fd234;
        }
    }
    ctx->pc = 0x2FD22Cu;
    // 0x2fd22c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD22Cu;
    {
        const bool branch_taken_0x2fd22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD22Cu;
            // 0x2fd230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd22c) {
            ctx->pc = 0x2FD24Cu;
            goto label_2fd24c;
        }
    }
    ctx->pc = 0x2FD234u;
label_2fd234:
    // 0x2fd234: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x2fd234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x2fd238: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd23c: 0x2484b250  addiu       $a0, $a0, -0x4DB0
    ctx->pc = 0x2fd23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947408));
    // 0x2fd240: 0xc0c056c  jal         func_3015B0
    ctx->pc = 0x2FD240u;
    SET_GPR_U32(ctx, 31, 0x2FD248u);
    ctx->pc = 0x2FD244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD240u;
            // 0x2fd244: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3015B0u;
    if (runtime->hasFunction(0x3015B0u)) {
        auto targetFn = runtime->lookupFunction(0x3015B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD248u; }
        if (ctx->pc != 0x2FD248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003015B0_0x3015b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD248u; }
        if (ctx->pc != 0x2FD248u) { return; }
    }
    ctx->pc = 0x2FD248u;
label_2fd248:
    // 0x2fd248: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fd248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fd24c:
    // 0x2fd24c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fd24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd254: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD254u;
            // 0x2fd258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD25Cu;
    // 0x2fd25c: 0x0  nop
    ctx->pc = 0x2fd25cu;
    // NOP
    ctx->pc = 0x2fd260u;
}
