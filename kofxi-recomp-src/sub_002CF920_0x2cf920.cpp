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

// Function: sub_002CF920
// Address: 0x2cf920 - 0x2cfa38
void sub_002CF920_0x2cf920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF920_0x2cf920");
#endif

    switch (ctx->pc) {
        case 0x2cf978u: goto label_2cf978;
        case 0x2cf9a0u: goto label_2cf9a0;
        case 0x2cf9a8u: goto label_2cf9a8;
        default: break;
    }

    ctx->pc = 0x2cf920u;

    // 0x2cf920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cf920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cf924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf92c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf930: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cf930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cf934: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2cf934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf938: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cf938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cf93c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2cf93cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf940: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cf940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cf944: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2cf944u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf948: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf94c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cf94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cf950: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cf950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf954: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2cf954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cf958: 0x24b2000a  addiu       $s2, $a1, 0xA
    ctx->pc = 0x2cf958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x2cf95c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2cf95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cf960: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x2cf960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2cf964: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2cf964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cf968: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CF968u;
    {
        const bool branch_taken_0x2cf968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF968u;
        // 0x2cf96c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf968) {
            ctx->pc = 0x2CF9B4u;
            goto label_2cf9b4;
        }
    }
    ctx->pc = 0x2CF970u;
    // 0x2cf970: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2CF970u;
    SET_GPR_U32(ctx, 31, 0x2CF978u);
    ctx->pc = 0x2CF974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF970u;
    // 0x2cf974: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2CF970u, 0x2CF978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF978u;
label_2cf978:
    // 0x2cf978: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cf978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf97c: 0x24020206  addiu       $v0, $zero, 0x206
    ctx->pc = 0x2cf97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x2cf980: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CF980u;
    {
        const bool branch_taken_0x2cf980 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF980u;
        // 0x2cf984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf980) {
            ctx->pc = 0x2CFA10u;
            goto label_2cfa10;
        }
    }
    ctx->pc = 0x2CF988u;
    // 0x2cf988: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cf988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf98c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2cf98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cf990: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x2cf990u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cf994: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2cf994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2cf998: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CF998u;
    SET_GPR_U32(ctx, 31, 0x2CF9A0u);
    ctx->pc = 0x2CF99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF998u;
    // 0x2cf99c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2CF998u, 0x2CF9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF9A0u;
label_2cf9a0:
    // 0x2cf9a0: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2CF9A0u;
    SET_GPR_U32(ctx, 31, 0x2CF9A8u);
    ctx->pc = 0x2CF9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF9A0u;
    // 0x2cf9a4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2CF9A0u, 0x2CF9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF9A8u;
label_2cf9a8:
    // 0x2cf9a8: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2cf9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x2cf9ac: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x2cf9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x2cf9b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cf9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cf9b4:
    // 0x2cf9b4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2cf9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2cf9b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2cf9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cf9bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cf9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cf9c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf9c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf9c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf9cc: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x2cf9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x2cf9d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cf9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf9d4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2cf9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cf9d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2cf9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2cf9dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf9e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf9e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cf9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cf9e8: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x2cf9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x2cf9ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cf9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf9f0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2cf9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cf9f4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2cf9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2cf9f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf9fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2cf9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cfa00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cfa00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cfa04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cfa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cfa08: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x2cfa08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
    // 0x2cfa0c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2cfa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2cfa10:
    // 0x2cfa10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfa10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfa14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cfa14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cfa18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cfa18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfa1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cfa1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cfa20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cfa20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfa24: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cfa24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cfa28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cfa28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfa2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA2Cu;
        // 0x2cfa30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFA34u;
    // 0x2cfa34: 0x0  nop
    ctx->pc = 0x2cfa34u;
    // NOP
}
