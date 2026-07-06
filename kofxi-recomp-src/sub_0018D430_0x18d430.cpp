#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018D430
// Address: 0x18d430 - 0x18d4f0
void sub_0018D430_0x18d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D430_0x18d430");
#endif

    switch (ctx->pc) {
        case 0x18d458u: goto label_18d458;
        case 0x18d4b8u: goto label_18d4b8;
        case 0x18d4c0u: goto label_18d4c0;
        default: break;
    }

    ctx->pc = 0x18d430u;

    // 0x18d430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18d434: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18d434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18d438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18d438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18d43c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18d440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d44c: 0x24a5bcc0  addiu       $a1, $a1, -0x4340
    ctx->pc = 0x18d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950080));
    // 0x18d450: 0x2484bc40  addiu       $a0, $a0, -0x43C0
    ctx->pc = 0x18d450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949952));
    // 0x18d454: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18d458:
    // 0x18d458: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x18d458u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d45c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x18d45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x18d460: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x18d460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d464: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x18d464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x18d468: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x18d468u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d46c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x18d46cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d470: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x18d470u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d474: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x18d474u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d478: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x18d478u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d47c: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x18d47cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d480: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x18d480u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d484: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x18d484u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d488: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x18d488u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d48c: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x18d48cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d490: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x18d490u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d494: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x18d494u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d498: 0xa0a30007  sb          $v1, 0x7($a1)
    ctx->pc = 0x18d498u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d49c: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x18d49cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d4a0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x18d4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x18d4a4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18D4A4u;
    {
        const bool branch_taken_0x18d4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4A4u;
            // 0x18d4a8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4a4) {
            ctx->pc = 0x18D458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18d458;
        }
    }
    ctx->pc = 0x18D4ACu;
    // 0x18d4ac: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x18d4acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x18d4b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18d4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4b4: 0x2631bd50  addiu       $s1, $s1, -0x42B0
    ctx->pc = 0x18d4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950224));
label_18d4b8:
    // 0x18d4b8: 0xc06353c  jal         func_18D4F0
    ctx->pc = 0x18D4B8u;
    SET_GPR_U32(ctx, 31, 0x18D4C0u);
    ctx->pc = 0x18D4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4B8u;
            // 0x18d4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D4F0u;
    if (runtime->hasFunction(0x18D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x18D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4C0u; }
        if (ctx->pc != 0x18D4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D4F0_0x18d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4C0u; }
        if (ctx->pc != 0x18D4C0u) { return; }
    }
    ctx->pc = 0x18D4C0u;
label_18d4c0:
    // 0x18d4c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18d4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18d4c4: 0x26310098  addiu       $s1, $s1, 0x98
    ctx->pc = 0x18d4c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x18d4c8: 0x2a030013  slti        $v1, $s0, 0x13
    ctx->pc = 0x18d4c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x18d4cc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18D4CCu;
    {
        const bool branch_taken_0x18d4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d4cc) {
            ctx->pc = 0x18D4B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18d4b8;
        }
    }
    ctx->pc = 0x18D4D4u;
    // 0x18d4d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d4d8: 0xa060bd40  sb          $zero, -0x42C0($v1)
    ctx->pc = 0x18d4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950208), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d4dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18d4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d4e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x18D4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4E8u;
            // 0x18d4ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D4F0u;
    ctx->pc = 0x18d4f0u;
}
