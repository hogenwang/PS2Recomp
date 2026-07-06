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

// Function: sub_00100960
// Address: 0x100960 - 0x1009e8
void sub_00100960_0x100960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100960_0x100960");
#endif

    ctx->pc = 0x100960u;

    // 0x100960: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x100960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x100964: 0x32310002  andi        $s1, $s1, 0x2
    ctx->pc = 0x100964u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x100968: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x100968u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x10096c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10096Cu;
    {
        const bool branch_taken_0x10096c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x100970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10096Cu;
        // 0x100970: 0x108183  sra         $s0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10096c) {
            ctx->pc = 0x10098Cu;
            goto label_10098c;
        }
    }
    ctx->pc = 0x100974u;
    // 0x100974: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x100974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x100978: 0x2643007e  addiu       $v1, $s2, 0x7E
    ctx->pc = 0x100978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 126));
    // 0x10097c: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x10097cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100980: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x100980u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x100984: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x100984u;
    {
        const bool branch_taken_0x100984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100984u;
        // 0x100988: 0x33183  sra         $a2, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100984) {
            ctx->pc = 0x1009A0u;
            goto label_1009a0;
        }
    }
    ctx->pc = 0x10098Cu;
label_10098c:
    // 0x10098c: 0x2642001f  addiu       $v0, $s2, 0x1F
    ctx->pc = 0x10098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
    // 0x100990: 0x2643003e  addiu       $v1, $s2, 0x3E
    ctx->pc = 0x100990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 62));
    // 0x100994: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x100994u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100998: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x100998u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x10099c: 0x33143  sra         $a2, $v1, 5
    ctx->pc = 0x10099cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 5));
label_1009a0:
    // 0x1009a0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1009a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1009a4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1009a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1009a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1009a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1009ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1009acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1009b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1009b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1009b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1009b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1009b8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1009B8u;
    {
        const bool branch_taken_0x1009b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1009BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009B8u;
        // 0x1009bc: 0x2061018  mult        $v0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009b8) {
            ctx->pc = 0x1009C8u;
            goto label_1009c8;
        }
    }
    ctx->pc = 0x1009C0u;
    // 0x1009c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1009C0u;
    {
        const bool branch_taken_0x1009c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009C0u;
        // 0x1009c4: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009c0) {
            ctx->pc = 0x1009CCu;
            goto label_1009cc;
        }
    }
    ctx->pc = 0x1009C8u;
label_1009c8:
    // 0x1009c8: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x1009c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_1009cc:
    // 0x1009cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1009ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1009d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1009d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1009d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1009d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1009d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1009d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1009dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1009dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1009e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1009E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1009E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009E0u;
        // 0x1009e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1009E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1009E8u;
}
