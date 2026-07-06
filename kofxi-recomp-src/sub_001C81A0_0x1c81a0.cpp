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

// Function: sub_001C81A0
// Address: 0x1c81a0 - 0x1c8290
void sub_001C81A0_0x1c81a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C81A0_0x1c81a0");
#endif

    switch (ctx->pc) {
        case 0x1c8250u: goto label_1c8250;
        case 0x1c826cu: goto label_1c826c;
        case 0x1c8278u: goto label_1c8278;
        default: break;
    }

    ctx->pc = 0x1c81a0u;

    // 0x1c81a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c81a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c81a4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C81A4u;
    {
        const bool branch_taken_0x1c81a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81A4u;
        // 0x1c81a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81a4) {
            ctx->pc = 0x1C81C0u;
            goto label_1c81c0;
        }
    }
    ctx->pc = 0x1C81ACu;
    // 0x1c81ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c81acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c81b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c81b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c81b4: 0x2484b128  addiu       $a0, $a0, -0x4ED8
    ctx->pc = 0x1c81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947112));
    // 0x1c81b8: 0x8071ea4  j           func_1C7A90
    ctx->pc = 0x1C81B8u;
    ctx->pc = 0x1C81BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81B8u;
    // 0x1c81bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A90u;
    sub_001C7A90_0x1c7a90(rdram, ctx, runtime); return;
    ctx->pc = 0x1C81C0u;
label_1c81c0:
    // 0x1c81c0: 0x24a3007f  addiu       $v1, $a1, 0x7F
    ctx->pc = 0x1c81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x1c81c4: 0x2c6200ff  sltiu       $v0, $v1, 0xFF
    ctx->pc = 0x1c81c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x1c81c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C81C8u;
    {
        const bool branch_taken_0x1c81c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81c8) {
            ctx->pc = 0x1C81CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C81C8u;
            // 0x1c81cc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C81ECu;
            goto label_1c81ec;
        }
    }
    ctx->pc = 0x1C81D0u;
    // 0x1c81d0: 0x28c2ff81  slti        $v0, $a2, -0x7F
    ctx->pc = 0x1c81d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967169) ? 1 : 0);
    // 0x1c81d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C81D4u;
    {
        const bool branch_taken_0x1c81d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c81d4) {
            ctx->pc = 0x1C81D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C81D4u;
            // 0x1c81d8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C81ECu;
            goto label_1c81ec;
        }
    }
    ctx->pc = 0x1C81DCu;
    // 0x1c81dc: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x1c81dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1c81e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C81E0u;
    {
        const bool branch_taken_0x1c81e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81E0u;
        // 0x1c81e4: 0x24a7ff81  addiu       $a3, $a1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81e0) {
            ctx->pc = 0x1C8200u;
            goto label_1c8200;
        }
    }
    ctx->pc = 0x1C81E8u;
    // 0x1c81e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c81e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c81ec:
    // 0x1c81ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c81ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c81f0: 0x2484b150  addiu       $a0, $a0, -0x4EB0
    ctx->pc = 0x1c81f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947152));
    // 0x1c81f4: 0x8071ea4  j           func_1C7A90
    ctx->pc = 0x1C81F4u;
    ctx->pc = 0x1C81F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81F4u;
    // 0x1c81f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A90u;
    sub_001C7A90_0x1c7a90(rdram, ctx, runtime); return;
    ctx->pc = 0x1C81FCu;
    // 0x1c81fc: 0x0  nop
    ctx->pc = 0x1c81fcu;
    // NOP
label_1c8200:
    // 0x1c8200: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8200u;
    {
        const bool branch_taken_0x1c8200 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8200u;
        // 0x1c8204: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8200) {
            ctx->pc = 0x1C820Cu;
            goto label_1c820c;
        }
    }
    ctx->pc = 0x1C8208u;
    // 0x1c8208: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1c8208u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1c820c:
    // 0x1c820c: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C820Cu;
    {
        const bool branch_taken_0x1c820c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1C8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C820Cu;
        // 0x1c8210: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c820c) {
            ctx->pc = 0x1C821Cu;
            goto label_1c821c;
        }
    }
    ctx->pc = 0x1C8214u;
    // 0x1c8214: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1c8214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1c8218: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x1c8218u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1c821c:
    // 0x1c821c: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x1c821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x1c8220: 0x24c3ff81  addiu       $v1, $a2, -0x7F
    ctx->pc = 0x1c8220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x1c8224: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8224u;
    {
        const bool branch_taken_0x1c8224 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c8224) {
            ctx->pc = 0x1C8228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8224u;
            // 0x1c8228: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C822Cu;
            goto label_1c822c;
        }
    }
    ctx->pc = 0x1C822Cu;
label_1c822c:
    // 0x1c822c: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x1c822cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x1c8230: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8230u;
    {
        const bool branch_taken_0x1c8230 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C8234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8230u;
        // 0x1c8234: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8230) {
            ctx->pc = 0x1C8240u;
            goto label_1c8240;
        }
    }
    ctx->pc = 0x1C8238u;
    // 0x1c8238: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1c8238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1c823c: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x1c823cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1c8240:
    // 0x1c8240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8244: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x1c8244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x1c8248: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8248u;
        // 0x1c824c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8250u;
label_1c8250:
    // 0x1c8250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c825c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8260: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8264: 0xc071e82  jal         func_1C7A08
    ctx->pc = 0x1C8264u;
    SET_GPR_U32(ctx, 31, 0x1C826Cu);
    ctx->pc = 0x1C8268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8264u;
    // 0x1c8268: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7A08u, 0x1C8264u, 0x1C826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C826Cu;
label_1c826c:
    // 0x1c826c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c826cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8270: 0xc0720a4  jal         func_1C8290
    ctx->pc = 0x1C8270u;
    SET_GPR_U32(ctx, 31, 0x1C8278u);
    ctx->pc = 0x1C8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8270u;
    // 0x1c8274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8290u, 0x1C8270u, 0x1C8278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8278u;
label_1c8278:
    // 0x1c8278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c827c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c827cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8284: 0x8071e88  j           func_1C7A20
    ctx->pc = 0x1C8284u;
    ctx->pc = 0x1C8288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8284u;
    // 0x1c8288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A20u;
    sub_001C7A20_0x1c7a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C828Cu;
    // 0x1c828c: 0x0  nop
    ctx->pc = 0x1c828cu;
    // NOP
    if (ctx->pc == 0x1c828cu) { ctx->pc = 0x1c8290u; }
}
