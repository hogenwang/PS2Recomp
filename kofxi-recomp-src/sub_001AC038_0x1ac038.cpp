#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC038
// Address: 0x1ac038 - 0x1ac0f8
void sub_001AC038_0x1ac038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC038_0x1ac038");
#endif

    switch (ctx->pc) {
        case 0x1ac040u: goto label_1ac040;
        case 0x1ac068u: goto label_1ac068;
        case 0x1ac0a0u: goto label_1ac0a0;
        case 0x1ac0d8u: goto label_1ac0d8;
        default: break;
    }

    ctx->pc = 0x1ac038u;

label_1ac038:
    // 0x1ac038: 0x18c00008  blez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC038u;
    {
        const bool branch_taken_0x1ac038 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1ac038) {
            ctx->pc = 0x1AC05Cu;
            goto label_1ac05c;
        }
    }
    ctx->pc = 0x1AC040u;
label_1ac040:
    // 0x1ac040: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1ac040u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ac044: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1ac044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1ac048: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ac048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ac04c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1ac04cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ac050: 0x0  nop
    ctx->pc = 0x1ac050u;
    // NOP
    // 0x1ac054: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AC054u;
    {
        const bool branch_taken_0x1ac054 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1AC058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC054u;
            // 0x1ac058: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac054) {
            ctx->pc = 0x1AC040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ac040;
        }
    }
    ctx->pc = 0x1AC05Cu;
label_1ac05c:
    // 0x1ac05c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC064u;
    // 0x1ac064: 0x0  nop
    ctx->pc = 0x1ac064u;
    // NOP
label_1ac068:
    // 0x1ac068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ac06c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ac06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ac070: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ac074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ac078: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac07c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ac07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ac080: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ac080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac084: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x1ac084u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1ac088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ac08c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1ac08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1ac090: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ac090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ac094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ac098: 0xc06b00e  jal         func_1AC038
    ctx->pc = 0x1AC098u;
    SET_GPR_U32(ctx, 31, 0x1AC0A0u);
    ctx->pc = 0x1AC09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC098u;
            // 0x1ac09c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC038u;
    goto label_1ac038;
    ctx->pc = 0x1AC0A0u;
label_1ac0a0:
    // 0x1ac0a0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1ac0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1ac0a4: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1ac0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ac0a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ac0a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac0ac: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1ac0acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1ac0b0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1ac0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1ac0b4: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x1ac0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1ac0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac0bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ac0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac0c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ac0c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac0c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ac0c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac0c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ac0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac0cc: 0x806b00e  j           func_1AC038
    ctx->pc = 0x1AC0CCu;
    ctx->pc = 0x1AC0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0CCu;
            // 0x1ac0d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC038u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1ac038;
    ctx->pc = 0x1AC0D4u;
    // 0x1ac0d4: 0x0  nop
    ctx->pc = 0x1ac0d4u;
    // NOP
label_1ac0d8:
    // 0x1ac0d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac0dc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1ac0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ac0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac0e4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1ac0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac0e8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1ac0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ac0ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac0f0: 0x806b00e  j           func_1AC038
    ctx->pc = 0x1AC0F0u;
    ctx->pc = 0x1AC0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0F0u;
            // 0x1ac0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC038u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1ac038;
    ctx->pc = 0x1AC0F8u;
    ctx->pc = 0x1ac0f8u;
}
