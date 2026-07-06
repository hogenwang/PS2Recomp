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

// Function: sub_002CF420
// Address: 0x2cf420 - 0x2cf4b8
void sub_002CF420_0x2cf420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF420_0x2cf420");
#endif

    switch (ctx->pc) {
        case 0x2cf45cu: goto label_2cf45c;
        default: break;
    }

    ctx->pc = 0x2cf420u;

    // 0x2cf420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf42c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf430: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2cf430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2cf434: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf438: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cf438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf43c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cf43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cf440: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2cf440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cf444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cf448: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cf448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf44c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2cf44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cf450: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2cf450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cf454: 0xc0b3e8e  jal         func_2CFA38
    ctx->pc = 0x2CF454u;
    SET_GPR_U32(ctx, 31, 0x2CF45Cu);
    ctx->pc = 0x2CF458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF454u;
    // 0x2cf458: 0x24460008  addiu       $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFA38u, 0x2CF454u, 0x2CF45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF45Cu;
label_2cf45c:
    // 0x2cf45c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2CF45Cu;
    {
        const bool branch_taken_0x2cf45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf45c) {
            ctx->pc = 0x2CF460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF45Cu;
            // 0x2cf460: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF49Cu;
            goto label_2cf49c;
        }
    }
    ctx->pc = 0x2CF464u;
    // 0x2cf464: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2cf464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cf468: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cf468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cf46c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2cf46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cf470: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf474: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2cf474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x2cf478: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2cf478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cf47c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cf47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cf480: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2cf480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2cf484: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2cf484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cf488: 0xac930004  sw          $s3, 0x4($a0)
    ctx->pc = 0x2cf488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 19));
    // 0x2cf48c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2cf48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cf490: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cf490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cf494: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2cf494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2cf498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf49c:
    // 0x2cf49c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf49cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf4a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf4a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf4a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cf4a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf4a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cf4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4ACu;
        // 0x2cf4b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF4B4u;
    // 0x2cf4b4: 0x0  nop
    ctx->pc = 0x2cf4b4u;
    // NOP
    if (ctx->pc == 0x2cf4b4u) { ctx->pc = 0x2cf4b8u; }
}
