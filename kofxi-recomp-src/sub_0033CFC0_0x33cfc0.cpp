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

// Function: sub_0033CFC0
// Address: 0x33cfc0 - 0x33d070
void sub_0033CFC0_0x33cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CFC0_0x33cfc0");
#endif

    switch (ctx->pc) {
        case 0x33d03cu: goto label_33d03c;
        default: break;
    }

    ctx->pc = 0x33cfc0u;

    // 0x33cfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33cfc4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33cfc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33cfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33cfcc: 0x240404b4  addiu       $a0, $zero, 0x4B4
    ctx->pc = 0x33cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33cfd0: 0x90659730  lbu         $a1, -0x68D0($v1)
    ctx->pc = 0x33cfd0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940464)));
    // 0x33cfd4: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x33cfd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33cfd8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33cfdc: 0x24638b10  addiu       $v1, $v1, -0x74F0
    ctx->pc = 0x33cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937360));
    // 0x33cfe0: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x33cfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33cfe4: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x33cfe4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x33cfe8: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33CFE8u;
    {
        const bool branch_taken_0x33cfe8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33cfe8) {
            ctx->pc = 0x33D03Cu;
            goto label_33d03c;
        }
    }
    ctx->pc = 0x33CFF0u;
    // 0x33cff0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x33cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33cff4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33cff8: 0xa4c40002  sh          $a0, 0x2($a2)
    ctx->pc = 0x33cff8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x33cffc: 0x8c65e8c8  lw          $a1, -0x1738($v1)
    ctx->pc = 0x33cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d000: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x33d000u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x33d004: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x33d004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x33d008: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33D008u;
    {
        const bool branch_taken_0x33d008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d008) {
            ctx->pc = 0x33D03Cu;
            goto label_33d03c;
        }
    }
    ctx->pc = 0x33D010u;
    // 0x33d010: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x33d010u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33d014: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x33d014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33d018: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x33d018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x33d01c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d020: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x33d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33d024: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x33d024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x33d028: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33d028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33d02c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x33d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x33d030: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x33d030u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33d034: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x33D034u;
    SET_GPR_U32(ctx, 31, 0x33D03Cu);
    ctx->pc = 0x33D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D034u;
    // 0x33d038: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x33D034u, 0x33D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D03Cu;
label_33d03c:
    // 0x33d03c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d040: 0x8c63e8c8  lw          $v1, -0x1738($v1)
    ctx->pc = 0x33d040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d044: 0x58600005  blezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D044u;
    {
        const bool branch_taken_0x33d044 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33d044) {
            ctx->pc = 0x33D048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D044u;
            // 0x33d048: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D05Cu;
            goto label_33d05c;
        }
    }
    ctx->pc = 0x33D04Cu;
    // 0x33d04c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x33d04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33d050: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d054: 0xac64e8c8  sw          $a0, -0x1738($v1)
    ctx->pc = 0x33d054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 4));
    // 0x33d058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33d058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d05c:
    // 0x33d05c: 0x3e00008  jr          $ra
    ctx->pc = 0x33D05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D05Cu;
        // 0x33d060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D064u;
    // 0x33d064: 0x0  nop
    ctx->pc = 0x33d064u;
    // NOP
    // 0x33d068: 0x0  nop
    ctx->pc = 0x33d068u;
    // NOP
    // 0x33d06c: 0x0  nop
    ctx->pc = 0x33d06cu;
    // NOP
    if (ctx->pc == 0x33d06cu) { ctx->pc = 0x33d070u; }
}
