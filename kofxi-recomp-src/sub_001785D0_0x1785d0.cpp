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

// Function: sub_001785D0
// Address: 0x1785d0 - 0x178670
void sub_001785D0_0x1785d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001785D0_0x1785d0");
#endif

    switch (ctx->pc) {
        case 0x178608u: goto label_178608;
        case 0x178648u: goto label_178648;
        default: break;
    }

    ctx->pc = 0x1785d0u;

    // 0x1785d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1785d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1785d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1785d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1785d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1785d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1785dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1785dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1785e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1785e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1785e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1785e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1785e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1785ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1785f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1785f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785f4: 0x94830016  lhu         $v1, 0x16($a0)
    ctx->pc = 0x1785f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x1785f8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1785F8u;
    {
        const bool branch_taken_0x1785f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1785FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785F8u;
        // 0x1785fc: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785f8) {
            ctx->pc = 0x178648u;
            goto label_178648;
        }
    }
    ctx->pc = 0x178600u;
    // 0x178600: 0xc067ccc  jal         func_19F330
    ctx->pc = 0x178600u;
    SET_GPR_U32(ctx, 31, 0x178608u);
    ctx->pc = 0x178604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178600u;
    // 0x178604: 0x92440018  lbu         $a0, 0x18($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F330u, 0x178600u, 0x178608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178608u;
label_178608:
    // 0x178608: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x178608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17860c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x17860cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x178610: 0x92440018  lbu         $a0, 0x18($s2)
    ctx->pc = 0x178610u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x178614: 0x96420016  lhu         $v0, 0x16($s2)
    ctx->pc = 0x178614u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x178618: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x178618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x17861c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x17861cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x178620: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x178620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x178624: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x178624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x178628: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x178628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x17862c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x17862cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x178630: 0xa6110008  sh          $s1, 0x8($s0)
    ctx->pc = 0x178630u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x178634: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x178634u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x178638: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x178638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x17863c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x17863cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x178640: 0xc067cc8  jal         func_19F320
    ctx->pc = 0x178640u;
    SET_GPR_U32(ctx, 31, 0x178648u);
    ctx->pc = 0x178644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178640u;
    // 0x178644: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F320u, 0x178640u, 0x178648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178648u;
label_178648:
    // 0x178648: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x178648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17864c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17864cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17865c: 0x3e00008  jr          $ra
    ctx->pc = 0x17865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17865Cu;
        // 0x178660: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17865Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178664u;
    // 0x178664: 0x0  nop
    ctx->pc = 0x178664u;
    // NOP
    // 0x178668: 0x0  nop
    ctx->pc = 0x178668u;
    // NOP
    // 0x17866c: 0x0  nop
    ctx->pc = 0x17866cu;
    // NOP
    if (ctx->pc == 0x17866cu) { ctx->pc = 0x178670u; }
}
