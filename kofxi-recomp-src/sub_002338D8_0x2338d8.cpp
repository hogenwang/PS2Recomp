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

// Function: sub_002338D8
// Address: 0x2338d8 - 0x233980
void sub_002338D8_0x2338d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002338D8_0x2338d8");
#endif

    switch (ctx->pc) {
        case 0x23390cu: goto label_23390c;
        case 0x233924u: goto label_233924;
        default: break;
    }

    ctx->pc = 0x2338d8u;

    // 0x2338d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2338d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2338dc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2338dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2338e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2338e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2338e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2338e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2338e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2338ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2338ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2338f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2338f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2338f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2338f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2338fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2338fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233900: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x233900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x233904: 0xc098552  jal         func_261548
    ctx->pc = 0x233904u;
    SET_GPR_U32(ctx, 31, 0x23390Cu);
    ctx->pc = 0x233908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233904u;
    // 0x233908: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x233904u, 0x23390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23390Cu;
label_23390c:
    // 0x23390c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23390cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233910: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233910u;
    {
        const bool branch_taken_0x233910 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x233914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233910u;
        // 0x233914: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233910) {
            ctx->pc = 0x233928u;
            goto label_233928;
        }
    }
    ctx->pc = 0x233918u;
    // 0x233918: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x233918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x23391c: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x23391Cu;
    SET_GPR_U32(ctx, 31, 0x233924u);
    ctx->pc = 0x233920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23391Cu;
    // 0x233920: 0x248447f0  addiu       $a0, $a0, 0x47F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x23391Cu, 0x233924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233924u;
label_233924:
    // 0x233924: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x233924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_233928:
    // 0x233928: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x233928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23392c: 0x8ca4fa2c  lw          $a0, -0x5D4($a1)
    ctx->pc = 0x23392cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965804)));
    // 0x233930: 0x26230017  addiu       $v1, $s1, 0x17
    ctx->pc = 0x233930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
    // 0x233934: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x233934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x233938: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x233938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x23393c: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x23393cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x233940: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x233940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x233944: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x233944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x233948: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x233948u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23394c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x23394cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x233950: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x233950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x233954: 0xacb0fa2c  sw          $s0, -0x5D4($a1)
    ctx->pc = 0x233954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294965804), GPR_U32(ctx, 16));
    // 0x233958: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x233958u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x23395c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x23395cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x233960: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x233960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233964: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x233964u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233968: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x233968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23396c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23396cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233970: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x233970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233978: 0x3e00008  jr          $ra
    ctx->pc = 0x233978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233978u;
        // 0x23397c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233980u;
}
