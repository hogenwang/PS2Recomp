#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCED8
// Address: 0x1dced8 - 0x1dcfc0
void sub_001DCED8_0x1dced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCED8_0x1dced8");
#endif

    ctx->pc = 0x1dced8u;

    // 0x1dced8: 0x8c8d0014  lw          $t5, 0x14($a0)
    ctx->pc = 0x1dced8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1dcedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dcedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcee0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1dcee0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dcee4: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x1dcee4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcee8: 0xd102a  slt         $v0, $zero, $t5
    ctx->pc = 0x1dcee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1dceec: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x1dceecu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcef0: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x1dcef0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcef4: 0x62680a  movz        $t5, $v1, $v0
    ctx->pc = 0x1dcef4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x1dcef8: 0xe0c82d  daddu       $t9, $a3, $zero
    ctx->pc = 0x1dcef8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcefc: 0x15cb000c  bne         $t6, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x1DCEFCu;
    {
        const bool branch_taken_0x1dcefc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 11));
        ctx->pc = 0x1DCF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCEFCu;
        // 0x1dcf00: 0x8c8c0004  lw          $t4, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcefc) {
            ctx->pc = 0x1DCF30u;
            goto label_1dcf30;
        }
    }
    ctx->pc = 0x1DCF04u;
    // 0x1dcf04: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x1dcf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x1dcf08: 0x29830000  slti        $v1, $t4, 0x0
    ctx->pc = 0x1dcf08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dcf0c: 0x83600b  movn        $t4, $a0, $v1
    ctx->pc = 0x1dcf0cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x1dcf10: 0xc1383  sra         $v0, $t4, 14
    ctx->pc = 0x1dcf10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 14));
    // 0x1dcf14: 0x4d1018  mult        $v0, $v0, $t5
    ctx->pc = 0x1dcf14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1dcf18: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1dcf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1dcf1c: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x1dcf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x1dcf20: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x1dcf20u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x1dcf24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DCF24u;
    {
        const bool branch_taken_0x1dcf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF24u;
        // 0x1dcf28: 0xaf200000  sw          $zero, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf24) {
            ctx->pc = 0x1DCF68u;
            goto label_1dcf68;
        }
    }
    ctx->pc = 0x1DCF2Cu;
    // 0x1dcf2c: 0x0  nop
    ctx->pc = 0x1dcf2cu;
    // NOP
label_1dcf30:
    // 0x1dcf30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dcf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dcf34: 0x15c20010  bne         $t6, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DCF34u;
    {
        const bool branch_taken_0x1dcf34 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF34u;
        // 0x1dcf38: 0x29830000  slti        $v1, $t4, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf34) {
            ctx->pc = 0x1DCF78u;
            goto label_1dcf78;
        }
    }
    ctx->pc = 0x1DCF3Cu;
    // 0x1dcf3c: 0x29820000  slti        $v0, $t4, 0x0
    ctx->pc = 0x1dcf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dcf40: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x1dcf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x1dcf44: 0x82600b  movn        $t4, $a0, $v0
    ctx->pc = 0x1dcf44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x1dcf48: 0xc1b83  sra         $v1, $t4, 14
    ctx->pc = 0x1dcf48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 12), 14));
    // 0x1dcf4c: 0x6d1018  mult        $v0, $v1, $t5
    ctx->pc = 0x1dcf4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1dcf50: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x1dcf50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1dcf54: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x1dcf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1dcf58: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1dcf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1dcf5c: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x1dcf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x1dcf60: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x1dcf60u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x1dcf64: 0xaf230000  sw          $v1, 0x0($t9)
    ctx->pc = 0x1dcf64u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
label_1dcf68:
    // 0x1dcf68: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1dcf68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1dcf6c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1dcf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1dcf70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF70u;
        // 0x1dcf74: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF78u;
label_1dcf78:
    // 0x1dcf78: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x1dcf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x1dcf7c: 0x83600b  movn        $t4, $a0, $v1
    ctx->pc = 0x1dcf7cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x1dcf80: 0x24055dcc  addiu       $a1, $zero, 0x5DCC
    ctx->pc = 0x1dcf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24012));
    // 0x1dcf84: 0xc1383  sra         $v0, $t4, 14
    ctx->pc = 0x1dcf84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 14));
    // 0x1dcf88: 0x24065f0c  addiu       $a2, $zero, 0x5F0C
    ctx->pc = 0x1dcf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24332));
    // 0x1dcf8c: 0x4d1818  mult        $v1, $v0, $t5
    ctx->pc = 0x1dcf8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1dcf90: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1dcf90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1dcf94: 0x340781c0  ori         $a3, $zero, 0x81C0
    ctx->pc = 0x1dcf94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33216);
    // 0x1dcf98: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x1dcf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1dcf9c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1dcf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1dcfa0: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x1dcfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x1dcfa4: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x1dcfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x1dcfa8: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x1dcfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x1dcfac: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x1dcfacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x1dcfb0: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x1dcfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x1dcfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFB4u;
        // 0x1dcfb8: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCFBCu;
    // 0x1dcfbc: 0x0  nop
    ctx->pc = 0x1dcfbcu;
    // NOP
    if (ctx->pc == 0x1dcfbcu) { ctx->pc = 0x1dcfc0u; }
}
