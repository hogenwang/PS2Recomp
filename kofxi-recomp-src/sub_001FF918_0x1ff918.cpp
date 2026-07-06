#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF918
// Address: 0x1ff918 - 0x1ffa20
void sub_001FF918_0x1ff918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF918_0x1ff918");
#endif

    switch (ctx->pc) {
        case 0x1ff944u: goto label_1ff944;
        case 0x1ff980u: goto label_1ff980;
        case 0x1ff9a4u: goto label_1ff9a4;
        case 0x1ff9d0u: goto label_1ff9d0;
        case 0x1ff9f4u: goto label_1ff9f4;
        default: break;
    }

    ctx->pc = 0x1ff918u;

    // 0x1ff918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff928: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ff928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ff92c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ff92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff930: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ff930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ff934: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ff934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1ff938: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff93c: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF93Cu;
    SET_GPR_U32(ctx, 31, 0x1FF944u);
    ctx->pc = 0x1FF940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF93Cu;
            // 0x1ff940: 0x245100b0  addiu       $s1, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (runtime->hasFunction(0x1FEFA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF944u; }
        if (ctx->pc != 0x1FF944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEFA8_0x1fefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF944u; }
        if (ctx->pc != 0x1FF944u) { return; }
    }
    ctx->pc = 0x1FF944u;
label_1ff944:
    // 0x1ff944: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF944u;
    {
        const bool branch_taken_0x1ff944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff944) {
            ctx->pc = 0x1FF948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF944u;
            // 0x1ff948: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF96Cu;
            goto label_1ff96c;
        }
    }
    ctx->pc = 0x1FF94Cu;
    // 0x1ff94c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ff94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ff950: 0x2863006e  slti        $v1, $v1, 0x6E
    ctx->pc = 0x1ff950u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x1ff954: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF954u;
    {
        const bool branch_taken_0x1ff954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF954u;
            // 0x1ff958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff954) {
            ctx->pc = 0x1FF968u;
            goto label_1ff968;
        }
    }
    ctx->pc = 0x1FF95Cu;
    // 0x1ff95c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1ff95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ff960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff964: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1ff964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1ff968:
    // 0x1ff968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff96c:
    // 0x1ff96c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff970: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ff970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff974: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ff974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ff978: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF978u;
            // 0x1ff97c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF980u;
label_1ff980:
    // 0x1ff980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff988: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff98c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff990: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff994: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ff994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ff998: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff99c: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF99Cu;
    SET_GPR_U32(ctx, 31, 0x1FF9A4u);
    ctx->pc = 0x1FF9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF99Cu;
            // 0x1ff9a0: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (runtime->hasFunction(0x1FEFA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9A4u; }
        if (ctx->pc != 0x1FF9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEFA8_0x1fefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9A4u; }
        if (ctx->pc != 0x1FF9A4u) { return; }
    }
    ctx->pc = 0x1FF9A4u;
label_1ff9a4:
    // 0x1ff9a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF9A4u;
    {
        const bool branch_taken_0x1ff9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9a4) {
            ctx->pc = 0x1FF9A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF9A4u;
            // 0x1ff9a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF9BCu;
            goto label_1ff9bc;
        }
    }
    ctx->pc = 0x1FF9ACu;
    // 0x1ff9ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ff9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff9b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff9b4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ff9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ff9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff9bc:
    // 0x1ff9bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff9bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff9c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF9C4u;
            // 0x1ff9c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF9CCu;
    // 0x1ff9cc: 0x0  nop
    ctx->pc = 0x1ff9ccu;
    // NOP
label_1ff9d0:
    // 0x1ff9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff9d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff9d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff9dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff9e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff9e4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ff9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ff9e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff9ec: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF9ECu;
    SET_GPR_U32(ctx, 31, 0x1FF9F4u);
    ctx->pc = 0x1FF9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF9ECu;
            // 0x1ff9f0: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (runtime->hasFunction(0x1FEFA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9F4u; }
        if (ctx->pc != 0x1FF9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEFA8_0x1fefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9F4u; }
        if (ctx->pc != 0x1FF9F4u) { return; }
    }
    ctx->pc = 0x1FF9F4u;
label_1ff9f4:
    // 0x1ff9f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF9F4u;
    {
        const bool branch_taken_0x1ff9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9f4) {
            ctx->pc = 0x1FF9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF9F4u;
            // 0x1ff9f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FFA0Cu;
            goto label_1ffa0c;
        }
    }
    ctx->pc = 0x1FF9FCu;
    // 0x1ff9fc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ff9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ffa00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffa04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ffa04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ffa08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffa08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ffa0c:
    // 0x1ffa0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffa0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffa10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ffa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffa14: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA14u;
            // 0x1ffa18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFA1Cu;
    // 0x1ffa1c: 0x0  nop
    ctx->pc = 0x1ffa1cu;
    // NOP
    ctx->pc = 0x1ffa20u;
}
