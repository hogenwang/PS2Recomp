#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD010
// Address: 0x1dd010 - 0x1dd110
void sub_001DD010_0x1dd010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD010_0x1dd010");
#endif

    switch (ctx->pc) {
        case 0x1dd068u: goto label_1dd068;
        case 0x1dd070u: goto label_1dd070;
        default: break;
    }

    ctx->pc = 0x1dd010u;

    // 0x1dd010: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dd010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1dd014: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd018: 0x8c43ec08  lw          $v1, -0x13F8($v0)
    ctx->pc = 0x1dd018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962184)));
    // 0x1dd01c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dd01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dd020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd024: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dd024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1dd028: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dd028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd02c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1dd02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1dd030: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1dd030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd034: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dd034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dd038: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd03c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dd03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dd040: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD040u;
    {
        const bool branch_taken_0x1dd040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD040u;
            // 0x1dd044: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd040) {
            ctx->pc = 0x1DD058u;
            goto label_1dd058;
        }
    }
    ctx->pc = 0x1DD048u;
    // 0x1dd048: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1dd048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1dd04c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1DD04Cu;
    {
        const bool branch_taken_0x1dd04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD04Cu;
            // 0x1dd050: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd04c) {
            ctx->pc = 0x1DD0F4u;
            goto label_1dd0f4;
        }
    }
    ctx->pc = 0x1DD054u;
    // 0x1dd054: 0x0  nop
    ctx->pc = 0x1dd054u;
    // NOP
label_1dd058:
    // 0x1dd058: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1dd058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1dd05c: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x1dd05cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1dd060: 0xc0773f0  jal         func_1DCFC0
    ctx->pc = 0x1DD060u;
    SET_GPR_U32(ctx, 31, 0x1DD068u);
    ctx->pc = 0x1DD064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD060u;
            // 0x1dd064: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCFC0u;
    if (runtime->hasFunction(0x1DCFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD068u; }
        if (ctx->pc != 0x1DD068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCFC0_0x1dcfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD068u; }
        if (ctx->pc != 0x1DD068u) { return; }
    }
    ctx->pc = 0x1DD068u;
label_1dd068:
    // 0x1dd068: 0xc077444  jal         func_1DD110
    ctx->pc = 0x1DD068u;
    SET_GPR_U32(ctx, 31, 0x1DD070u);
    ctx->pc = 0x1DD06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD068u;
            // 0x1dd06c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD110u;
    if (runtime->hasFunction(0x1DD110u)) {
        auto targetFn = runtime->lookupFunction(0x1DD110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD070u; }
        if (ctx->pc != 0x1DD070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD110_0x1dd110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD070u; }
        if (ctx->pc != 0x1DD070u) { return; }
    }
    ctx->pc = 0x1DD070u;
label_1dd070:
    // 0x1dd070: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1dd070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd074: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1dd074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd078: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1dd078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dd07c: 0x24a7000f  addiu       $a3, $a1, 0xF
    ctx->pc = 0x1dd07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1dd080: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1dd080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dd084: 0xa44018  mult        $t0, $a1, $a0
    ctx->pc = 0x1dd084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1dd088: 0xe3280b  movn        $a1, $a3, $v1
    ctx->pc = 0x1dd088u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x1dd08c: 0x2486000f  addiu       $a2, $a0, 0xF
    ctx->pc = 0x1dd08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1dd090: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1dd090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dd094: 0xc3200b  movn        $a0, $a2, $v1
    ctx->pc = 0x1dd094u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x1dd098: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1dd098u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1dd09c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1dd09cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1dd0a0: 0xa43818  mult        $a3, $a1, $a0
    ctx->pc = 0x1dd0a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1dd0a4: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x1dd0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1dd0a8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1dd0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1dd0ac: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x1dd0acu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1dd0b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1dd0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1dd0b4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1dd0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0b8: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x1dd0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1dd0bc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1dd0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1dd0c0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1dd0c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1dd0c4: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x1dd0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x1dd0c8: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x1dd0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
    // 0x1dd0cc: 0x34216910  ori         $at, $at, 0x6910
    ctx->pc = 0x1dd0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26896);
    // 0x1dd0d0: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1dd0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1dd0d4: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1dd0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1dd0d8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1dd0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1dd0dc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1dd0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1dd0e0: 0x2251818  mult        $v1, $s1, $a1
    ctx->pc = 0x1dd0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1dd0e4: 0x10490002  beq         $v0, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD0E4u;
    {
        const bool branch_taken_0x1dd0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x1DD0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0E4u;
            // 0x1dd0e8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0e4) {
            ctx->pc = 0x1DD0F0u;
            goto label_1dd0f0;
        }
    }
    ctx->pc = 0x1DD0ECu;
    // 0x1dd0ec: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x1dd0ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1dd0f0:
    // 0x1dd0f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1dd0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1dd0f4:
    // 0x1dd0f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dd0f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd0f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dd0f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd0fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dd0fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd100: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1dd100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd104: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dd104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd108: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD108u;
            // 0x1dd10c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD110u;
    ctx->pc = 0x1dd110u;
}
