#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FC08
// Address: 0x21fc08 - 0x21fda8
void sub_0021FC08_0x21fc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FC08_0x21fc08");
#endif

    switch (ctx->pc) {
        case 0x21fc5cu: goto label_21fc5c;
        case 0x21fc6cu: goto label_21fc6c;
        case 0x21fc7cu: goto label_21fc7c;
        case 0x21fc88u: goto label_21fc88;
        case 0x21fc98u: goto label_21fc98;
        case 0x21fcb4u: goto label_21fcb4;
        case 0x21fcd8u: goto label_21fcd8;
        case 0x21fcecu: goto label_21fcec;
        case 0x21fd00u: goto label_21fd00;
        case 0x21fd1cu: goto label_21fd1c;
        case 0x21fd30u: goto label_21fd30;
        case 0x21fd44u: goto label_21fd44;
        case 0x21fd4cu: goto label_21fd4c;
        case 0x21fd64u: goto label_21fd64;
        case 0x21fd84u: goto label_21fd84;
        case 0x21fd90u: goto label_21fd90;
        default: break;
    }

    ctx->pc = 0x21fc08u;

    // 0x21fc08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21fc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21fc0c: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x21fc0cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x21fc10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21fc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21fc14: 0x25cf2260  addiu       $t7, $t6, 0x2260
    ctx->pc = 0x21fc14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 8800));
    // 0x21fc18: 0x8de7001c  lw          $a3, 0x1C($t7)
    ctx->pc = 0x21fc18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x21fc1c: 0x8dc82260  lw          $t0, 0x2260($t6)
    ctx->pc = 0x21fc1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8800)));
    // 0x21fc20: 0x8ded0008  lw          $t5, 0x8($t7)
    ctx->pc = 0x21fc20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x21fc24: 0x8dee0004  lw          $t6, 0x4($t7)
    ctx->pc = 0x21fc24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x21fc28: 0x8dec000c  lw          $t4, 0xC($t7)
    ctx->pc = 0x21fc28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x21fc2c: 0x8deb0010  lw          $t3, 0x10($t7)
    ctx->pc = 0x21fc2cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x21fc30: 0x8dea0014  lw          $t2, 0x14($t7)
    ctx->pc = 0x21fc30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x21fc34: 0x8de90018  lw          $t1, 0x18($t7)
    ctx->pc = 0x21fc34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x21fc38: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x21fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x21fc3c: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x21fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x21fc40: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x21fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x21fc44: 0xafac000c  sw          $t4, 0xC($sp)
    ctx->pc = 0x21fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
    // 0x21fc48: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x21fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x21fc4c: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x21fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x21fc50: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x21fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x21fc54: 0xc089eae  jal         func_227AB8
    ctx->pc = 0x21FC54u;
    SET_GPR_U32(ctx, 31, 0x21FC5Cu);
    ctx->pc = 0x21FC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC54u;
            // 0x21fc58: 0xafa7001c  sw          $a3, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227AB8u;
    if (runtime->hasFunction(0x227AB8u)) {
        auto targetFn = runtime->lookupFunction(0x227AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC5Cu; }
        if (ctx->pc != 0x21FC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227AB8_0x227ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC5Cu; }
        if (ctx->pc != 0x21FC5Cu) { return; }
    }
    ctx->pc = 0x21FC5Cu;
label_21fc5c:
    // 0x21fc5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FC5Cu;
    {
        const bool branch_taken_0x21fc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC5Cu;
            // 0x21fc60: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc5c) {
            ctx->pc = 0x21FC7Cu;
            goto label_21fc7c;
        }
    }
    ctx->pc = 0x21FC64u;
    // 0x21fc64: 0xc087bee  jal         func_21EFB8
    ctx->pc = 0x21FC64u;
    SET_GPR_U32(ctx, 31, 0x21FC6Cu);
    ctx->pc = 0x21EFB8u;
    if (runtime->hasFunction(0x21EFB8u)) {
        auto targetFn = runtime->lookupFunction(0x21EFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC6Cu; }
        if (ctx->pc != 0x21FC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EFB8_0x21efb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC6Cu; }
        if (ctx->pc != 0x21FC6Cu) { return; }
    }
    ctx->pc = 0x21FC6Cu;
label_21fc6c:
    // 0x21fc6c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x21fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x21fc70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21fc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc74: 0xc089eb4  jal         func_227AD0
    ctx->pc = 0x21FC74u;
    SET_GPR_U32(ctx, 31, 0x21FC7Cu);
    ctx->pc = 0x21FC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC74u;
            // 0x21fc78: 0x34a55f92  ori         $a1, $a1, 0x5F92 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24466);
        ctx->in_delay_slot = false;
    ctx->pc = 0x227AD0u;
    if (runtime->hasFunction(0x227AD0u)) {
        auto targetFn = runtime->lookupFunction(0x227AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC7Cu; }
        if (ctx->pc != 0x21FC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227AD0_0x227ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC7Cu; }
        if (ctx->pc != 0x21FC7Cu) { return; }
    }
    ctx->pc = 0x21FC7Cu;
label_21fc7c:
    // 0x21fc7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21fc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fc80: 0x3e00008  jr          $ra
    ctx->pc = 0x21FC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC80u;
            // 0x21fc84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FC88u;
label_21fc88:
    // 0x21fc88: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x21fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x21fc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x21FC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC8Cu;
            // 0x21fc90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FC94u;
    // 0x21fc94: 0x0  nop
    ctx->pc = 0x21fc94u;
    // NOP
label_21fc98:
    // 0x21fc98: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x21fc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x21fc9c: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x21fc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x21fca0: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x21fca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x21fca4: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x21fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x21fca8: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x21fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x21fcac: 0xc087bee  jal         func_21EFB8
    ctx->pc = 0x21FCACu;
    SET_GPR_U32(ctx, 31, 0x21FCB4u);
    ctx->pc = 0x21FCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCACu;
            // 0x21fcb0: 0x27b00160  addiu       $s0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    if (runtime->hasFunction(0x21EFB8u)) {
        auto targetFn = runtime->lookupFunction(0x21EFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCB4u; }
        if (ctx->pc != 0x21FCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EFB8_0x21efb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCB4u; }
        if (ctx->pc != 0x21FCB4u) { return; }
    }
    ctx->pc = 0x21FCB4u;
label_21fcb4:
    // 0x21fcb4: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x21fcb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21fcb8: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x21fcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x21fcbc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21fcc0: 0x24c6bf6b  addiu       $a2, $a2, -0x4095
    ctx->pc = 0x21fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950763));
    // 0x21fcc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21fcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcc8: 0x24c7f889  addiu       $a3, $a2, -0x777
    ctx->pc = 0x21fcc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965385));
    // 0x21fccc: 0x24c8f8a5  addiu       $t0, $a2, -0x75B
    ctx->pc = 0x21fcccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965413));
    // 0x21fcd0: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21FCD0u;
    SET_GPR_U32(ctx, 31, 0x21FCD8u);
    ctx->pc = 0x21FCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCD0u;
            // 0x21fcd4: 0x24a52280  addiu       $a1, $a1, 0x2280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCD8u; }
        if (ctx->pc != 0x21FCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCD8u; }
        if (ctx->pc != 0x21FCD8u) { return; }
    }
    ctx->pc = 0x21FCD8u;
label_21fcd8:
    // 0x21fcd8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21fcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21fcdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fce0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x21fce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21fce4: 0xc0898da  jal         func_226368
    ctx->pc = 0x21FCE4u;
    SET_GPR_U32(ctx, 31, 0x21FCECu);
    ctx->pc = 0x21FCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCE4u;
            // 0x21fce8: 0x24a522a0  addiu       $a1, $a1, 0x22A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (runtime->hasFunction(0x226368u)) {
        auto targetFn = runtime->lookupFunction(0x226368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCECu; }
        if (ctx->pc != 0x21FCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226368_0x226368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCECu; }
        if (ctx->pc != 0x21FCECu) { return; }
    }
    ctx->pc = 0x21FCECu;
label_21fcec:
    // 0x21fcec: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21fcecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21fcf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcf4: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x21fcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x21fcf8: 0xc0898da  jal         func_226368
    ctx->pc = 0x21FCF8u;
    SET_GPR_U32(ctx, 31, 0x21FD00u);
    ctx->pc = 0x21FCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCF8u;
            // 0x21fcfc: 0x24a51cf0  addiu       $a1, $a1, 0x1CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    if (runtime->hasFunction(0x226368u)) {
        auto targetFn = runtime->lookupFunction(0x226368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD00u; }
        if (ctx->pc != 0x21FD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226368_0x226368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD00u; }
        if (ctx->pc != 0x21FD00u) { return; }
    }
    ctx->pc = 0x21FD00u;
label_21fd00:
    // 0x21fd00: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21fd00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21fd04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21fd04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd08: 0x8de8c258  lw          $t0, -0x3DA8($t7)
    ctx->pc = 0x21fd08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951512)));
    // 0x21fd0c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21fd0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fd14: 0xc087c24  jal         func_21F090
    ctx->pc = 0x21FD14u;
    SET_GPR_U32(ctx, 31, 0x21FD1Cu);
    ctx->pc = 0x21FD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD14u;
            // 0x21fd18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F090u;
    if (runtime->hasFunction(0x21F090u)) {
        auto targetFn = runtime->lookupFunction(0x21F090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD1Cu; }
        if (ctx->pc != 0x21FD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F090_0x21f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD1Cu; }
        if (ctx->pc != 0x21FD1Cu) { return; }
    }
    ctx->pc = 0x21FD1Cu;
label_21fd1c:
    // 0x21fd1c: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x21fd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x21fd20: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x21fd20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x21fd24: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x21fd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x21fd28: 0x3e00008  jr          $ra
    ctx->pc = 0x21FD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD28u;
            // 0x21fd2c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FD30u;
label_21fd30:
    // 0x21fd30: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x21fd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x21fd34: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x21fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x21fd38: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x21fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x21fd3c: 0xc089dda  jal         func_227768
    ctx->pc = 0x21FD3Cu;
    SET_GPR_U32(ctx, 31, 0x21FD44u);
    ctx->pc = 0x21FD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD3Cu;
            // 0x21fd40: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227768u;
    if (runtime->hasFunction(0x227768u)) {
        auto targetFn = runtime->lookupFunction(0x227768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD44u; }
        if (ctx->pc != 0x21FD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227768_0x227768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD44u; }
        if (ctx->pc != 0x21FD44u) { return; }
    }
    ctx->pc = 0x21FD44u;
label_21fd44:
    // 0x21fd44: 0xc0879fe  jal         func_21E7F8
    ctx->pc = 0x21FD44u;
    SET_GPR_U32(ctx, 31, 0x21FD4Cu);
    ctx->pc = 0x21FD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD44u;
            // 0x21fd48: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E7F8u;
    if (runtime->hasFunction(0x21E7F8u)) {
        auto targetFn = runtime->lookupFunction(0x21E7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD4Cu; }
        if (ctx->pc != 0x21FD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E7F8_0x21e7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD4Cu; }
        if (ctx->pc != 0x21FD4Cu) { return; }
    }
    ctx->pc = 0x21FD4Cu;
label_21fd4c:
    // 0x21fd4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21fd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21fd50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21FD54u;
    {
        const bool branch_taken_0x21fd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD54u;
            // 0x21fd58: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd54) {
            ctx->pc = 0x21FD84u;
            goto label_21fd84;
        }
    }
    ctx->pc = 0x21FD5Cu;
    // 0x21fd5c: 0xc08796e  jal         func_21E5B8
    ctx->pc = 0x21FD5Cu;
    SET_GPR_U32(ctx, 31, 0x21FD64u);
    ctx->pc = 0x21FD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD5Cu;
            // 0x21fd60: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E5B8u;
    if (runtime->hasFunction(0x21E5B8u)) {
        auto targetFn = runtime->lookupFunction(0x21E5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD64u; }
        if (ctx->pc != 0x21FD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E5B8_0x21e5b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD64u; }
        if (ctx->pc != 0x21FD64u) { return; }
    }
    ctx->pc = 0x21FD64u;
label_21fd64:
    // 0x21fd64: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21fd68: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21fd68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21fd6c: 0x2484b8e8  addiu       $a0, $a0, -0x4718
    ctx->pc = 0x21fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949096));
    // 0x21fd70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FD70u;
    {
        const bool branch_taken_0x21fd70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21FD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD70u;
            // 0x21fd74: 0x24c61c08  addiu       $a2, $a2, 0x1C08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd70) {
            ctx->pc = 0x21FD84u;
            goto label_21fd84;
        }
    }
    ctx->pc = 0x21FD78u;
    // 0x21fd78: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x21fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21fd7c: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21FD7Cu;
    SET_GPR_U32(ctx, 31, 0x21FD84u);
    ctx->pc = 0x21FD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD7Cu;
            // 0x21fd80: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (runtime->hasFunction(0x2262C0u)) {
        auto targetFn = runtime->lookupFunction(0x2262C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD84u; }
        if (ctx->pc != 0x21FD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002262C0_0x2262c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD84u; }
        if (ctx->pc != 0x21FD84u) { return; }
    }
    ctx->pc = 0x21FD84u;
label_21fd84:
    // 0x21fd84: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x21fd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x21fd88: 0x3e00008  jr          $ra
    ctx->pc = 0x21FD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD88u;
            // 0x21fd8c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FD90u;
label_21fd90:
    // 0x21fd90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21fd94: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x21fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21fd98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21fd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21fd9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fda0: 0x8087bee  j           func_21EFB8
    ctx->pc = 0x21FDA0u;
    ctx->pc = 0x21FDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FDA0u;
            // 0x21fda4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    if (runtime->hasFunction(0x21EFB8u)) {
        auto targetFn = runtime->lookupFunction(0x21EFB8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0021EFB8_0x21efb8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21FDA8u;
    ctx->pc = 0x21fda8u;
}
