#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4258
// Address: 0x1f4258 - 0x1f4410
void sub_001F4258_0x1f4258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4258_0x1f4258");
#endif

    switch (ctx->pc) {
        case 0x1f4274u: goto label_1f4274;
        case 0x1f4290u: goto label_1f4290;
        case 0x1f429cu: goto label_1f429c;
        case 0x1f42b0u: goto label_1f42b0;
        case 0x1f42d4u: goto label_1f42d4;
        case 0x1f42e8u: goto label_1f42e8;
        case 0x1f42f8u: goto label_1f42f8;
        case 0x1f4300u: goto label_1f4300;
        case 0x1f4340u: goto label_1f4340;
        case 0x1f4348u: goto label_1f4348;
        case 0x1f4358u: goto label_1f4358;
        case 0x1f4380u: goto label_1f4380;
        case 0x1f4388u: goto label_1f4388;
        case 0x1f4398u: goto label_1f4398;
        case 0x1f43a4u: goto label_1f43a4;
        case 0x1f43b4u: goto label_1f43b4;
        case 0x1f43c4u: goto label_1f43c4;
        case 0x1f43ccu: goto label_1f43cc;
        case 0x1f43f0u: goto label_1f43f0;
        default: break;
    }

    ctx->pc = 0x1f4258u;

    // 0x1f4258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f425c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f4260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4264: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f4264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f4268: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f426c: 0xc07aba0  jal         func_1EAE80
    ctx->pc = 0x1F426Cu;
    SET_GPR_U32(ctx, 31, 0x1F4274u);
    ctx->pc = 0x1F4270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F426Cu;
            // 0x1f4270: 0x8e052020  lw          $a1, 0x2020($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE80u;
    if (runtime->hasFunction(0x1EAE80u)) {
        auto targetFn = runtime->lookupFunction(0x1EAE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4274u; }
        if (ctx->pc != 0x1F4274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAE80_0x1eae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4274u; }
        if (ctx->pc != 0x1F4274u) { return; }
    }
    ctx->pc = 0x1F4274u;
label_1f4274:
    // 0x1f4274: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f4274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4278: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1f4278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f427c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1f427cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1f4280: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4280u;
    {
        const bool branch_taken_0x1f4280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4280u;
            // 0x1f4284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4280) {
            ctx->pc = 0x1F42A0u;
            goto label_1f42a0;
        }
    }
    ctx->pc = 0x1F4288u;
    // 0x1f4288: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F4288u;
    SET_GPR_U32(ctx, 31, 0x1F4290u);
    ctx->pc = 0x1EB660u;
    if (runtime->hasFunction(0x1EB660u)) {
        auto targetFn = runtime->lookupFunction(0x1EB660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4290u; }
        if (ctx->pc != 0x1F4290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB660_0x1eb660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4290u; }
        if (ctx->pc != 0x1F4290u) { return; }
    }
    ctx->pc = 0x1F4290u;
label_1f4290:
    // 0x1f4290: 0xde0409a0  ld          $a0, 0x9A0($s0)
    ctx->pc = 0x1f4290u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2464)));
    // 0x1f4294: 0xc07ae06  jal         func_1EB818
    ctx->pc = 0x1F4294u;
    SET_GPR_U32(ctx, 31, 0x1F429Cu);
    ctx->pc = 0x1F4298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4294u;
            // 0x1f4298: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB818u;
    if (runtime->hasFunction(0x1EB818u)) {
        auto targetFn = runtime->lookupFunction(0x1EB818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F429Cu; }
        if (ctx->pc != 0x1F429Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB818_0x1eb818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F429Cu; }
        if (ctx->pc != 0x1F429Cu) { return; }
    }
    ctx->pc = 0x1F429Cu;
label_1f429c:
    // 0x1f429c: 0xfe0209a0  sd          $v0, 0x9A0($s0)
    ctx->pc = 0x1f429cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2464), GPR_U64(ctx, 2));
label_1f42a0:
    // 0x1f42a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f42a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f42a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f42a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f42a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F42A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F42ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42A8u;
            // 0x1f42ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F42B0u;
label_1f42b0:
    // 0x1f42b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f42b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f42b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f42b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f42b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f42b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f42bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f42bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f42c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f42c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f42c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f42c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f42c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f42cc: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F42CCu;
    SET_GPR_U32(ctx, 31, 0x1F42D4u);
    ctx->pc = 0x1F42D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42CCu;
            // 0x1f42d0: 0x26322400  addiu       $s2, $s1, 0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 9216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42D4u; }
        if (ctx->pc != 0x1F42D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42D4u; }
        if (ctx->pc != 0x1F42D4u) { return; }
    }
    ctx->pc = 0x1F42D4u;
label_1f42d4:
    // 0x1f42d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f42d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42d8: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1F42D8u;
    {
        const bool branch_taken_0x1f42d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F42DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42D8u;
            // 0x1f42dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f42d8) {
            ctx->pc = 0x1F43F4u;
            goto label_1f43f4;
        }
    }
    ctx->pc = 0x1F42E0u;
    // 0x1f42e0: 0xc07d104  jal         func_1F4410
    ctx->pc = 0x1F42E0u;
    SET_GPR_U32(ctx, 31, 0x1F42E8u);
    ctx->pc = 0x1F42E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42E0u;
            // 0x1f42e4: 0xae322018  sw          $s2, 0x2018($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8216), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4410u;
    if (runtime->hasFunction(0x1F4410u)) {
        auto targetFn = runtime->lookupFunction(0x1F4410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42E8u; }
        if (ctx->pc != 0x1F42E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4410_0x1f4410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42E8u; }
        if (ctx->pc != 0x1F42E8u) { return; }
    }
    ctx->pc = 0x1F42E8u;
label_1f42e8:
    // 0x1f42e8: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F42E8u;
    {
        const bool branch_taken_0x1f42e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F42ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42E8u;
            // 0x1f42ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f42e8) {
            ctx->pc = 0x1F43F4u;
            goto label_1f43f4;
        }
    }
    ctx->pc = 0x1F42F0u;
    // 0x1f42f0: 0xc07d958  jal         func_1F6560
    ctx->pc = 0x1F42F0u;
    SET_GPR_U32(ctx, 31, 0x1F42F8u);
    ctx->pc = 0x1F6560u;
    if (runtime->hasFunction(0x1F6560u)) {
        auto targetFn = runtime->lookupFunction(0x1F6560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42F8u; }
        if (ctx->pc != 0x1F42F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6560_0x1f6560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42F8u; }
        if (ctx->pc != 0x1F42F8u) { return; }
    }
    ctx->pc = 0x1F42F8u;
label_1f42f8:
    // 0x1f42f8: 0xc076ffa  jal         func_1DBFE8
    ctx->pc = 0x1F42F8u;
    SET_GPR_U32(ctx, 31, 0x1F4300u);
    ctx->pc = 0x1DBFE8u;
    if (runtime->hasFunction(0x1DBFE8u)) {
        auto targetFn = runtime->lookupFunction(0x1DBFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4300u; }
        if (ctx->pc != 0x1F4300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBFE8_0x1dbfe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4300u; }
        if (ctx->pc != 0x1F4300u) { return; }
    }
    ctx->pc = 0x1F4300u;
label_1f4300:
    // 0x1f4300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f4300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4304: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1f4304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1f4308: 0x24a547f8  addiu       $a1, $a1, 0x47F8
    ctx->pc = 0x1f4308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18424));
    // 0x1f430c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f430cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4310: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F4310u;
    {
        const bool branch_taken_0x1f4310 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4310u;
            // 0x1f4314: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4310) {
            ctx->pc = 0x1F4340u;
            goto label_1f4340;
        }
    }
    ctx->pc = 0x1F4318u;
    // 0x1f4318: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f4318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f431c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f431cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4324: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f4324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f4328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f432c: 0x34a50f0a  ori         $a1, $a1, 0xF0A
    ctx->pc = 0x1f432cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3850);
    // 0x1f4330: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f4330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4334: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F4334u;
    ctx->pc = 0x1F4338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4334u;
            // 0x1f4338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F433Cu;
    // 0x1f433c: 0x0  nop
    ctx->pc = 0x1f433cu;
    // NOP
label_1f4340:
    // 0x1f4340: 0xc076634  jal         func_1D98D0
    ctx->pc = 0x1F4340u;
    SET_GPR_U32(ctx, 31, 0x1F4348u);
    ctx->pc = 0x1D98D0u;
    if (runtime->hasFunction(0x1D98D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D98D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4348u; }
        if (ctx->pc != 0x1F4348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D98D0_0x1d98d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4348u; }
        if (ctx->pc != 0x1F4348u) { return; }
    }
    ctx->pc = 0x1F4348u;
label_1f4348:
    // 0x1f4348: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F4348u;
    {
        const bool branch_taken_0x1f4348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F434Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4348u;
            // 0x1f434c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4348) {
            ctx->pc = 0x1F4380u;
            goto label_1f4380;
        }
    }
    ctx->pc = 0x1F4350u;
    // 0x1f4350: 0xc07d272  jal         func_1F49C8
    ctx->pc = 0x1F4350u;
    SET_GPR_U32(ctx, 31, 0x1F4358u);
    ctx->pc = 0x1F4354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4350u;
            // 0x1f4354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F49C8u;
    if (runtime->hasFunction(0x1F49C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F49C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4358u; }
        if (ctx->pc != 0x1F4358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F49C8_0x1f49c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4358u; }
        if (ctx->pc != 0x1F4358u) { return; }
    }
    ctx->pc = 0x1F4358u;
label_1f4358:
    // 0x1f4358: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f4358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f435c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f435cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f4360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4368: 0x34a50f0b  ori         $a1, $a1, 0xF0B
    ctx->pc = 0x1f4368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3851);
    // 0x1f436c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f436cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4370: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f4370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4374: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F4374u;
    ctx->pc = 0x1F4378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4374u;
            // 0x1f4378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F437Cu;
    // 0x1f437c: 0x0  nop
    ctx->pc = 0x1f437cu;
    // NOP
label_1f4380:
    // 0x1f4380: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F4380u;
    SET_GPR_U32(ctx, 31, 0x1F4388u);
    ctx->pc = 0x1F4384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4380u;
            // 0x1f4384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4388u; }
        if (ctx->pc != 0x1F4388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4388u; }
        if (ctx->pc != 0x1F4388u) { return; }
    }
    ctx->pc = 0x1F4388u;
label_1f4388:
    // 0x1f4388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f438c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f438cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4390: 0xc077080  jal         func_1DC200
    ctx->pc = 0x1F4390u;
    SET_GPR_U32(ctx, 31, 0x1F4398u);
    ctx->pc = 0x1F4394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4390u;
            // 0x1f4394: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC200u;
    if (runtime->hasFunction(0x1DC200u)) {
        auto targetFn = runtime->lookupFunction(0x1DC200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4398u; }
        if (ctx->pc != 0x1F4398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC200_0x1dc200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4398u; }
        if (ctx->pc != 0x1F4398u) { return; }
    }
    ctx->pc = 0x1F4398u;
label_1f4398:
    // 0x1f4398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f439c: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F439Cu;
    SET_GPR_U32(ctx, 31, 0x1F43A4u);
    ctx->pc = 0x1F43A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F439Cu;
            // 0x1f43a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43A4u; }
        if (ctx->pc != 0x1F43A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43A4u; }
        if (ctx->pc != 0x1F43A4u) { return; }
    }
    ctx->pc = 0x1F43A4u;
label_1f43a4:
    // 0x1f43a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f43a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f43a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f43ac: 0xc077080  jal         func_1DC200
    ctx->pc = 0x1F43ACu;
    SET_GPR_U32(ctx, 31, 0x1F43B4u);
    ctx->pc = 0x1F43B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43ACu;
            // 0x1f43b0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC200u;
    if (runtime->hasFunction(0x1DC200u)) {
        auto targetFn = runtime->lookupFunction(0x1DC200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43B4u; }
        if (ctx->pc != 0x1F43B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC200_0x1dc200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43B4u; }
        if (ctx->pc != 0x1F43B4u) { return; }
    }
    ctx->pc = 0x1F43B4u;
label_1f43b4:
    // 0x1f43b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f43b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43b8: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x1f43b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1f43bc: 0xc077080  jal         func_1DC200
    ctx->pc = 0x1F43BCu;
    SET_GPR_U32(ctx, 31, 0x1F43C4u);
    ctx->pc = 0x1F43C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43BCu;
            // 0x1f43c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC200u;
    if (runtime->hasFunction(0x1DC200u)) {
        auto targetFn = runtime->lookupFunction(0x1DC200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43C4u; }
        if (ctx->pc != 0x1F43C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC200_0x1dc200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43C4u; }
        if (ctx->pc != 0x1F43C4u) { return; }
    }
    ctx->pc = 0x1F43C4u;
label_1f43c4:
    // 0x1f43c4: 0xc07e368  jal         func_1F8DA0
    ctx->pc = 0x1F43C4u;
    SET_GPR_U32(ctx, 31, 0x1F43CCu);
    ctx->pc = 0x1F43C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43C4u;
            // 0x1f43c8: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8DA0u;
    if (runtime->hasFunction(0x1F8DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F8DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43CCu; }
        if (ctx->pc != 0x1F43CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8DA0_0x1f8da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43CCu; }
        if (ctx->pc != 0x1F43CCu) { return; }
    }
    ctx->pc = 0x1F43CCu;
label_1f43cc:
    // 0x1f43cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F43CCu;
    {
        const bool branch_taken_0x1f43cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F43D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43CCu;
            // 0x1f43d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f43cc) {
            ctx->pc = 0x1F43F0u;
            goto label_1f43f0;
        }
    }
    ctx->pc = 0x1F43D4u;
    // 0x1f43d4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1f43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1f43d8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x1f43d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x1f43dc: 0x8c459b20  lw          $a1, -0x64E0($v0)
    ctx->pc = 0x1f43dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941472)));
    // 0x1f43e0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1f43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1f43e4: 0x8c669b24  lw          $a2, -0x64DC($v1)
    ctx->pc = 0x1f43e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941476)));
    // 0x1f43e8: 0xc07c05e  jal         func_1F0178
    ctx->pc = 0x1F43E8u;
    SET_GPR_U32(ctx, 31, 0x1F43F0u);
    ctx->pc = 0x1F43ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43E8u;
            // 0x1f43ec: 0x8c479b28  lw          $a3, -0x64D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0178u;
    if (runtime->hasFunction(0x1F0178u)) {
        auto targetFn = runtime->lookupFunction(0x1F0178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43F0u; }
        if (ctx->pc != 0x1F43F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0178_0x1f0178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43F0u; }
        if (ctx->pc != 0x1F43F0u) { return; }
    }
    ctx->pc = 0x1F43F0u;
label_1f43f0:
    // 0x1f43f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f43f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f43f4:
    // 0x1f43f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f43f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f43f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f43f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f43fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f43fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4400: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f4400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4404: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4404u;
            // 0x1f4408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F440Cu;
    // 0x1f440c: 0x0  nop
    ctx->pc = 0x1f440cu;
    // NOP
    ctx->pc = 0x1f4410u;
}
