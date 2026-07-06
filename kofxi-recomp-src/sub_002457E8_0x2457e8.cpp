#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002457E8
// Address: 0x2457e8 - 0x245a50
void sub_002457E8_0x2457e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002457E8_0x2457e8");
#endif

    switch (ctx->pc) {
        case 0x245820u: goto label_245820;
        case 0x24582cu: goto label_24582c;
        case 0x245840u: goto label_245840;
        case 0x245858u: goto label_245858;
        case 0x245884u: goto label_245884;
        case 0x2458a0u: goto label_2458a0;
        case 0x2458f0u: goto label_2458f0;
        case 0x245960u: goto label_245960;
        case 0x2459acu: goto label_2459ac;
        case 0x245a20u: goto label_245a20;
        default: break;
    }

    ctx->pc = 0x2457e8u;

    // 0x2457e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2457e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2457ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2457ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2457f0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2457f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2457f4: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2457f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2457f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2457f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457fc: 0x8c43fefc  lw          $v1, -0x104($v0)
    ctx->pc = 0x2457fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967036)));
    // 0x245800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x245800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245804: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x245804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x245808: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x245808u;
    {
        const bool branch_taken_0x245808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24580Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245808u;
            // 0x24580c: 0xffb00050  sd          $s0, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245808) {
            ctx->pc = 0x245884u;
            goto label_245884;
        }
    }
    ctx->pc = 0x245810u;
    // 0x245810: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x245810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x245814: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x245814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x245818: 0xc048c96  jal         func_123258
    ctx->pc = 0x245818u;
    SET_GPR_U32(ctx, 31, 0x245820u);
    ctx->pc = 0x24581Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245818u;
            // 0x24581c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245820u; }
        if (ctx->pc != 0x245820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245820u; }
        if (ctx->pc != 0x245820u) { return; }
    }
    ctx->pc = 0x245820u;
label_245820:
    // 0x245820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245824: 0xc048c96  jal         func_123258
    ctx->pc = 0x245824u;
    SET_GPR_U32(ctx, 31, 0x24582Cu);
    ctx->pc = 0x245828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245824u;
            // 0x245828: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24582Cu; }
        if (ctx->pc != 0x24582Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24582Cu; }
        if (ctx->pc != 0x24582Cu) { return; }
    }
    ctx->pc = 0x24582Cu;
label_24582c:
    // 0x24582c: 0x9622002c  lhu         $v0, 0x2C($s1)
    ctx->pc = 0x24582cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x245830: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x245830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x245834: 0x37a40006  ori         $a0, $sp, 0x6
    ctx->pc = 0x245834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)6);
    // 0x245838: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x245838u;
    SET_GPR_U32(ctx, 31, 0x245840u);
    ctx->pc = 0x24583Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245838u;
            // 0x24583c: 0xa7a20004  sh          $v0, 0x4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245840u; }
        if (ctx->pc != 0x245840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245840u; }
        if (ctx->pc != 0x245840u) { return; }
    }
    ctx->pc = 0x245840u;
label_245840:
    // 0x245840: 0xa7b20016  sh          $s2, 0x16($sp)
    ctx->pc = 0x245840u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 18));
    // 0x245844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x245844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245848: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x245848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24584c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x24584cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245850: 0xc091412  jal         func_245048
    ctx->pc = 0x245850u;
    SET_GPR_U32(ctx, 31, 0x245858u);
    ctx->pc = 0x245854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245850u;
            // 0x245854: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245048u;
    if (runtime->hasFunction(0x245048u)) {
        auto targetFn = runtime->lookupFunction(0x245048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245858u; }
        if (ctx->pc != 0x245858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245048_0x245048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245858u; }
        if (ctx->pc != 0x245858u) { return; }
    }
    ctx->pc = 0x245858u;
label_245858:
    // 0x245858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x245858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24585c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24585Cu;
    {
        const bool branch_taken_0x24585c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x245860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24585Cu;
            // 0x245860: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24585c) {
            ctx->pc = 0x245884u;
            goto label_245884;
        }
    }
    ctx->pc = 0x245864u;
    // 0x245864: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x245864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x245868: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x245868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x24586c: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x24586cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x245870: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245874: 0x24c6ffd0  addiu       $a2, $a2, -0x30
    ctx->pc = 0x245874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x245878: 0x24e7ffc0  addiu       $a3, $a3, -0x40
    ctx->pc = 0x245878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
    // 0x24587c: 0xc090a8e  jal         func_242A38
    ctx->pc = 0x24587Cu;
    SET_GPR_U32(ctx, 31, 0x245884u);
    ctx->pc = 0x245880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24587Cu;
            // 0x245880: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A38u;
    if (runtime->hasFunction(0x242A38u)) {
        auto targetFn = runtime->lookupFunction(0x242A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245884u; }
        if (ctx->pc != 0x245884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242A38_0x242a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245884u; }
        if (ctx->pc != 0x245884u) { return; }
    }
    ctx->pc = 0x245884u;
label_245884:
    // 0x245884: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x245884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x245888: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x245888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24588c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x24588cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x245890: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x245890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245894: 0x3e00008  jr          $ra
    ctx->pc = 0x245894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245894u;
            // 0x245898: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24589Cu;
    // 0x24589c: 0x0  nop
    ctx->pc = 0x24589cu;
    // NOP
label_2458a0:
    // 0x2458a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2458a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2458a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2458a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2458a8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2458a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2458ac: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2458acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2458b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2458b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2458b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2458b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2458b8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2458b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2458bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2458bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2458c0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2458C0u;
    {
        const bool branch_taken_0x2458c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2458C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2458C0u;
            // 0x2458c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458c0) {
            ctx->pc = 0x2458E4u;
            goto label_2458e4;
        }
    }
    ctx->pc = 0x2458C8u;
    // 0x2458c8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2458c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2458cc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2458ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2458d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2458d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2458d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2458D4u;
    {
        const bool branch_taken_0x2458d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2458D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2458D4u;
            // 0x2458d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458d4) {
            ctx->pc = 0x2458E8u;
            goto label_2458e8;
        }
    }
    ctx->pc = 0x2458DCu;
    // 0x2458dc: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2458DCu;
    {
        const bool branch_taken_0x2458dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2458DCu;
            // 0x2458e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458dc) {
            ctx->pc = 0x245A34u;
            goto label_245a34;
        }
    }
    ctx->pc = 0x2458E4u;
label_2458e4:
    // 0x2458e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2458e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2458e8:
    // 0x2458e8: 0xc048c96  jal         func_123258
    ctx->pc = 0x2458E8u;
    SET_GPR_U32(ctx, 31, 0x2458F0u);
    ctx->pc = 0x2458ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2458E8u;
            // 0x2458ec: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2458F0u; }
        if (ctx->pc != 0x2458F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2458F0u; }
        if (ctx->pc != 0x2458F0u) { return; }
    }
    ctx->pc = 0x2458F0u;
label_2458f0:
    // 0x2458f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2458f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2458f4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2458f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2458f8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2458f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2458fc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2458fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x245900: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x245900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x245904: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x245904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x245908: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x245908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x24590c: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x24590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x245910: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x245910u;
    {
        const bool branch_taken_0x245910 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x245914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245910u;
            // 0x245914: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245910) {
            ctx->pc = 0x245948u;
            goto label_245948;
        }
    }
    ctx->pc = 0x245918u;
    // 0x245918: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x245918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x24591c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x24591cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x245920: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x245920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245924: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x245924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x245928: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x245928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24592c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x24592cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x245930: 0x94c20030  lhu         $v0, 0x30($a2)
    ctx->pc = 0x245930u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x245934: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x245934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x245938: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x245938u;
    {
        const bool branch_taken_0x245938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245938) {
            ctx->pc = 0x24593Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x245938u;
            // 0x24593c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24594Cu;
            goto label_24594c;
        }
    }
    ctx->pc = 0x245940u;
    // 0x245940: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x245940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x245944: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x245944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_245948:
    // 0x245948: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x245948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24594c:
    // 0x24594c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24594cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245954: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x245954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245958: 0xc09148a  jal         func_245228
    ctx->pc = 0x245958u;
    SET_GPR_U32(ctx, 31, 0x245960u);
    ctx->pc = 0x24595Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245958u;
            // 0x24595c: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245228u;
    if (runtime->hasFunction(0x245228u)) {
        auto targetFn = runtime->lookupFunction(0x245228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245960u; }
        if (ctx->pc != 0x245960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245228_0x245228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245960u; }
        if (ctx->pc != 0x245960u) { return; }
    }
    ctx->pc = 0x245960u;
label_245960:
    // 0x245960: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x245960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245964: 0x16400034  bnez        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x245964u;
    {
        const bool branch_taken_0x245964 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x245968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245964u;
            // 0x245968: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245964) {
            ctx->pc = 0x245A38u;
            goto label_245a38;
        }
    }
    ctx->pc = 0x24596Cu;
    // 0x24596c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x24596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x245970: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x245970u;
    {
        const bool branch_taken_0x245970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245970u;
            // 0x245974: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245970) {
            ctx->pc = 0x245A38u;
            goto label_245a38;
        }
    }
    ctx->pc = 0x245978u;
    // 0x245978: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x245978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x24597c: 0x50a0002f  beql        $a1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x24597Cu;
    {
        const bool branch_taken_0x24597c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24597c) {
            ctx->pc = 0x245980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24597Cu;
            // 0x245980: 0xdfb20060  ld          $s2, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x245A3Cu;
            goto label_245a3c;
        }
    }
    ctx->pc = 0x245984u;
    // 0x245984: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x245984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x245988: 0x1c40002b  bgtz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x245988u;
    {
        const bool branch_taken_0x245988 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x24598Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245988u;
            // 0x24598c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245988) {
            ctx->pc = 0x245A38u;
            goto label_245a38;
        }
    }
    ctx->pc = 0x245990u;
    // 0x245990: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x245990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x245994: 0x24a60028  addiu       $a2, $a1, 0x28
    ctx->pc = 0x245994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x245998: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x245998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x24599c: 0x26070098  addiu       $a3, $s0, 0x98
    ctx->pc = 0x24599cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x2459a0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2459a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2459a4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2459a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2459a8: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x2459a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_2459ac:
    // 0x2459ac: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2459acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2459b0: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x2459b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2459b4: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x2459b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2459b8: 0xdc890018  ld          $t1, 0x18($a0)
    ctx->pc = 0x2459b8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2459bc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2459bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2459c0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2459c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2459c4: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x2459c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
    // 0x2459c8: 0xfcc90018  sd          $t1, 0x18($a2)
    ctx->pc = 0x2459c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 9));
    // 0x2459cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2459ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2459d0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2459d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2459d4: 0x0  nop
    ctx->pc = 0x2459d4u;
    // NOP
    // 0x2459d8: 0x1487fff4  bne         $a0, $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x2459D8u;
    {
        const bool branch_taken_0x2459d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x2459d8) {
            ctx->pc = 0x2459ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2459ac;
        }
    }
    ctx->pc = 0x2459E0u;
    // 0x2459e0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2459e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2459e4: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x2459e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2459e8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2459e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2459ec: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2459ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2459f0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2459f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2459f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2459f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2459f8: 0x9443002c  lhu         $v1, 0x2C($v0)
    ctx->pc = 0x2459f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2459fc: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2459fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x245a00: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x245a00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x245a04: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x245a04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x245a08: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x245a08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x245a0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x245a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245a10: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x245a10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x245a14: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x245a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x245a18: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x245A18u;
    SET_GPR_U32(ctx, 31, 0x245A20u);
    ctx->pc = 0x245A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245A18u;
            // 0x245a1c: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A20u; }
        if (ctx->pc != 0x245A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A20u; }
        if (ctx->pc != 0x245A20u) { return; }
    }
    ctx->pc = 0x245A20u;
label_245a20:
    // 0x245a20: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x245a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x245a24: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x245a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x245a2c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x245a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x245a30: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x245a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245a34:
    // 0x245a34: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x245a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_245a38:
    // 0x245a38: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x245a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_245a3c:
    // 0x245a3c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x245a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245a40: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x245a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245a44: 0x3e00008  jr          $ra
    ctx->pc = 0x245A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245A44u;
            // 0x245a48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245A4Cu;
    // 0x245a4c: 0x0  nop
    ctx->pc = 0x245a4cu;
    // NOP
    ctx->pc = 0x245a50u;
}
