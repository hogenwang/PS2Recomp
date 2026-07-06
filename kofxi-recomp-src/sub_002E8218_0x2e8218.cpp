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

// Function: sub_002E8218
// Address: 0x2e8218 - 0x2e8338
void sub_002E8218_0x2e8218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8218_0x2e8218");
#endif

    switch (ctx->pc) {
        case 0x2e821cu: goto label_2e821c;
        case 0x2e8268u: goto label_2e8268;
        case 0x2e8274u: goto label_2e8274;
        case 0x2e8294u: goto label_2e8294;
        case 0x2e82b4u: goto label_2e82b4;
        case 0x2e82d4u: goto label_2e82d4;
        case 0x2e8304u: goto label_2e8304;
        case 0x2e830cu: goto label_2e830c;
        default: break;
    }

    ctx->pc = 0x2e8218u;

    // 0x2e8218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e821c:
    // 0x2e821c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e8220: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e8220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e8224: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e8224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e8228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e822c: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2e822cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2e8230: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x2e8230u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x2e8234: 0x3c0c003c  lui         $t4, 0x3C
    ctx->pc = 0x2e8234u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)60 << 16));
    // 0x2e8238: 0xac46ea24  sw          $a2, -0x15DC($v0)
    ctx->pc = 0x2e8238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961700), GPR_U32(ctx, 6));
    // 0x2e823c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e823cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8240: 0xac67ea28  sw          $a3, -0x15D8($v1)
    ctx->pc = 0x2e8240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961704), GPR_U32(ctx, 7));
    // 0x2e8244: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e8244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8248: 0xad48ea30  sw          $t0, -0x15D0($t2)
    ctx->pc = 0x2e8248u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294961712), GPR_U32(ctx, 8));
    // 0x2e824c: 0xad69ea34  sw          $t1, -0x15CC($t3)
    ctx->pc = 0x2e824cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294961716), GPR_U32(ctx, 9));
    // 0x2e8250: 0xad80ea2c  sw          $zero, -0x15D4($t4)
    ctx->pc = 0x2e8250u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294961708), GPR_U32(ctx, 0));
    // 0x2e8254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e8258: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2e8258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2e825c: 0xac40fd98  sw          $zero, -0x268($v0)
    ctx->pc = 0x2e825cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966680), GPR_U32(ctx, 0));
    // 0x2e8260: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e8260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e8264: 0x24c6fab8  addiu       $a2, $a2, -0x548
    ctx->pc = 0x2e8264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965944));
label_2e8268:
    // 0x2e8268: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e826c: 0xc0b9422  jal         func_2E5088
    ctx->pc = 0x2E826Cu;
    SET_GPR_U32(ctx, 31, 0x2E8274u);
    ctx->pc = 0x2E8270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E826Cu;
    // 0x2e8270: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5088u, 0x2E826Cu, 0x2E8274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8274u;
label_2e8274:
    // 0x2e8274: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e8274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e8278: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E8278u;
    {
        const bool branch_taken_0x2e8278 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8278u;
        // 0x2e827c: 0xac62ea10  sw          $v0, -0x15F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8278) {
            ctx->pc = 0x2E82C0u;
            goto label_2e82c0;
        }
    }
    ctx->pc = 0x2E8280u;
    // 0x2e8280: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e8280u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e8284: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8288: 0x24c6fad0  addiu       $a2, $a2, -0x530
    ctx->pc = 0x2e8288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965968));
    // 0x2e828c: 0xc0b9422  jal         func_2E5088
    ctx->pc = 0x2E828Cu;
    SET_GPR_U32(ctx, 31, 0x2E8294u);
    ctx->pc = 0x2E8290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E828Cu;
    // 0x2e8290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5088u, 0x2E828Cu, 0x2E8294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8294u;
label_2e8294:
    // 0x2e8294: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e8294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e8298: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8298u;
    {
        const bool branch_taken_0x2e8298 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8298u;
        // 0x2e829c: 0xac62ea14  sw          $v0, -0x15EC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8298) {
            ctx->pc = 0x2E82C0u;
            goto label_2e82c0;
        }
    }
    ctx->pc = 0x2E82A0u;
    // 0x2e82a0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e82a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e82a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e82a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e82a8: 0x24c6faf0  addiu       $a2, $a2, -0x510
    ctx->pc = 0x2e82a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966000));
    // 0x2e82ac: 0xc0b9422  jal         func_2E5088
    ctx->pc = 0x2E82ACu;
    SET_GPR_U32(ctx, 31, 0x2E82B4u);
    ctx->pc = 0x2E82B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E82ACu;
    // 0x2e82b0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5088u, 0x2E82ACu, 0x2E82B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E82B4u;
label_2e82b4:
    // 0x2e82b4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e82b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E82B8u;
    {
        const bool branch_taken_0x2e82b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82B8u;
        // 0x2e82bc: 0xac62ea18  sw          $v0, -0x15E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82b8) {
            ctx->pc = 0x2E82C8u;
            goto label_2e82c8;
        }
    }
    ctx->pc = 0x2E82C0u;
label_2e82c0:
    // 0x2e82c0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E82C0u;
    {
        const bool branch_taken_0x2e82c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82C0u;
        // 0x2e82c4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82c0) {
            ctx->pc = 0x2E8324u;
            goto label_2e8324;
        }
    }
    ctx->pc = 0x2E82C8u;
label_2e82c8:
    // 0x2e82c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2e82c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e82cc: 0xc098590  jal         func_261640
    ctx->pc = 0x2E82CCu;
    SET_GPR_U32(ctx, 31, 0x2E82D4u);
    ctx->pc = 0x2E82D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E82CCu;
    // 0x2e82d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261640u, 0x2E82CCu, 0x2E82D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E82D4u;
label_2e82d4:
    // 0x2e82d4: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2e82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2e82d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E82D8u;
    {
        const bool branch_taken_0x2e82d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82D8u;
        // 0x2e82dc: 0xac62fd90  sw          $v0, -0x270($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82d8) {
            ctx->pc = 0x2E82E8u;
            goto label_2e82e8;
        }
    }
    ctx->pc = 0x2E82E0u;
    // 0x2e82e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E82E0u;
    {
        const bool branch_taken_0x2e82e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82E0u;
        // 0x2e82e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82e0) {
            ctx->pc = 0x2E8324u;
            goto label_2e8324;
        }
    }
    ctx->pc = 0x2E82E8u;
label_2e82e8:
    // 0x2e82e8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e82e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e82ec: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x2e82ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x2e82f0: 0x248474c8  addiu       $a0, $a0, 0x74C8
    ctx->pc = 0x2e82f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29896));
    // 0x2e82f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e82f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e82f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e82f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e82fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e82fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8300: 0x2529fb08  addiu       $t1, $t1, -0x4F8
    ctx->pc = 0x2e8300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966024));
label_2e8304:
    // 0x2e8304: 0xc0b943a  jal         func_2E50E8
    ctx->pc = 0x2E8304u;
    SET_GPR_U32(ctx, 31, 0x2E830Cu);
    ctx->pc = 0x2E8308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8304u;
    // 0x2e8308: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50E8u, 0x2E8304u, 0x2E830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E830Cu;
label_2e830c:
    // 0x2e830c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2e830cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2e8310: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e8310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8314: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2e8314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e8318: 0xac82ea20  sw          $v0, -0x15E0($a0)
    ctx->pc = 0x2e8318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961696), GPR_U32(ctx, 2));
    // 0x2e831c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2e831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e8320: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2e8320u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2e8324:
    // 0x2e8324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8328: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e8328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e832c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e832cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8330: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8330u;
        // 0x2e8334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8338u;
}
