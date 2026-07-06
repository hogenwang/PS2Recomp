#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C38B0
// Address: 0x1c38b0 - 0x1c3a40
void sub_001C38B0_0x1c38b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C38B0_0x1c38b0");
#endif

    switch (ctx->pc) {
        case 0x1c3900u: goto label_1c3900;
        case 0x1c3934u: goto label_1c3934;
        case 0x1c393cu: goto label_1c393c;
        case 0x1c3940u: goto label_1c3940;
        case 0x1c3948u: goto label_1c3948;
        case 0x1c3958u: goto label_1c3958;
        case 0x1c3960u: goto label_1c3960;
        case 0x1c396cu: goto label_1c396c;
        case 0x1c3984u: goto label_1c3984;
        case 0x1c39a4u: goto label_1c39a4;
        case 0x1c39c0u: goto label_1c39c0;
        case 0x1c39d0u: goto label_1c39d0;
        case 0x1c39f0u: goto label_1c39f0;
        case 0x1c3a0cu: goto label_1c3a0c;
        default: break;
    }

    ctx->pc = 0x1c38b0u;

    // 0x1c38b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c38b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c38b4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1c38b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1c38b8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c38b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38bc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1c38bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1c38c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c38c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38c4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1c38c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1c38c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c38c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38cc: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1c38ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1c38d0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c38d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38d4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1c38d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1c38d8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1c38d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1c38dc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1c38dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1c38e0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1c38e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1c38e4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1c38e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1c38e8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1c38e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1c38ec: 0x1ac0003c  blez        $s6, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C38ECu;
    {
        const bool branch_taken_0x1c38ec = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1C38F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C38ECu;
            // 0x1c38f0: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38ec) {
            ctx->pc = 0x1C39E0u;
            goto label_1c39e0;
        }
    }
    ctx->pc = 0x1C38F4u;
    // 0x1c38f4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c38f8: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1c38f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38fc: 0x245ee990  addiu       $fp, $v0, -0x1670
    ctx->pc = 0x1c38fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961552));
label_1c3900:
    // 0x1c3900: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x1c3900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1c3904: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x1c3904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1c3908: 0x542018  mult        $a0, $v0, $s4
    ctx->pc = 0x1c3908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c390c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1c390cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c3910: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1c3910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1c3914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c3914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3918: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x1c3918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1c391c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1c391cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c3920: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C3920u;
    {
        const bool branch_taken_0x1c3920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3920u;
            // 0x1c3924: 0x3c130038  lui         $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3920) {
            ctx->pc = 0x1C39D0u;
            goto label_1c39d0;
        }
    }
    ctx->pc = 0x1C3928u;
    // 0x1c3928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c392c: 0xc070cf0  jal         func_1C33C0
    ctx->pc = 0x1C392Cu;
    SET_GPR_U32(ctx, 31, 0x1C3934u);
    ctx->pc = 0x1C3930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C392Cu;
            // 0x1c3930: 0x2665eab8  addiu       $a1, $s3, -0x1548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C33C0u;
    if (runtime->hasFunction(0x1C33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3934u; }
        if (ctx->pc != 0x1C3934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C33C0_0x1c33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3934u; }
        if (ctx->pc != 0x1C3934u) { return; }
    }
    ctx->pc = 0x1C3934u;
label_1c3934:
    // 0x1c3934: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C3934u;
    SET_GPR_U32(ctx, 31, 0x1C393Cu);
    ctx->pc = 0x1C3938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3934u;
            // 0x1c3938: 0x34049400  ori         $a0, $zero, 0x9400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C393Cu; }
        if (ctx->pc != 0x1C393Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C393Cu; }
        if (ctx->pc != 0x1C393Cu) { return; }
    }
    ctx->pc = 0x1C393Cu;
label_1c393c:
    // 0x1c393c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c393cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3940:
    // 0x1c3940: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C3940u;
    SET_GPR_U32(ctx, 31, 0x1C3948u);
    ctx->pc = 0x1C3944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3940u;
            // 0x1c3944: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (runtime->hasFunction(0x11B970u)) {
        auto targetFn = runtime->lookupFunction(0x11B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3948u; }
        if (ctx->pc != 0x1C3948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B970_0x11b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3948u; }
        if (ctx->pc != 0x1C3948u) { return; }
    }
    ctx->pc = 0x1C3948u;
label_1c3948:
    // 0x1c3948: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1C3948u;
    {
        const bool branch_taken_0x1c3948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1c3948) {
            ctx->pc = 0x1C3940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3940;
        }
    }
    ctx->pc = 0x1C3950u;
    // 0x1c3950: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C3950u;
    SET_GPR_U32(ctx, 31, 0x1C3958u);
    ctx->pc = 0x1C3954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3950u;
            // 0x1c3954: 0x34049401  ori         $a0, $zero, 0x9401 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37889);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3958u; }
        if (ctx->pc != 0x1C3958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3958u; }
        if (ctx->pc != 0x1C3958u) { return; }
    }
    ctx->pc = 0x1C3958u;
label_1c3958:
    // 0x1c3958: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C3958u;
    SET_GPR_U32(ctx, 31, 0x1C3960u);
    ctx->pc = 0x1C395Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3958u;
            // 0x1c395c: 0x34049500  ori         $a0, $zero, 0x9500 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38144);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3960u; }
        if (ctx->pc != 0x1C3960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3960u; }
        if (ctx->pc != 0x1C3960u) { return; }
    }
    ctx->pc = 0x1C3960u;
label_1c3960:
    // 0x1c3960: 0x2665eab8  addiu       $a1, $s3, -0x1548
    ctx->pc = 0x1c3960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961848));
    // 0x1c3964: 0xc0709e0  jal         func_1C2780
    ctx->pc = 0x1C3964u;
    SET_GPR_U32(ctx, 31, 0x1C396Cu);
    ctx->pc = 0x1C3968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3964u;
            // 0x1c3968: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2780u;
    if (runtime->hasFunction(0x1C2780u)) {
        auto targetFn = runtime->lookupFunction(0x1C2780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C396Cu; }
        if (ctx->pc != 0x1C396Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2780_0x1c2780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C396Cu; }
        if (ctx->pc != 0x1C396Cu) { return; }
    }
    ctx->pc = 0x1C396Cu;
label_1c396c:
    // 0x1c396c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c396cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3970: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C3970u;
    {
        const bool branch_taken_0x1c3970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c3970) {
            ctx->pc = 0x1C3974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3970u;
            // 0x1c3974: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C39B0u;
            goto label_1c39b0;
        }
    }
    ctx->pc = 0x1C3978u;
    // 0x1c3978: 0x34049501  ori         $a0, $zero, 0x9501
    ctx->pc = 0x1c3978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38145);
    // 0x1c397c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C397Cu;
    SET_GPR_U32(ctx, 31, 0x1C3984u);
    ctx->pc = 0x1C3980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C397Cu;
            // 0x1c3980: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3984u; }
        if (ctx->pc != 0x1C3984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3984u; }
        if (ctx->pc != 0x1C3984u) { return; }
    }
    ctx->pc = 0x1C3984u;
label_1c3984:
    // 0x1c3984: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1c3984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1c3988: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c3988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c398c: 0x24449f18  addiu       $a0, $v0, -0x60E8
    ctx->pc = 0x1c398cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942488));
    // 0x1c3990: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c3990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c3994: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c3994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3998: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1c3998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1c399c: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C399Cu;
    SET_GPR_U32(ctx, 31, 0x1C39A4u);
    ctx->pc = 0x1C39A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C399Cu;
            // 0x1c39a0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (runtime->hasFunction(0x1B47D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B47D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39A4u; }
        if (ctx->pc != 0x1C39A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B47D0_0x1b47d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39A4u; }
        if (ctx->pc != 0x1C39A4u) { return; }
    }
    ctx->pc = 0x1C39A4u;
label_1c39a4:
    // 0x1c39a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C39A4u;
    {
        const bool branch_taken_0x1c39a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C39A4u;
            // 0x1c39a8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39a4) {
            ctx->pc = 0x1C39D4u;
            goto label_1c39d4;
        }
    }
    ctx->pc = 0x1C39ACu;
    // 0x1c39ac: 0x0  nop
    ctx->pc = 0x1c39acu;
    // NOP
label_1c39b0:
    // 0x1c39b0: 0x34049502  ori         $a0, $zero, 0x9502
    ctx->pc = 0x1c39b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38146);
    // 0x1c39b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c39b8: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C39B8u;
    SET_GPR_U32(ctx, 31, 0x1C39C0u);
    ctx->pc = 0x1C39BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C39B8u;
            // 0x1c39bc: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39C0u; }
        if (ctx->pc != 0x1C39C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39C0u; }
        if (ctx->pc != 0x1C39C0u) { return; }
    }
    ctx->pc = 0x1C39C0u;
label_1c39c0:
    // 0x1c39c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1c39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1c39c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c39c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39c8: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C39C8u;
    SET_GPR_U32(ctx, 31, 0x1C39D0u);
    ctx->pc = 0x1C39CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C39C8u;
            // 0x1c39cc: 0x24449f30  addiu       $a0, $v0, -0x60D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (runtime->hasFunction(0x1B47D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B47D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39D0u; }
        if (ctx->pc != 0x1C39D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B47D0_0x1b47d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39D0u; }
        if (ctx->pc != 0x1C39D0u) { return; }
    }
    ctx->pc = 0x1C39D0u;
label_1c39d0:
    // 0x1c39d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c39d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c39d4:
    // 0x1c39d4: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x1c39d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1c39d8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1C39D8u;
    {
        const bool branch_taken_0x1c39d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C39DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C39D8u;
            // 0x1c39dc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39d8) {
            ctx->pc = 0x1C3900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3900;
        }
    }
    ctx->pc = 0x1C39E0u;
label_1c39e0:
    // 0x1c39e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c39e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c39e4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c39e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39e8: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C39E8u;
    SET_GPR_U32(ctx, 31, 0x1C39F0u);
    ctx->pc = 0x1C39ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C39E8u;
            // 0x1c39ec: 0x24849f48  addiu       $a0, $a0, -0x60B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (runtime->hasFunction(0x1B47D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B47D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39F0u; }
        if (ctx->pc != 0x1C39F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B47D0_0x1b47d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39F0u; }
        if (ctx->pc != 0x1C39F0u) { return; }
    }
    ctx->pc = 0x1C39F0u;
label_1c39f0:
    // 0x1c39f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c39f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c39f4: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C39F4u;
    {
        const bool branch_taken_0x1c39f4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C39F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C39F4u;
            // 0x1c39f8: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39f4) {
            ctx->pc = 0x1C3A10u;
            goto label_1c3a10;
        }
    }
    ctx->pc = 0x1C39FCu;
    // 0x1c39fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c39fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c3a00: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c3a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c3a04: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C3A04u;
    SET_GPR_U32(ctx, 31, 0x1C3A0Cu);
    ctx->pc = 0x1C3A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A04u;
            // 0x1c3a08: 0x24849f60  addiu       $a0, $a0, -0x60A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A0Cu; }
        if (ctx->pc != 0x1C3A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A0Cu; }
        if (ctx->pc != 0x1C3A0Cu) { return; }
    }
    ctx->pc = 0x1C3A0Cu;
label_1c3a0c:
    // 0x1c3a0c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1c3a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a10:
    // 0x1c3a10: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c3a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3a14: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1c3a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c3a18: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c3a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3a1c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1c3a1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c3a20: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1c3a20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3a24: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1c3a24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c3a28: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c3a28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3a2c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1c3a2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c3a30: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1c3a30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3a34: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1c3a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c3a38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A38u;
            // 0x1c3a3c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3A40u;
    ctx->pc = 0x1c3a40u;
}
