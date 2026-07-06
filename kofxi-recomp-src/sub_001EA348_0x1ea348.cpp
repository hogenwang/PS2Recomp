#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA348
// Address: 0x1ea348 - 0x1ea400
void sub_001EA348_0x1ea348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA348_0x1ea348");
#endif

    switch (ctx->pc) {
        case 0x1ea39cu: goto label_1ea39c;
        case 0x1ea3c8u: goto label_1ea3c8;
        default: break;
    }

    ctx->pc = 0x1ea348u;

    // 0x1ea348: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1ea348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1ea34c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ea34cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ea350: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1ea350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ea354: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1ea354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1ea358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ea35c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea360: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ea360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ea364: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x1ea364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ea368: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ea368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ea36c: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x1ea36cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1ea370: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ea370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ea374: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ea374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ea378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ea37c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ea37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ea380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea384: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ea384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ea388: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x1ea388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ea38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea390: 0x4302b  sltu        $a2, $zero, $a0
    ctx->pc = 0x1ea390u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ea394: 0xc07a95e  jal         func_1EA578
    ctx->pc = 0x1EA394u;
    SET_GPR_U32(ctx, 31, 0x1EA39Cu);
    ctx->pc = 0x1EA398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA394u;
            // 0x1ea398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA578u;
    if (runtime->hasFunction(0x1EA578u)) {
        auto targetFn = runtime->lookupFunction(0x1EA578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA39Cu; }
        if (ctx->pc != 0x1EA39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA578_0x1ea578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA39Cu; }
        if (ctx->pc != 0x1EA39Cu) { return; }
    }
    ctx->pc = 0x1EA39Cu;
label_1ea39c:
    // 0x1ea39c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ea39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ea3a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ea3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ea3a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ea3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1ea3a8: 0x26621708  addiu       $v0, $s3, 0x1708
    ctx->pc = 0x1ea3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5896));
    // 0x1ea3ac: 0x26731f00  addiu       $s3, $s3, 0x1F00
    ctx->pc = 0x1ea3acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7936));
    // 0x1ea3b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ea3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ea3b4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1ea3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1ea3b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ea3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ea3bc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ea3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ea3c0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ea3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1ea3c4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1ea3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ea3c8:
    // 0x1ea3c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ea3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ea3cc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ea3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1ea3d0: 0x0  nop
    ctx->pc = 0x1ea3d0u;
    // NOP
    // 0x1ea3d4: 0x0  nop
    ctx->pc = 0x1ea3d4u;
    // NOP
    // 0x1ea3d8: 0x0  nop
    ctx->pc = 0x1ea3d8u;
    // NOP
    // 0x1ea3dc: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EA3DCu;
    {
        const bool branch_taken_0x1ea3dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EA3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3DCu;
            // 0x1ea3e0: 0x2673ff78  addiu       $s3, $s3, -0x88 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3dc) {
            ctx->pc = 0x1EA3C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ea3c8;
        }
    }
    ctx->pc = 0x1EA3E4u;
    // 0x1ea3e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea3e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ea3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea3ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ea3ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea3f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ea3f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ea3f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ea3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3F8u;
            // 0x1ea3fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA400u;
    ctx->pc = 0x1ea400u;
}
