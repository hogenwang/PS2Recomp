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

// Function: sub_002F6910
// Address: 0x2f6910 - 0x2f6990
void sub_002F6910_0x2f6910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6910_0x2f6910");
#endif

    switch (ctx->pc) {
        case 0x2f6948u: goto label_2f6948;
        default: break;
    }

    ctx->pc = 0x2f6910u;

    // 0x2f6910: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f6910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6914: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2f6914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6918: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F6918u;
    {
        const bool branch_taken_0x2f6918 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6918u;
        // 0x2f691c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6918) {
            ctx->pc = 0x2F6980u;
            goto label_2f6980;
        }
    }
    ctx->pc = 0x2F6920u;
    // 0x2f6920: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2f6920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2f6924: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2f6924u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f6928: 0x2445b7c8  addiu       $a1, $v0, -0x4838
    ctx->pc = 0x2f6928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948808));
    // 0x2f692c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f692cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f6930: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f6930u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6934: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f6934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f6938: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F6938u;
    {
        const bool branch_taken_0x2f6938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6938u;
        // 0x2f693c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6938) {
            ctx->pc = 0x2F6980u;
            goto label_2f6980;
        }
    }
    ctx->pc = 0x2F6940u;
    // 0x2f6940: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2f6940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6944: 0x0  nop
    ctx->pc = 0x2f6944u;
    // NOP
label_2f6948:
    // 0x2f6948: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f6948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f694c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2f694cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2f6950: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x2f6950u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f6954: 0x710b8  dsll        $v0, $a3, 2
    ctx->pc = 0x2f6954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 2);
    // 0x2f6958: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x2f6958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x2f695c: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x2f695cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x2f6960: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x2f6960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2f6964: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x2f6964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2f6968: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2f6968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2f696c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2f696cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6970: 0x44382d  daddu       $a3, $v0, $a0
    ctx->pc = 0x2f6970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2f6974: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2f6974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2f6978: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F6978u;
    {
        const bool branch_taken_0x2f6978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6978u;
        // 0x2f697c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6978) {
            ctx->pc = 0x2F6948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6948;
        }
    }
    ctx->pc = 0x2F6980u;
label_2f6980:
    // 0x2f6980: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x2f6980u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x2f6984: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6984u;
        // 0x2f6988: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F698Cu;
    // 0x2f698c: 0x0  nop
    ctx->pc = 0x2f698cu;
    // NOP
    if (ctx->pc == 0x2f698cu) { ctx->pc = 0x2f6990u; }
}
