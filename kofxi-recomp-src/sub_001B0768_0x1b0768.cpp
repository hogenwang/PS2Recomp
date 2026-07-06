#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0768
// Address: 0x1b0768 - 0x1b0850
void sub_001B0768_0x1b0768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0768_0x1b0768");
#endif

    switch (ctx->pc) {
        case 0x1b07c0u: goto label_1b07c0;
        case 0x1b07dcu: goto label_1b07dc;
        case 0x1b07f8u: goto label_1b07f8;
        case 0x1b081cu: goto label_1b081c;
        case 0x1b082cu: goto label_1b082c;
        case 0x1b0834u: goto label_1b0834;
        default: break;
    }

    ctx->pc = 0x1b0768u;

    // 0x1b0768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b076c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1b076cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0778: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b0778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b077c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B077Cu;
    {
        const bool branch_taken_0x1b077c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B077Cu;
            // 0x1b0780: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b077c) {
            ctx->pc = 0x1B0790u;
            goto label_1b0790;
        }
    }
    ctx->pc = 0x1B0784u;
    // 0x1b0784: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b0784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b0788: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B0788u;
    {
        const bool branch_taken_0x1b0788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B078Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0788u;
            // 0x1b078c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0788) {
            ctx->pc = 0x1B07B8u;
            goto label_1b07b8;
        }
    }
    ctx->pc = 0x1B0790u;
label_1b0790:
    // 0x1b0790: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0790u;
    {
        const bool branch_taken_0x1b0790 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0790) {
            ctx->pc = 0x1B07A8u;
            goto label_1b07a8;
        }
    }
    ctx->pc = 0x1B0798u;
    // 0x1b0798: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b0798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b079c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B079Cu;
    {
        const bool branch_taken_0x1b079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B079Cu;
            // 0x1b07a0: 0x24847708  addiu       $a0, $a0, 0x7708 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b079c) {
            ctx->pc = 0x1B07B8u;
            goto label_1b07b8;
        }
    }
    ctx->pc = 0x1B07A4u;
    // 0x1b07a4: 0x0  nop
    ctx->pc = 0x1b07a4u;
    // NOP
label_1b07a8:
    // 0x1b07a8: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B07A8u;
    {
        const bool branch_taken_0x1b07a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b07a8) {
            ctx->pc = 0x1B07ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07A8u;
            // 0x1b07ac: 0x82070001  lb          $a3, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B07C8u;
            goto label_1b07c8;
        }
    }
    ctx->pc = 0x1B07B0u;
    // 0x1b07b0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b07b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b07b4: 0x24847738  addiu       $a0, $a0, 0x7738
    ctx->pc = 0x1b07b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30520));
label_1b07b8:
    // 0x1b07b8: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B07B8u;
    SET_GPR_U32(ctx, 31, 0x1B07C0u);
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07C0u; }
        if (ctx->pc != 0x1B07C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07C0u; }
        if (ctx->pc != 0x1B07C0u) { return; }
    }
    ctx->pc = 0x1B07C0u;
label_1b07c0:
    // 0x1b07c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B07C0u;
    {
        const bool branch_taken_0x1b07c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07C0u;
            // 0x1b07c4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07c0) {
            ctx->pc = 0x1B07E4u;
            goto label_1b07e4;
        }
    }
    ctx->pc = 0x1B07C8u;
label_1b07c8:
    // 0x1b07c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b07cc: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B07CCu;
    {
        const bool branch_taken_0x1b07cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B07D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07CCu;
            // 0x1b07d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07cc) {
            ctx->pc = 0x1B07E4u;
            goto label_1b07e4;
        }
    }
    ctx->pc = 0x1B07D4u;
    // 0x1b07d4: 0xc06c184  jal         func_1B0610
    ctx->pc = 0x1B07D4u;
    SET_GPR_U32(ctx, 31, 0x1B07DCu);
    ctx->pc = 0x1B0610u;
    if (runtime->hasFunction(0x1B0610u)) {
        auto targetFn = runtime->lookupFunction(0x1B0610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07DCu; }
        if (ctx->pc != 0x1B07DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0610_0x1b0610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07DCu; }
        if (ctx->pc != 0x1B07DCu) { return; }
    }
    ctx->pc = 0x1B07DCu;
label_1b07dc:
    // 0x1b07dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b07e0: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1b07e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1b07e4:
    // 0x1b07e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b07e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b07e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b07e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b07ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B07ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B07F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07ECu;
            // 0x1b07f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B07F4u;
    // 0x1b07f4: 0x0  nop
    ctx->pc = 0x1b07f4u;
    // NOP
label_1b07f8:
    // 0x1b07f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b07f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b07fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b07fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0804: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0808: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b0808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b080c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0810: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b0810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b0814: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B0814u;
    SET_GPR_U32(ctx, 31, 0x1B081Cu);
    ctx->pc = 0x1B0818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0814u;
            // 0x1b0818: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B081Cu; }
        if (ctx->pc != 0x1B081Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B081Cu; }
        if (ctx->pc != 0x1B081Cu) { return; }
    }
    ctx->pc = 0x1B081Cu;
label_1b081c:
    // 0x1b081c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b081cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0824: 0xc06c214  jal         func_1B0850
    ctx->pc = 0x1B0824u;
    SET_GPR_U32(ctx, 31, 0x1B082Cu);
    ctx->pc = 0x1B0828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0824u;
            // 0x1b0828: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0850u;
    if (runtime->hasFunction(0x1B0850u)) {
        auto targetFn = runtime->lookupFunction(0x1B0850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B082Cu; }
        if (ctx->pc != 0x1B082Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0850_0x1b0850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B082Cu; }
        if (ctx->pc != 0x1B082Cu) { return; }
    }
    ctx->pc = 0x1B082Cu;
label_1b082c:
    // 0x1b082c: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B082Cu;
    SET_GPR_U32(ctx, 31, 0x1B0834u);
    ctx->pc = 0x1B0830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B082Cu;
            // 0x1b0830: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0834u; }
        if (ctx->pc != 0x1B0834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0834u; }
        if (ctx->pc != 0x1B0834u) { return; }
    }
    ctx->pc = 0x1B0834u;
label_1b0834:
    // 0x1b0834: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0838: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b083c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b083cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0844: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b0844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0848: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B084Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0848u;
            // 0x1b084c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0850u;
    ctx->pc = 0x1b0850u;
}
