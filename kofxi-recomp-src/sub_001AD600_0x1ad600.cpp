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

// Function: sub_001AD600
// Address: 0x1ad600 - 0x1ad680
void sub_001AD600_0x1ad600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD600_0x1ad600");
#endif

    ctx->pc = 0x1ad600u;

    // 0x1ad600: 0x28a50012  slti        $a1, $a1, 0x12
    ctx->pc = 0x1ad600u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1ad604: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ad604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad608: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AD608u;
    {
        const bool branch_taken_0x1ad608 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD608u;
        // 0x1ad60c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad608) {
            ctx->pc = 0x1AD678u;
            goto label_1ad678;
        }
    }
    ctx->pc = 0x1AD610u;
    // 0x1ad610: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1ad610u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ad614: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1ad614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ad618: 0x2408ff00  addiu       $t0, $zero, -0x100
    ctx->pc = 0x1ad618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ad61c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1ad61cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ad620: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1ad620u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1ad624: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ad624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ad628: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ad628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ad62c: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AD62Cu;
    {
        const bool branch_taken_0x1ad62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AD630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD62Cu;
        // 0x1ad630: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad62c) {
            ctx->pc = 0x1AD678u;
            goto label_1ad678;
        }
    }
    ctx->pc = 0x1AD634u;
    // 0x1ad634: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x1ad634u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1ad638: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x1ad638u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1ad63c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1ad63cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1ad640: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x1ad640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1ad644: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ad644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ad648: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ad648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ad64c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1ad64cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1ad650: 0x2863000e  slti        $v1, $v1, 0xE
    ctx->pc = 0x1ad650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1ad654: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD654u;
    {
        const bool branch_taken_0x1ad654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD654u;
        // 0x1ad658: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad654) {
            ctx->pc = 0x1AD678u;
            goto label_1ad678;
        }
    }
    ctx->pc = 0x1AD65Cu;
    // 0x1ad65c: 0x94e40010  lhu         $a0, 0x10($a3)
    ctx->pc = 0x1ad65cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1ad660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad664: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x1ad664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1ad668: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x1ad668u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1ad66c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1ad66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1ad670: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ad670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ad674: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x1ad674u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_1ad678:
    // 0x1ad678: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD680u;
}
