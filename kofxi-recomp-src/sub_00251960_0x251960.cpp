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

// Function: sub_00251960
// Address: 0x251960 - 0x251a60
void sub_00251960_0x251960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251960_0x251960");
#endif

    switch (ctx->pc) {
        case 0x2519b0u: goto label_2519b0;
        case 0x2519ecu: goto label_2519ec;
        case 0x251a18u: goto label_251a18;
        default: break;
    }

    ctx->pc = 0x251960u;

    // 0x251960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x251960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x251964: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x251964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x251968: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x251968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25196c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25196cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251970: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x251970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x251974: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x251974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x251978: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x251978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25197c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x25197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x251980: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x251980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x251984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251988: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x251988u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25198c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x25198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x251990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x251990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x251994: 0x2452ffec  addiu       $s2, $v0, -0x14
    ctx->pc = 0x251994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x251998: 0x1a40001a  blez        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x251998u;
    {
        const bool branch_taken_0x251998 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x25199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251998u;
        // 0x25199c: 0x26910014  addiu       $s1, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251998) {
            ctx->pc = 0x251A04u;
            goto label_251a04;
        }
    }
    ctx->pc = 0x2519A0u;
    // 0x2519a0: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x2519a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2519a4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2519A4u;
    {
        const bool branch_taken_0x2519a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2519a4) {
            ctx->pc = 0x2519A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2519A4u;
            // 0x2519a8: 0x2622ffec  addiu       $v0, $s1, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251A08u;
            goto label_251a08;
        }
    }
    ctx->pc = 0x2519ACu;
    // 0x2519ac: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2519acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2519b0:
    // 0x2519b0: 0x54550005  bnel        $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2519B0u;
    {
        const bool branch_taken_0x2519b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2519b0) {
            ctx->pc = 0x2519B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2519B0u;
            // 0x2519b4: 0x92700001  lbu         $s0, 0x1($s3) (Delay Slot)
            SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2519C8u;
            goto label_2519c8;
        }
    }
    ctx->pc = 0x2519B8u;
    // 0x2519b8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2519b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2519bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2519bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2519c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2519C0u;
    {
        const bool branch_taken_0x2519c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519C0u;
        // 0x2519c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519c0) {
            ctx->pc = 0x2519ECu;
            goto label_2519ec;
        }
    }
    ctx->pc = 0x2519C8u;
label_2519c8:
    // 0x2519c8: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x2519c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2519cc: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x2519ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2519d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2519D0u;
    {
        const bool branch_taken_0x2519d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519D0u;
        // 0x2519d4: 0x242800b  movn        $s0, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519d0) {
            ctx->pc = 0x2519ECu;
            goto label_2519ec;
        }
    }
    ctx->pc = 0x2519D8u;
    // 0x2519d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2519d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2519dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2519dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2519e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2519e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2519e4: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2519E4u;
    SET_GPR_U32(ctx, 31, 0x2519ECu);
    ctx->pc = 0x2519E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2519E4u;
    // 0x2519e8: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2519E4u, 0x2519ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2519ECu;
label_2519ec:
    // 0x2519ec: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2519ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2519f0: 0x1a400004  blez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2519F0u;
    {
        const bool branch_taken_0x2519f0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2519F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519F0u;
        // 0x2519f4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519f0) {
            ctx->pc = 0x251A04u;
            goto label_251a04;
        }
    }
    ctx->pc = 0x2519F8u;
    // 0x2519f8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2519f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2519fc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2519FCu;
    {
        const bool branch_taken_0x2519fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2519fc) {
            ctx->pc = 0x2519B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2519b0;
        }
    }
    ctx->pc = 0x251A04u;
label_251a04:
    // 0x251a04: 0x2622ffec  addiu       $v0, $s1, -0x14
    ctx->pc = 0x251a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
label_251a08:
    // 0x251a08: 0x548023  subu        $s0, $v0, $s4
    ctx->pc = 0x251a08u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x251a0c: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x251a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x251a10: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x251A10u;
    {
        const bool branch_taken_0x251a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A10u;
        // 0x251a14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a10) {
            ctx->pc = 0x251A38u;
            goto label_251a38;
        }
    }
    ctx->pc = 0x251A18u;
label_251a18:
    // 0x251a18: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x251a18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x251a1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x251a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x251a20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x251a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x251a24: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x251a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x251a28: 0x0  nop
    ctx->pc = 0x251a28u;
    // NOP
    // 0x251a2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x251A2Cu;
    {
        const bool branch_taken_0x251a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251a2c) {
            ctx->pc = 0x251A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_251a18;
        }
    }
    ctx->pc = 0x251A34u;
    // 0x251a34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x251a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_251a38:
    // 0x251a38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x251a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251a3c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x251a3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251a40: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x251a40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251a44: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x251a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251a48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x251a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251a4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x251a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251a54: 0x3e00008  jr          $ra
    ctx->pc = 0x251A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A54u;
        // 0x251a58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251A5Cu;
    // 0x251a5c: 0x0  nop
    ctx->pc = 0x251a5cu;
    // NOP
    if (ctx->pc == 0x251a5cu) { ctx->pc = 0x251a60u; }
}
