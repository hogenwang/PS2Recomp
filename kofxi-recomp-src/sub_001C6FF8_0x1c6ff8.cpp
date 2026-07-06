#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6FF8
// Address: 0x1c6ff8 - 0x1c70c8
void sub_001C6FF8_0x1c6ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6FF8_0x1c6ff8");
#endif

    switch (ctx->pc) {
        case 0x1c705cu: goto label_1c705c;
        case 0x1c707cu: goto label_1c707c;
        case 0x1c70b0u: goto label_1c70b0;
        default: break;
    }

    ctx->pc = 0x1c6ff8u;

    // 0x1c6ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6ffc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c6ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c700c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c7010: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c7010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c7014: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x1c7014u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c7018: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C7018u;
    {
        const bool branch_taken_0x1c7018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7018u;
            // 0x1c701c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7018) {
            ctx->pc = 0x1C70B0u;
            goto label_1c70b0;
        }
    }
    ctx->pc = 0x1C7020u;
    // 0x1c7020: 0x82120001  lb          $s2, 0x1($s0)
    ctx->pc = 0x1c7020u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1c7024: 0x56420023  bnel        $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C7024u;
    {
        const bool branch_taken_0x1c7024 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c7024) {
            ctx->pc = 0x1C7028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7024u;
            // 0x1c7028: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C70B4u;
            goto label_1c70b4;
        }
    }
    ctx->pc = 0x1C702Cu;
    // 0x1c702c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c7030: 0x58400020  blezl       $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C7030u;
    {
        const bool branch_taken_0x1c7030 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c7030) {
            ctx->pc = 0x1C7034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7030u;
            // 0x1c7034: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C70B4u;
            goto label_1c70b4;
        }
    }
    ctx->pc = 0x1C7038u;
    // 0x1c7038: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1c7038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c703c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1c703cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c7040: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1c7040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1c7044: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c7044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c7048: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1c7048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1c704c: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C704Cu;
    {
        const bool branch_taken_0x1c704c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1C7050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C704Cu;
            // 0x1c7050: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c704c) {
            ctx->pc = 0x1C7064u;
            goto label_1c7064;
        }
    }
    ctx->pc = 0x1C7054u;
    // 0x1c7054: 0xc071b8a  jal         func_1C6E28
    ctx->pc = 0x1C7054u;
    SET_GPR_U32(ctx, 31, 0x1C705Cu);
    ctx->pc = 0x1C6E28u;
    if (runtime->hasFunction(0x1C6E28u)) {
        auto targetFn = runtime->lookupFunction(0x1C6E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C705Cu; }
        if (ctx->pc != 0x1C705Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6E28_0x1c6e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C705Cu; }
        if (ctx->pc != 0x1C705Cu) { return; }
    }
    ctx->pc = 0x1C705Cu;
label_1c705c:
    // 0x1c705c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1c705cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c7060: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1c7060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1c7064:
    // 0x1c7064: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c7064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c7068: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1c7068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1c706c: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C706Cu;
    {
        const bool branch_taken_0x1c706c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x1C7070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C706Cu;
            // 0x1c7070: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c706c) {
            ctx->pc = 0x1C7084u;
            goto label_1c7084;
        }
    }
    ctx->pc = 0x1C7074u;
    // 0x1c7074: 0xc071bbc  jal         func_1C6EF0
    ctx->pc = 0x1C7074u;
    SET_GPR_U32(ctx, 31, 0x1C707Cu);
    ctx->pc = 0x1C7078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7074u;
            // 0x1c7078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6EF0u;
    if (runtime->hasFunction(0x1C6EF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C6EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C707Cu; }
        if (ctx->pc != 0x1C707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6EF0_0x1c6ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C707Cu; }
        if (ctx->pc != 0x1C707Cu) { return; }
    }
    ctx->pc = 0x1C707Cu;
label_1c707c:
    // 0x1c707c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1c707cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c7080: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1c7080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1c7084:
    // 0x1c7084: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c7084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c7088: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1c7088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1c708c: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C708Cu;
    {
        const bool branch_taken_0x1c708c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c708c) {
            ctx->pc = 0x1C7090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C708Cu;
            // 0x1c7090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C70B4u;
            goto label_1c70b4;
        }
    }
    ctx->pc = 0x1C7094u;
    // 0x1c7094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c709c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c709cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c70a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c70a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c70a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c70a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c70a8: 0x8071b40  j           func_1C6D00
    ctx->pc = 0x1C70A8u;
    ctx->pc = 0x1C70ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70A8u;
            // 0x1c70ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6D00u;
    {
        auto targetFn = runtime->lookupFunction(0x1C6D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C70B0u;
label_1c70b0:
    // 0x1c70b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c70b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c70b4:
    // 0x1c70b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c70b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c70b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c70b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c70bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c70bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c70c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C70C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C70C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70C0u;
            // 0x1c70c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C70C8u;
    ctx->pc = 0x1c70c8u;
}
