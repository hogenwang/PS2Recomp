#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AC110
// Address: 0x2ac110 - 0x2ac210
void sub_002AC110_0x2ac110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC110_0x2ac110");
#endif

    switch (ctx->pc) {
        case 0x2ac15cu: goto label_2ac15c;
        case 0x2ac180u: goto label_2ac180;
        case 0x2ac1a8u: goto label_2ac1a8;
        case 0x2ac1c8u: goto label_2ac1c8;
        case 0x2ac1ecu: goto label_2ac1ec;
        default: break;
    }

    ctx->pc = 0x2ac110u;

    // 0x2ac110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ac110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ac114: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ac114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ac118: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ac118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ac11c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2ac11cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac120: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ac120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ac124: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ac124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac128: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ac128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ac12c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ac12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac134: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ac134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac138: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ac138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ac13c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AC13Cu;
    {
        const bool branch_taken_0x2ac13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC13Cu;
            // 0x2ac140: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac13c) {
            ctx->pc = 0x2AC168u;
            goto label_2ac168;
        }
    }
    ctx->pc = 0x2AC144u;
    // 0x2ac144: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ac144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ac148: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ac148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac14c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC14Cu;
    {
        const bool branch_taken_0x2ac14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac14c) {
            ctx->pc = 0x2AC150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC14Cu;
            // 0x2ac150: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC16Cu;
            goto label_2ac16c;
        }
    }
    ctx->pc = 0x2AC154u;
    // 0x2ac154: 0xc0a39c0  jal         func_28E700
    ctx->pc = 0x2AC154u;
    SET_GPR_U32(ctx, 31, 0x2AC15Cu);
    ctx->pc = 0x28E700u;
    if (runtime->hasFunction(0x28E700u)) {
        auto targetFn = runtime->lookupFunction(0x28E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC15Cu; }
        if (ctx->pc != 0x2AC15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E700_0x28e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC15Cu; }
        if (ctx->pc != 0x2AC15Cu) { return; }
    }
    ctx->pc = 0x2AC15Cu;
label_2ac15c:
    // 0x2ac15c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac160: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AC160u;
    {
        const bool branch_taken_0x2ac160 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac160) {
            ctx->pc = 0x2AC164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC160u;
            // 0x2ac164: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC188u;
            goto label_2ac188;
        }
    }
    ctx->pc = 0x2AC168u;
label_2ac168:
    // 0x2ac168: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ac16c:
    // 0x2ac16c: 0x240500bc  addiu       $a1, $zero, 0xBC
    ctx->pc = 0x2ac16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x2ac170: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2ac170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2ac174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac178: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AC178u;
    SET_GPR_U32(ctx, 31, 0x2AC180u);
    ctx->pc = 0x2AC17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC178u;
            // 0x2ac17c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC180u; }
        if (ctx->pc != 0x2AC180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC180u; }
        if (ctx->pc != 0x2AC180u) { return; }
    }
    ctx->pc = 0x2AC180u;
label_2ac180:
    // 0x2ac180: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2AC180u;
    {
        const bool branch_taken_0x2ac180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC180u;
            // 0x2ac184: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac180) {
            ctx->pc = 0x2AC1F0u;
            goto label_2ac1f0;
        }
    }
    ctx->pc = 0x2AC188u;
label_2ac188:
    // 0x2ac188: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ac188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ac18c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC18Cu;
    {
        const bool branch_taken_0x2ac18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AC190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC18Cu;
            // 0x2ac190: 0x240500bc  addiu       $a1, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac18c) {
            ctx->pc = 0x2AC1B0u;
            goto label_2ac1b0;
        }
    }
    ctx->pc = 0x2AC194u;
    // 0x2ac194: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac198: 0x240600d1  addiu       $a2, $zero, 0xD1
    ctx->pc = 0x2ac198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x2ac19c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac19cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1a0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AC1A0u;
    SET_GPR_U32(ctx, 31, 0x2AC1A8u);
    ctx->pc = 0x2AC1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1A0u;
            // 0x2ac1a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1A8u; }
        if (ctx->pc != 0x2AC1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1A8u; }
        if (ctx->pc != 0x2AC1A8u) { return; }
    }
    ctx->pc = 0x2AC1A8u;
label_2ac1a8:
    // 0x2ac1a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2AC1A8u;
    {
        const bool branch_taken_0x2ac1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1A8u;
            // 0x2ac1ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac1a8) {
            ctx->pc = 0x2AC1F0u;
            goto label_2ac1f0;
        }
    }
    ctx->pc = 0x2AC1B0u;
label_2ac1b0:
    // 0x2ac1b0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2ac1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ac1b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ac1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ac1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1c0: 0xc0aa45a  jal         func_2A9168
    ctx->pc = 0x2AC1C0u;
    SET_GPR_U32(ctx, 31, 0x2AC1C8u);
    ctx->pc = 0x2AC1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1C0u;
            // 0x2ac1c4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9168u;
    if (runtime->hasFunction(0x2A9168u)) {
        auto targetFn = runtime->lookupFunction(0x2A9168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1C8u; }
        if (ctx->pc != 0x2AC1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9168_0x2a9168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1C8u; }
        if (ctx->pc != 0x2AC1C8u) { return; }
    }
    ctx->pc = 0x2AC1C8u;
label_2ac1c8:
    // 0x2ac1c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ac1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1cc: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC1CCu;
    {
        const bool branch_taken_0x2ac1cc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2AC1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1CCu;
            // 0x2ac1d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac1cc) {
            ctx->pc = 0x2AC1F0u;
            goto label_2ac1f0;
        }
    }
    ctx->pc = 0x2AC1D4u;
    // 0x2ac1d4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac1d8: 0x240500bc  addiu       $a1, $zero, 0xBC
    ctx->pc = 0x2ac1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x2ac1dc: 0x24060804  addiu       $a2, $zero, 0x804
    ctx->pc = 0x2ac1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
    // 0x2ac1e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1e4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AC1E4u;
    SET_GPR_U32(ctx, 31, 0x2AC1ECu);
    ctx->pc = 0x2AC1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1E4u;
            // 0x2ac1e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1ECu; }
        if (ctx->pc != 0x2AC1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1ECu; }
        if (ctx->pc != 0x2AC1ECu) { return; }
    }
    ctx->pc = 0x2AC1ECu;
label_2ac1ec:
    // 0x2ac1ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ac1ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ac1f0:
    // 0x2ac1f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ac1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac1f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ac1f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac1f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ac1f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac1fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ac1fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac200: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ac200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac208: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC208u;
            // 0x2ac20c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC210u;
    ctx->pc = 0x2ac210u;
}
