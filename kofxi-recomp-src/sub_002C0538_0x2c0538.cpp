#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0538
// Address: 0x2c0538 - 0x2c07d0
void sub_002C0538_0x2c0538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0538_0x2c0538");
#endif

    switch (ctx->pc) {
        case 0x2c0554u: goto label_2c0554;
        case 0x2c055cu: goto label_2c055c;
        case 0x2c0568u: goto label_2c0568;
        case 0x2c058cu: goto label_2c058c;
        case 0x2c0598u: goto label_2c0598;
        case 0x2c05a4u: goto label_2c05a4;
        case 0x2c05acu: goto label_2c05ac;
        case 0x2c05c8u: goto label_2c05c8;
        case 0x2c05dcu: goto label_2c05dc;
        case 0x2c05e8u: goto label_2c05e8;
        case 0x2c0604u: goto label_2c0604;
        case 0x2c060cu: goto label_2c060c;
        case 0x2c0618u: goto label_2c0618;
        case 0x2c063cu: goto label_2c063c;
        case 0x2c0644u: goto label_2c0644;
        case 0x2c0658u: goto label_2c0658;
        case 0x2c0694u: goto label_2c0694;
        case 0x2c06a0u: goto label_2c06a0;
        case 0x2c06bcu: goto label_2c06bc;
        case 0x2c06d0u: goto label_2c06d0;
        case 0x2c06dcu: goto label_2c06dc;
        case 0x2c06f8u: goto label_2c06f8;
        case 0x2c0724u: goto label_2c0724;
        case 0x2c07b0u: goto label_2c07b0;
        case 0x2c07c0u: goto label_2c07c0;
        default: break;
    }

    ctx->pc = 0x2c0538u;

    // 0x2c0538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c0538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c053c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0540: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c0540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c0544: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c0544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0548: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c0548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c054c: 0xc0a8df2  jal         func_2A37C8
    ctx->pc = 0x2C054Cu;
    SET_GPR_U32(ctx, 31, 0x2C0554u);
    ctx->pc = 0x2C0550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C054Cu;
            // 0x2c0550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A37C8u;
    if (runtime->hasFunction(0x2A37C8u)) {
        auto targetFn = runtime->lookupFunction(0x2A37C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0554u; }
        if (ctx->pc != 0x2C0554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A37C8_0x2a37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0554u; }
        if (ctx->pc != 0x2C0554u) { return; }
    }
    ctx->pc = 0x2C0554u;
label_2c0554:
    // 0x2c0554: 0xc0a8df2  jal         func_2A37C8
    ctx->pc = 0x2C0554u;
    SET_GPR_U32(ctx, 31, 0x2C055Cu);
    ctx->pc = 0x2C0558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0554u;
            // 0x2c0558: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A37C8u;
    if (runtime->hasFunction(0x2A37C8u)) {
        auto targetFn = runtime->lookupFunction(0x2A37C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C055Cu; }
        if (ctx->pc != 0x2C055Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A37C8_0x2a37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C055Cu; }
        if (ctx->pc != 0x2C055Cu) { return; }
    }
    ctx->pc = 0x2C055Cu;
label_2c055c:
    // 0x2c055c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c055cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0560: 0xc0a8a3e  jal         func_2A28F8
    ctx->pc = 0x2C0560u;
    SET_GPR_U32(ctx, 31, 0x2C0568u);
    ctx->pc = 0x2C0564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0560u;
            // 0x2c0564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A28F8u;
    if (runtime->hasFunction(0x2A28F8u)) {
        auto targetFn = runtime->lookupFunction(0x2A28F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0568u; }
        if (ctx->pc != 0x2C0568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A28F8_0x2a28f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0568u; }
        if (ctx->pc != 0x2C0568u) { return; }
    }
    ctx->pc = 0x2C0568u;
label_2c0568:
    // 0x2c0568: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c0568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c056c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2c056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2c0570: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0570u;
    {
        const bool branch_taken_0x2c0570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0570) {
            ctx->pc = 0x2C0574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0570u;
            // 0x2c0574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0590u;
            goto label_2c0590;
        }
    }
    ctx->pc = 0x2C0578u;
    // 0x2c0578: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2c0578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c057c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c057cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0580: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2c0580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c0584: 0xc0a8e64  jal         func_2A3990
    ctx->pc = 0x2C0584u;
    SET_GPR_U32(ctx, 31, 0x2C058Cu);
    ctx->pc = 0x2C0588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0584u;
            // 0x2c0588: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3990u;
    if (runtime->hasFunction(0x2A3990u)) {
        auto targetFn = runtime->lookupFunction(0x2A3990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C058Cu; }
        if (ctx->pc != 0x2C058Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3990_0x2a3990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C058Cu; }
        if (ctx->pc != 0x2C058Cu) { return; }
    }
    ctx->pc = 0x2C058Cu;
label_2c058c:
    // 0x2c058c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c058cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0590:
    // 0x2c0590: 0xc0a8e4e  jal         func_2A3938
    ctx->pc = 0x2C0590u;
    SET_GPR_U32(ctx, 31, 0x2C0598u);
    ctx->pc = 0x2C0594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0590u;
            // 0x2c0594: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3938u;
    if (runtime->hasFunction(0x2A3938u)) {
        auto targetFn = runtime->lookupFunction(0x2A3938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0598u; }
        if (ctx->pc != 0x2C0598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3938_0x2a3938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0598u; }
        if (ctx->pc != 0x2C0598u) { return; }
    }
    ctx->pc = 0x2C0598u;
label_2c0598:
    // 0x2c0598: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c059c: 0xc0a8e0a  jal         func_2A3828
    ctx->pc = 0x2C059Cu;
    SET_GPR_U32(ctx, 31, 0x2C05A4u);
    ctx->pc = 0x2C05A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C059Cu;
            // 0x2c05a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3828u;
    if (runtime->hasFunction(0x2A3828u)) {
        auto targetFn = runtime->lookupFunction(0x2A3828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05A4u; }
        if (ctx->pc != 0x2C05A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3828_0x2a3828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05A4u; }
        if (ctx->pc != 0x2C05A4u) { return; }
    }
    ctx->pc = 0x2C05A4u;
label_2c05a4:
    // 0x2c05a4: 0xc0a8e0a  jal         func_2A3828
    ctx->pc = 0x2C05A4u;
    SET_GPR_U32(ctx, 31, 0x2C05ACu);
    ctx->pc = 0x2C05A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05A4u;
            // 0x2c05a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3828u;
    if (runtime->hasFunction(0x2A3828u)) {
        auto targetFn = runtime->lookupFunction(0x2A3828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05ACu; }
        if (ctx->pc != 0x2C05ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3828_0x2a3828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05ACu; }
        if (ctx->pc != 0x2C05ACu) { return; }
    }
    ctx->pc = 0x2C05ACu;
label_2c05ac:
    // 0x2c05ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c05acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c05b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c05b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c05b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c05b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c05b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c05bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c05bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c05c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C05C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C05C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05C0u;
            // 0x2c05c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C05C8u;
label_2c05c8:
    // 0x2c05c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c05c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c05cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c05ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c05d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c05d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c05d4: 0xc0a3528  jal         func_28D4A0
    ctx->pc = 0x2C05D4u;
    SET_GPR_U32(ctx, 31, 0x2C05DCu);
    ctx->pc = 0x2C05D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05D4u;
            // 0x2c05d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D4A0u;
    if (runtime->hasFunction(0x28D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x28D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05DCu; }
        if (ctx->pc != 0x2C05DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D4A0_0x28d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05DCu; }
        if (ctx->pc != 0x2C05DCu) { return; }
    }
    ctx->pc = 0x2C05DCu;
label_2c05dc:
    // 0x2c05dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c05dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05e0: 0xc0afec8  jal         func_2BFB20
    ctx->pc = 0x2C05E0u;
    SET_GPR_U32(ctx, 31, 0x2C05E8u);
    ctx->pc = 0x2C05E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05E0u;
            // 0x2c05e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFB20u;
    if (runtime->hasFunction(0x2BFB20u)) {
        auto targetFn = runtime->lookupFunction(0x2BFB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05E8u; }
        if (ctx->pc != 0x2C05E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFB20_0x2bfb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05E8u; }
        if (ctx->pc != 0x2C05E8u) { return; }
    }
    ctx->pc = 0x2C05E8u;
label_2c05e8:
    // 0x2c05e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C05E8u;
    {
        const bool branch_taken_0x2c05e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C05ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05E8u;
            // 0x2c05ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05e8) {
            ctx->pc = 0x2C0620u;
            goto label_2c0620;
        }
    }
    ctx->pc = 0x2C05F0u;
    // 0x2c05f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c05f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c05f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c05f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05f8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c05f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c05fc: 0xc0afe12  jal         func_2BF848
    ctx->pc = 0x2C05FCu;
    SET_GPR_U32(ctx, 31, 0x2C0604u);
    ctx->pc = 0x2C0600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C05FCu;
            // 0x2c0600: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF848u;
    if (runtime->hasFunction(0x2BF848u)) {
        auto targetFn = runtime->lookupFunction(0x2BF848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0604u; }
        if (ctx->pc != 0x2C0604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF848_0x2bf848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0604u; }
        if (ctx->pc != 0x2C0604u) { return; }
    }
    ctx->pc = 0x2C0604u;
label_2c0604:
    // 0x2c0604: 0xc0a337c  jal         func_28CDF0
    ctx->pc = 0x2C0604u;
    SET_GPR_U32(ctx, 31, 0x2C060Cu);
    ctx->pc = 0x28CDF0u;
    if (runtime->hasFunction(0x28CDF0u)) {
        auto targetFn = runtime->lookupFunction(0x28CDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C060Cu; }
        if (ctx->pc != 0x2C060Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CDF0_0x28cdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C060Cu; }
        if (ctx->pc != 0x2C060Cu) { return; }
    }
    ctx->pc = 0x2C060Cu;
label_2c060c:
    // 0x2c060c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c060cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0610: 0xc0afec8  jal         func_2BFB20
    ctx->pc = 0x2C0610u;
    SET_GPR_U32(ctx, 31, 0x2C0618u);
    ctx->pc = 0x2C0614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0610u;
            // 0x2c0614: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFB20u;
    if (runtime->hasFunction(0x2BFB20u)) {
        auto targetFn = runtime->lookupFunction(0x2BFB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0618u; }
        if (ctx->pc != 0x2C0618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFB20_0x2bfb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0618u; }
        if (ctx->pc != 0x2C0618u) { return; }
    }
    ctx->pc = 0x2C0618u;
label_2c0618:
    // 0x2c0618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0618u;
    {
        const bool branch_taken_0x2c0618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C061Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0618u;
            // 0x2c061c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0618) {
            ctx->pc = 0x2C0628u;
            goto label_2c0628;
        }
    }
    ctx->pc = 0x2C0620u;
label_2c0620:
    // 0x2c0620: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C0620u;
    {
        const bool branch_taken_0x2c0620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0620u;
            // 0x2c0624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0620) {
            ctx->pc = 0x2C0648u;
            goto label_2c0648;
        }
    }
    ctx->pc = 0x2C0628u;
label_2c0628:
    // 0x2c0628: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c0628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c062c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c062cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0630: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c0630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0634: 0xc0afe12  jal         func_2BF848
    ctx->pc = 0x2C0634u;
    SET_GPR_U32(ctx, 31, 0x2C063Cu);
    ctx->pc = 0x2C0638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0634u;
            // 0x2c0638: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF848u;
    if (runtime->hasFunction(0x2BF848u)) {
        auto targetFn = runtime->lookupFunction(0x2BF848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C063Cu; }
        if (ctx->pc != 0x2C063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF848_0x2bf848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C063Cu; }
        if (ctx->pc != 0x2C063Cu) { return; }
    }
    ctx->pc = 0x2C063Cu;
label_2c063c:
    // 0x2c063c: 0xc0a56b6  jal         func_295AD8
    ctx->pc = 0x2C063Cu;
    SET_GPR_U32(ctx, 31, 0x2C0644u);
    ctx->pc = 0x295AD8u;
    if (runtime->hasFunction(0x295AD8u)) {
        auto targetFn = runtime->lookupFunction(0x295AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0644u; }
        if (ctx->pc != 0x2C0644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295AD8_0x295ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0644u; }
        if (ctx->pc != 0x2C0644u) { return; }
    }
    ctx->pc = 0x2C0644u;
label_2c0644:
    // 0x2c0644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c0648:
    // 0x2c0648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c064c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c064cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0650: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0650u;
            // 0x2c0654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0658u;
label_2c0658:
    // 0x2c0658: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c0658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c065c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c065cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c0660: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c0660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c0664: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2c0664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0668: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c0668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c066c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c066cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0670: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c0670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0674: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c0674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c0678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c067c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2c067cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0680: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c0680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c0684: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C0684u;
    {
        const bool branch_taken_0x2c0684 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0684u;
            // 0x2c0688: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0684) {
            ctx->pc = 0x2C06C0u;
            goto label_2c06c0;
        }
    }
    ctx->pc = 0x2C068Cu;
    // 0x2c068c: 0xc0a3528  jal         func_28D4A0
    ctx->pc = 0x2C068Cu;
    SET_GPR_U32(ctx, 31, 0x2C0694u);
    ctx->pc = 0x28D4A0u;
    if (runtime->hasFunction(0x28D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x28D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0694u; }
        if (ctx->pc != 0x2C0694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D4A0_0x28d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0694u; }
        if (ctx->pc != 0x2C0694u) { return; }
    }
    ctx->pc = 0x2C0694u;
label_2c0694:
    // 0x2c0694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c0694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0698: 0xc0afec8  jal         func_2BFB20
    ctx->pc = 0x2C0698u;
    SET_GPR_U32(ctx, 31, 0x2C06A0u);
    ctx->pc = 0x2C069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0698u;
            // 0x2c069c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFB20u;
    if (runtime->hasFunction(0x2BFB20u)) {
        auto targetFn = runtime->lookupFunction(0x2BFB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06A0u; }
        if (ctx->pc != 0x2C06A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFB20_0x2bfb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06A0u; }
        if (ctx->pc != 0x2C06A0u) { return; }
    }
    ctx->pc = 0x2C06A0u;
label_2c06a0:
    // 0x2c06a0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C06A0u;
    {
        const bool branch_taken_0x2c06a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C06A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06A0u;
            // 0x2c06a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c06a0) {
            ctx->pc = 0x2C0724u;
            goto label_2c0724;
        }
    }
    ctx->pc = 0x2C06A8u;
    // 0x2c06a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c06a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c06acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c06b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c06b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c06b4: 0xc0afe12  jal         func_2BF848
    ctx->pc = 0x2C06B4u;
    SET_GPR_U32(ctx, 31, 0x2C06BCu);
    ctx->pc = 0x2C06B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06B4u;
            // 0x2c06b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF848u;
    if (runtime->hasFunction(0x2BF848u)) {
        auto targetFn = runtime->lookupFunction(0x2BF848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06BCu; }
        if (ctx->pc != 0x2C06BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF848_0x2bf848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06BCu; }
        if (ctx->pc != 0x2C06BCu) { return; }
    }
    ctx->pc = 0x2C06BCu;
label_2c06bc:
    // 0x2c06bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c06bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c06c0:
    // 0x2c06c0: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2C06C0u;
    {
        const bool branch_taken_0x2c06c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C06C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06C0u;
            // 0x2c06c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c06c0) {
            ctx->pc = 0x2C0700u;
            goto label_2c0700;
        }
    }
    ctx->pc = 0x2C06C8u;
    // 0x2c06c8: 0xc0a337c  jal         func_28CDF0
    ctx->pc = 0x2C06C8u;
    SET_GPR_U32(ctx, 31, 0x2C06D0u);
    ctx->pc = 0x28CDF0u;
    if (runtime->hasFunction(0x28CDF0u)) {
        auto targetFn = runtime->lookupFunction(0x28CDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06D0u; }
        if (ctx->pc != 0x2C06D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CDF0_0x28cdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06D0u; }
        if (ctx->pc != 0x2C06D0u) { return; }
    }
    ctx->pc = 0x2C06D0u;
label_2c06d0:
    // 0x2c06d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c06d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06d4: 0xc0afec8  jal         func_2BFB20
    ctx->pc = 0x2C06D4u;
    SET_GPR_U32(ctx, 31, 0x2C06DCu);
    ctx->pc = 0x2C06D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06D4u;
            // 0x2c06d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFB20u;
    if (runtime->hasFunction(0x2BFB20u)) {
        auto targetFn = runtime->lookupFunction(0x2BFB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06DCu; }
        if (ctx->pc != 0x2C06DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFB20_0x2bfb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06DCu; }
        if (ctx->pc != 0x2C06DCu) { return; }
    }
    ctx->pc = 0x2C06DCu;
label_2c06dc:
    // 0x2c06dc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C06DCu;
    {
        const bool branch_taken_0x2c06dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C06E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06DCu;
            // 0x2c06e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c06dc) {
            ctx->pc = 0x2C0724u;
            goto label_2c0724;
        }
    }
    ctx->pc = 0x2C06E4u;
    // 0x2c06e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c06e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c06e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c06ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c06ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c06f0: 0xc0afe12  jal         func_2BF848
    ctx->pc = 0x2C06F0u;
    SET_GPR_U32(ctx, 31, 0x2C06F8u);
    ctx->pc = 0x2C06F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06F0u;
            // 0x2c06f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF848u;
    if (runtime->hasFunction(0x2BF848u)) {
        auto targetFn = runtime->lookupFunction(0x2BF848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06F8u; }
        if (ctx->pc != 0x2C06F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF848_0x2bf848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06F8u; }
        if (ctx->pc != 0x2C06F8u) { return; }
    }
    ctx->pc = 0x2C06F8u;
label_2c06f8:
    // 0x2c06f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c06f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c0700:
    // 0x2c0700: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C0700u;
    {
        const bool branch_taken_0x2c0700 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0700) {
            ctx->pc = 0x2C072Cu;
            goto label_2c072c;
        }
    }
    ctx->pc = 0x2C0708u;
    // 0x2c0708: 0x16110008  bne         $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0708u;
    {
        const bool branch_taken_0x2c0708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2C070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0708u;
            // 0x2c070c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0708) {
            ctx->pc = 0x2C072Cu;
            goto label_2c072c;
        }
    }
    ctx->pc = 0x2C0710u;
    // 0x2c0710: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x2c0710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x2c0714: 0x2406009e  addiu       $a2, $zero, 0x9E
    ctx->pc = 0x2c0714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x2c0718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c071c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C071Cu;
    SET_GPR_U32(ctx, 31, 0x2C0724u);
    ctx->pc = 0x2C0720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C071Cu;
            // 0x2c0720: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0724u; }
        if (ctx->pc != 0x2C0724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0724u; }
        if (ctx->pc != 0x2C0724u) { return; }
    }
    ctx->pc = 0x2C0724u;
label_2c0724:
    // 0x2c0724: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C0724u;
    {
        const bool branch_taken_0x2c0724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0724u;
            // 0x2c0728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0724) {
            ctx->pc = 0x2C078Cu;
            goto label_2c078c;
        }
    }
    ctx->pc = 0x2C072Cu;
label_2c072c:
    // 0x2c072c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C072Cu;
    {
        const bool branch_taken_0x2c072c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C072Cu;
            // 0x2c0730: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c072c) {
            ctx->pc = 0x2C0748u;
            goto label_2c0748;
        }
    }
    ctx->pc = 0x2C0734u;
    // 0x2c0734: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C0734u;
    {
        const bool branch_taken_0x2c0734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0734u;
            // 0x2c0738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0734) {
            ctx->pc = 0x2C078Cu;
            goto label_2c078c;
        }
    }
    ctx->pc = 0x2C073Cu;
    // 0x2c073c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0740: 0x52020012  beql        $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C0740u;
    {
        const bool branch_taken_0x2c0740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c0740) {
            ctx->pc = 0x2C0744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0740u;
            // 0x2c0744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C078Cu;
            goto label_2c078c;
        }
    }
    ctx->pc = 0x2C0748u;
label_2c0748:
    // 0x2c0748: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0748u;
    {
        const bool branch_taken_0x2c0748 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0748) {
            ctx->pc = 0x2C0758u;
            goto label_2c0758;
        }
    }
    ctx->pc = 0x2C0750u;
    // 0x2c0750: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C0750u;
    {
        const bool branch_taken_0x2c0750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0750u;
            // 0x2c0754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0750) {
            ctx->pc = 0x2C078Cu;
            goto label_2c078c;
        }
    }
    ctx->pc = 0x2C0758u;
label_2c0758:
    // 0x2c0758: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0758u;
    {
        const bool branch_taken_0x2c0758 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2C075Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0758u;
            // 0x2c075c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0758) {
            ctx->pc = 0x2C0768u;
            goto label_2c0768;
        }
    }
    ctx->pc = 0x2C0760u;
    // 0x2c0760: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0760u;
    {
        const bool branch_taken_0x2c0760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0760u;
            // 0x2c0764: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0760) {
            ctx->pc = 0x2C077Cu;
            goto label_2c077c;
        }
    }
    ctx->pc = 0x2C0768u;
label_2c0768:
    // 0x2c0768: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c0768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c076c: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C076Cu;
    {
        const bool branch_taken_0x2c076c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c076c) {
            ctx->pc = 0x2C0770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C076Cu;
            // 0x2c0770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C078Cu;
            goto label_2c078c;
        }
    }
    ctx->pc = 0x2C0774u;
    // 0x2c0774: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0774u;
    {
        const bool branch_taken_0x2c0774 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2C0778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0774u;
            // 0x2c0778: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0774) {
            ctx->pc = 0x2C0788u;
            goto label_2c0788;
        }
    }
    ctx->pc = 0x2C077Cu;
label_2c077c:
    // 0x2c077c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c077cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0780u;
    {
        const bool branch_taken_0x2c0780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0780u;
            // 0x2c0784: 0x203100a  movz        $v0, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0780) {
            ctx->pc = 0x2C078Cu;
            goto label_2c078c;
        }
    }
    ctx->pc = 0x2C0788u;
label_2c0788:
    // 0x2c0788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c078c:
    // 0x2c078c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c078cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0790: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c0790u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0794: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c0794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0798: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c0798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c079c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c079cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c07a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c07a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c07a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C07A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C07A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C07A4u;
            // 0x2c07a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C07ACu;
    // 0x2c07ac: 0x0  nop
    ctx->pc = 0x2c07acu;
    // NOP
label_2c07b0:
    // 0x2c07b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2c07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2c07b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C07B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C07B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C07B4u;
            // 0x2c07b8: 0x2442eca8  addiu       $v0, $v0, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C07BCu;
    // 0x2c07bc: 0x0  nop
    ctx->pc = 0x2c07bcu;
    // NOP
label_2c07c0:
    // 0x2c07c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2c07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2c07c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C07C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C07C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C07C4u;
            // 0x2c07c8: 0x2442ecc0  addiu       $v0, $v0, -0x1340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C07CCu;
    // 0x2c07cc: 0x0  nop
    ctx->pc = 0x2c07ccu;
    // NOP
    ctx->pc = 0x2c07d0u;
}
