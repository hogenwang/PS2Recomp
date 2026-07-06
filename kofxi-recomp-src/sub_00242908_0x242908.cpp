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

// Function: sub_00242908
// Address: 0x242908 - 0x2429b0
void sub_00242908_0x242908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242908_0x242908");
#endif

    switch (ctx->pc) {
        case 0x242948u: goto label_242948;
        default: break;
    }

    ctx->pc = 0x242908u;

    // 0x242908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x242908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24290c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x242910: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x242910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x242914: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x242914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242918: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x242918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24291c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24291cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242924: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x242924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x242928: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x242928u;
    {
        const bool branch_taken_0x242928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242928u;
        // 0x24292c: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242928) {
            ctx->pc = 0x242994u;
            goto label_242994;
        }
    }
    ctx->pc = 0x242930u;
    // 0x242930: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x242930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x242934: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x242934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x242938: 0xdc45fec8  ld          $a1, -0x138($v0)
    ctx->pc = 0x242938u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294966984)));
    // 0x24293c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242940: 0xc08c25a  jal         func_230968
    ctx->pc = 0x242940u;
    SET_GPR_U32(ctx, 31, 0x242948u);
    ctx->pc = 0x242944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242940u;
    // 0x242944: 0xdc66fed0  ld          $a2, -0x130($v1) (Delay Slot)
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 4294966992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230968u, 0x242940u, 0x242948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242948u;
label_242948:
    // 0x242948: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x242948u;
    {
        const bool branch_taken_0x242948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242948u;
        // 0x24294c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242948) {
            ctx->pc = 0x242998u;
            goto label_242998;
        }
    }
    ctx->pc = 0x242950u;
    // 0x242950: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x242950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x242954: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x242954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x242958: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x242958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24295c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x24295cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242960: 0xa6120016  sh          $s2, 0x16($s0)
    ctx->pc = 0x242960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 18));
    // 0x242964: 0xa6040014  sh          $a0, 0x14($s0)
    ctx->pc = 0x242964u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x242968: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x242968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24296c: 0x8c62fed8  lw          $v0, -0x128($v1)
    ctx->pc = 0x24296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967000)));
    // 0x242970: 0x2464fed8  addiu       $a0, $v1, -0x128
    ctx->pc = 0x242970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967000));
    // 0x242974: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242974u;
    {
        const bool branch_taken_0x242974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242974u;
        // 0x242978: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242974) {
            ctx->pc = 0x242988u;
            goto label_242988;
        }
    }
    ctx->pc = 0x24297Cu;
    // 0x24297c: 0x8c62fed8  lw          $v0, -0x128($v1)
    ctx->pc = 0x24297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967000)));
    // 0x242980: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x242980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x242984: 0x0  nop
    ctx->pc = 0x242984u;
    // NOP
label_242988:
    // 0x242988: 0xac70fed8  sw          $s0, -0x128($v1)
    ctx->pc = 0x242988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967000), GPR_U32(ctx, 16));
    // 0x24298c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x24298cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x242990: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x242990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242994:
    // 0x242994: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x242994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_242998:
    // 0x242998: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x242998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24299c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24299cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2429a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2429a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2429a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2429A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2429A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429A4u;
        // 0x2429a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2429A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2429ACu;
    // 0x2429ac: 0x0  nop
    ctx->pc = 0x2429acu;
    // NOP
}
