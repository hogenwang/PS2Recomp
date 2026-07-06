#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF878
// Address: 0x1ff878 - 0x1ff918
void sub_001FF878_0x1ff878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF878_0x1ff878");
#endif

    switch (ctx->pc) {
        case 0x1ff89cu: goto label_1ff89c;
        case 0x1ff8c8u: goto label_1ff8c8;
        case 0x1ff8ecu: goto label_1ff8ec;
        default: break;
    }

    ctx->pc = 0x1ff878u;

    // 0x1ff878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff87c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff884: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff88c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ff88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ff890: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff894: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF894u;
    SET_GPR_U32(ctx, 31, 0x1FF89Cu);
    ctx->pc = 0x1FF898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF894u;
            // 0x1ff898: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (runtime->hasFunction(0x1FEFA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF89Cu; }
        if (ctx->pc != 0x1FF89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEFA8_0x1fefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF89Cu; }
        if (ctx->pc != 0x1FF89Cu) { return; }
    }
    ctx->pc = 0x1FF89Cu;
label_1ff89c:
    // 0x1ff89c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF89Cu;
    {
        const bool branch_taken_0x1ff89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff89c) {
            ctx->pc = 0x1FF8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF89Cu;
            // 0x1ff8a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF8B4u;
            goto label_1ff8b4;
        }
    }
    ctx->pc = 0x1FF8A4u;
    // 0x1ff8a4: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x1ff8a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1ff8a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff8ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ff8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ff8b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff8b4:
    // 0x1ff8b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff8b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff8b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF8BCu;
            // 0x1ff8c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF8C4u;
    // 0x1ff8c4: 0x0  nop
    ctx->pc = 0x1ff8c4u;
    // NOP
label_1ff8c8:
    // 0x1ff8c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff8cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff8d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff8d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff8d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff8dc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ff8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ff8e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff8e4: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF8E4u;
    SET_GPR_U32(ctx, 31, 0x1FF8ECu);
    ctx->pc = 0x1FF8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF8E4u;
            // 0x1ff8e8: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (runtime->hasFunction(0x1FEFA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8ECu; }
        if (ctx->pc != 0x1FF8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEFA8_0x1fefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8ECu; }
        if (ctx->pc != 0x1FF8ECu) { return; }
    }
    ctx->pc = 0x1FF8ECu;
label_1ff8ec:
    // 0x1ff8ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF8ECu;
    {
        const bool branch_taken_0x1ff8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff8ec) {
            ctx->pc = 0x1FF8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF8ECu;
            // 0x1ff8f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF904u;
            goto label_1ff904;
        }
    }
    ctx->pc = 0x1FF8F4u;
    // 0x1ff8f4: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x1ff8f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1ff8f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff8fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ff8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ff900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff904:
    // 0x1ff904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff90c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF90Cu;
            // 0x1ff910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF914u;
    // 0x1ff914: 0x0  nop
    ctx->pc = 0x1ff914u;
    // NOP
    ctx->pc = 0x1ff918u;
}
